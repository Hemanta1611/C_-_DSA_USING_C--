/*
## Abstract Data Type (ADT)

### Introduction

An Abstract Data Type (ADT) is a theoretical concept in computer science that defines a data structure purely in 
terms of its behavior from the point of view of a user. The key idea behind ADTs is to focus on what operations
can be performed on the data and what these operations do, without specifying how these operations will be implemented.

### Key Characteristics of ADTs

1. **Encapsulation**: ADTs encapsulate data and operations. Users interact with the data only through defined operations, 
hiding the underlying implementation details.
2. **Operations**: ADTs define a set of operations that can be performed on the data. 
These operations are typically defined by an interface or a set of functions.
3. **Data Independence**: The implementation of an ADT can be changed without affecting the code that uses the ADT, 
as long as the interface remains the same.

### Examples of ADTs

Here are some common examples of ADTs:

1. **List**: 
   - Operations: Insert, Delete, Access, Search
   - Description: A sequence of elements where each element has a position.

2. **Stack**:
   - Operations: Push, Pop, Peek, IsEmpty
   - Description: A collection of elements with last-in, first-out (LIFO) access.

3. **Queue**:
   - Operations: Enqueue, Dequeue, Front, IsEmpty
   - Description: A collection of elements with first-in, first-out (FIFO) access.

4. **Set**:
   - Operations: Add, Remove, Contains, Union, Intersection
   - Description: A collection of distinct elements.

5. **Dictionary (Map)**:
   - Operations: Insert, Delete, Search, Access by Key
   - Description: A collection of key-value pairs.

### Example: Stack ADT

A stack is a classic example of an ADT. Here's how you might define a stack ADT in C++:

```cpp
class Stack {
private:
    int *arr;
    int top;
    int capacity;

public:
    Stack(int size = 100);  // Constructor
    ~Stack();               // Destructor

    void push(int x);
    int pop();
    int peek();
    bool isEmpty();
    bool isFull();
};

// Implementation

Stack::Stack(int size) {
    arr = new int[size];
    capacity = size;
    top = -1;
}

Stack::~Stack() {
    delete[] arr;
}

void Stack::push(int x) {
    if (isFull()) {
        cout << "Overflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
    arr[++top] = x;
}

int Stack::pop() {
    if (isEmpty()) {
        cout << "Underflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
    return arr[top--];
}

int Stack::peek() {
    if (!isEmpty()) {
        return arr[top];
    } else {
        exit(EXIT_FAILURE);
    }
}

bool Stack::isEmpty() {
    return top == -1;
}

bool Stack::isFull() {
    return top == capacity - 1;
}
```

### Benefits of Using ADTs

1. **Modularity**: ADTs help in breaking down complex problems into simpler, manageable parts.
2. **Reusability**: Once an ADT is defined, it can be reused across different programs without modification.
3. **Maintainability**: Changes to the implementation of an ADT do not affect the code that uses the ADT, 
as long as the interface remains unchanged.
4. **Abstraction**: ADTs provide a clear separation between the interface and implementation, allowing programmers 
to focus on higher-level design.

### Conclusion

Abstract Data Types are fundamental concepts in computer science that allow for the creation of flexible, 
maintainable, and modular code. By focusing on what operations can be performed on data rather than how these 
operations are implemented, ADTs enable a high level of abstraction, which simplifies both the design and 
understanding of complex software systems.
*/