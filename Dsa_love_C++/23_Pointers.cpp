#include <iostream>
#include <vector>
using namespace std;



int main(){
    
    /*
    int a = 10;
    cout<<"a: "<< a<< endl;
    cout<<"Address of a: "<< &a<<endl;

    int* ptr = &a;
    cout<<"a: "<< *ptr<<endl;
    cout<<"Address of a: "<< ptr<< endl;

    cout<<"Size of int pointer: "<< sizeof(ptr)<<endl;

    char ch = 'H';
    char * cptr = &ch;
    cout<<"Address of ch: "<< cptr<<"Size of char pointer: "<<sizeof(cptr) <<endl;
    */

   /*
    int arr[5] = {10, 20, 30, 40, 50};
    cout<<"arr = "<< arr<<endl;
    cout<<"arr[0] = "<< arr[0]<<endl;
    cout<<"&arr[0] or &arr  = "<< &arr<<" "<<&arr[0]<<endl;
    cout<<"*arr = "<< *arr<<endl;
    cout<<"*arr[3] = "<< *(arr + 3)<<endl;
    */

    
    

    
    return 0;
}

/*
A wild pointer in C++ refers to a pointer that has not been initialized to a valid memory address. 
It often points to a random memory location, which can lead to unpredictable behavior and potentially dangerous bugs.

Here's an example and an explanation:

### Example

```cpp
#include <iostream>
using namespace std;

int main() {
    int *p;  // Wild pointer: p is declared but not initialized

    // Uncommenting the following line will cause undefined behavior
    // cout << *p << endl;  // Trying to dereference the wild pointer

    return 0;
}
```

### Explanation

Let's go through this example step-by-step:

1. `int *p;`
   - This declares a pointer `p` that is meant to point to an `int`. However, it is not initialized. 
   At this point, `p` contains a garbage value, which means it points to some random location in memory.

2. `cout << *p << endl;`
   - If you uncomment this line, the program will try to dereference `p` 
   (i.e., access the value at the memory location `p` is pointing to). 
   Since `p` is a wild pointer, this can lead to undefined behavior, which might include program crashes, 
   data corruption, or other unpredictable outcomes.

### Avoiding Wild Pointers

To avoid wild pointers, always initialize your pointers:

1. **Initialize to nullptr:**

   ```cpp
   int *p = nullptr;
   ```

   This makes `p` a null pointer, which does not point to any valid memory location. 
   Dereferencing a null pointer will result in a runtime error, which is easier to debug than 
   unpredictable behavior caused by wild pointers.

2. **Allocate Memory:**

   ```cpp
   int *p = new int;  // Allocate memory and make p point to it
   *p = 42;  // Now it's safe to dereference p
   cout << *p << endl;
   delete p;  // Don't forget to free the memory
   p = nullptr;  // Avoid dangling pointer
   ```

   This ensures that `p` points to a valid memory location. After you're done using the pointer, 
   always deallocate the memory using `delete` to avoid memory leaks.

3. **Use Smart Pointers (C++11 and later):**

   ```cpp
   #include <memory>

   int main() {
       std::unique_ptr<int> p = std::make_unique<int>(42);
       cout << *p << endl;  // Safe to use
       // No need to manually delete the memory
       return 0;
   }
   ```

   Smart pointers automatically manage the memory they own, reducing the risk of memory leaks and dangling pointers.

By following these practices, you can avoid the pitfalls of wild pointers in C++.



A `void` pointer, also known as a generic pointer, is a special type of pointer in C++ that can point 
to any data type. The type of data it points to is not specified, allowing it to be used flexibly. 
However, because the data type is not specified, you cannot directly dereference a `void` pointer 
without first casting it to another pointer type.

Here's a detailed explanation with examples:

### Declaration and Usage

#### Declaration
```cpp
void* ptr;
```

This declares a `void` pointer named `ptr`.

#### Assigning a Value to a `void` Pointer
You can assign the address of any data type to a `void` pointer:

```cpp
int i = 10;
void* ptr = &i;  // ptr now points to an int
```

#### Dereferencing a `void` Pointer
Before you can dereference a `void` pointer, you must cast it to a pointer of the appropriate type:

```cpp
int i = 10;
void* ptr = &i;  // ptr now points to an int

// Cast to int* before dereferencing
int* intPtr = static_cast<int*>(ptr);
cout << *intPtr << endl;  // Output: 10
```

### Example with Detailed Explanation

```cpp
#include <iostream>
using namespace std;

void printValue(void* ptr, char type) {
    switch(type) {
        case 'i':  // Integer
            cout << *static_cast<int*>(ptr) << endl;
            break;
        case 'c':  // Character
            cout << *static_cast<char*>(ptr) << endl;
            break;
        case 'f':  // Float
            cout << *static_cast<float*>(ptr) << endl;
            break;
        default:
            cout << "Unsupported type" << endl;
            break;
    }
}

int main() {
    int i = 42;
    char c = 'A';
    float f = 3.14;

    void* ptr;

    // Assigning addresses to the void pointer and printing values
    ptr = &i;
    printValue(ptr, 'i');  // Output: 42

    ptr = &c;
    printValue(ptr, 'c');  // Output: A

    ptr = &f;
    printValue(ptr, 'f');  // Output: 3.14

    return 0;
}
```

### Explanation

1. **Function Definition: `printValue(void* ptr, char type)`**
   - This function takes a `void` pointer and a character representing the type of the data it points to.
   - Using a `switch` statement, the function casts the `void` pointer to the appropriate type based on the `type` parameter 
   and then dereferences it to print the value.

2. **Main Function**
   - Three variables of different types (`int`, `char`, and `float`) are defined and initialized.
   - A `void` pointer `ptr` is declared.
   - The address of each variable is assigned to `ptr`, and the `printValue` function is called with `ptr` and 
   the corresponding type character. This demonstrates how a `void` pointer can be used to point to different 
   data types and how casting is necessary to dereference it correctly.

### Key Points

- **Flexibility:** A `void` pointer can point to any data type, making it very flexible.
- **Type Safety:** You must cast a `void` pointer to the appropriate type before dereferencing it, which 
adds a layer of type safety.
- **Usage in Generic Functions:** `void` pointers are often used in generic functions and data structures 
where the type of data is not known in advance.

By understanding and correctly using `void` pointers, you can write more flexible and generic C++ code.


A dangling pointer in C++ is a pointer that refers to a memory location that has been freed or deallocated. 
Accessing or manipulating data through a dangling pointer can lead to undefined behavior, program crashes, and 
security vulnerabilities.

### How Dangling Pointers Occur

1. **Deleting a Pointer:**
   ```cpp
   int* ptr = new int(42);
   delete ptr;  // ptr is now a dangling pointer
   // cout << *ptr << endl;  // Undefined behavior
   ```

2. **Returning Address of Local Variable:**
   ```cpp
   int* createDanglingPointer() {
       int localVar = 10;
       return &localVar;  // Returning address of a local variable
   }

   int main() {
       int* ptr = createDanglingPointer();
       // cout << *ptr << endl;  // Undefined behavior
       return 0;
   }
   ```

3. **Out-of-Scope Pointer:**
   ```cpp
   int* ptr;
   {
       int localVar = 10;
       ptr = &localVar;  // ptr points to localVar
   }
   // localVar is out of scope here
   // cout << *ptr << endl;  // Undefined behavior
   ```

### Example and Detailed Explanation

Here's an example that demonstrates a dangling pointer scenario:

```cpp
#include <iostream>
using namespace std;

void causeDanglingPointer() {
    int* ptr = new int(42);
    cout << "Value: " << *ptr << endl;  // Outputs: 42

    delete ptr;  // ptr is now a dangling pointer
    // cout << "Dangling pointer value: " << *ptr << endl;  // Undefined behavior
}

int main() {
    causeDanglingPointer();

    return 0;
}
```

### Explanation

1. **Function Definition: `causeDanglingPointer()`**
   - `int* ptr = new int(42);`: Allocates memory for an integer and initializes it to 42. `ptr` points to this memory.
   - `cout << "Value: " << *ptr << endl;`: Prints the value pointed to by `ptr`, which is 42.
   - `delete ptr;`: Frees the memory allocated for the integer. `ptr` becomes a dangling pointer because it 
   still holds the address of the now-deallocated memory.
   - `// cout << "Dangling pointer value: " << *ptr << endl;`: This line is commented out because 
   dereferencing `ptr` now would result in undefined behavior.

### Avoiding Dangling Pointers

1. **Set Pointer to `nullptr` After Deletion:**
   ```cpp
   int* ptr = new int(42);
   delete ptr;
   ptr = nullptr;  // ptr is no longer dangling
   ```

2. **Use Smart Pointers (C++11 and later):**
   Smart pointers automatically manage the memory they own and help prevent dangling pointers.
   ```cpp
   #include <memory>
   using namespace std;

   void useSmartPointer() {
       unique_ptr<int> ptr = make_unique<int>(42);
       cout << "Value: " << *ptr << endl;  // Outputs: 42
       // No need to delete ptr, it will be automatically cleaned up
   }

   int main() {
       useSmartPointer();
       return 0;
   }
   ```

3. **Avoid Returning Addresses of Local Variables:**
   Ensure functions do not return addresses of local variables that go out of scope.

4. **Be Cautious with Scope:**
   Ensure that pointers are not left pointing to memory that goes out of scope.

By following these practices, you can avoid the pitfalls of dangling pointers and write more robust and safer C++ code.


Summary:

Declaration: int *ptr; declares a pointer to an integer.
Assignment: ptr = &var; assigns the address of var to ptr.
Dereferencing: *ptr accesses the value at the address stored in ptr.
Dynamic Memory Allocation: int *ptr = new int; allocates memory and delete ptr; deallocates it.
Array Access: Pointers can be used to access array elements.
Pointer to Pointer: int **pptr = &ptr; allows a pointer to another pointer.
*/