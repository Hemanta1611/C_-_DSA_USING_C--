/*
## Introduction to Time Complexity

### What is Time Complexity?

**Time Complexity** is a computational concept used to describe the amount of time an algorithm takes to run as a 
function of the size of its input. It provides a theoretical measure of the performance of an algorithm, allowing us 
to compare the efficiency of different algorithms regardless of hardware or software environments.

### Why is Time Complexity Important?

1. **Performance Analysis**: Time complexity helps in understanding how an algorithm will scale as the input size increases.
2. **Efficiency Comparison**: It allows for the comparison of different algorithms to determine which one performs better for larger inputs.
3. **Optimization**: Identifying the time complexity of algorithms can help in optimizing code and improving overall performance.

### Big O Notation

Big O notation is the most commonly used notation for describing time complexity. It provides an upper bound on the time 
an algorithm takes to run, helping to understand the worst-case scenario. Here are some common time complexities and their meanings:

1. **O(1) - Constant Time**: The algorithm takes the same amount of time regardless of the input size.
   - Example: Accessing an element in an array by index.

2. **O(log n) - Logarithmic Time**: The algorithm's time increases logarithmically as the input size increases.
   - Example: Binary search.

3. **O(n) - Linear Time**: The algorithm's time increases linearly with the input size.
   - Example: Linear search.

4. **O(n log n) - Linearithmic Time**: The algorithm's time increases in a linearithmic fashion, often seen in efficient sorting algorithms.
   - Example: Merge sort, quicksort.

5. **O(n^2) - Quadratic Time**: The algorithm's time increases quadratically as the input size increases.
   - Example: Bubble sort, selection sort.

6. **O(2^n) - Exponential Time**: The algorithm's time doubles with each additional element in the input size.
   - Example: Solving the traveling salesman problem using brute force.

7. **O(n!) - Factorial Time**: The algorithm's time increases factorially with the input size.
   - Example: Solving the traveling salesman problem using brute force.

### Understanding Time Complexity with Examples

1. **Constant Time - O(1)**:
   ```cpp
   int getFirstElement(int arr[], int n) {
       return arr[0];  // Always takes the same amount of time
   }
   ```

2. **Linear Time - O(n)**:
   ```cpp
   int findElement(int arr[], int n, int key) {
       for (int i = 0; i < n; i++) {
           if (arr[i] == key) {
               return i;
           }
       }
       return -1;  // Searches through the entire array
   }
   ```

3. **Logarithmic Time - O(log n)**:
   ```cpp
   int binarySearch(int arr[], int n, int key) {
       int low = 0, high = n - 1;
       while (low <= high) {
           int mid = low + (high - low) / 2;
           if (arr[mid] == key) {
               return mid;
           } else if (arr[mid] < key) {
               low = mid + 1;
           } else {
               high = mid - 1;
           }
       }
       return -1;
   }
   ```

4. **Quadratic Time - O(n^2)**:
   ```cpp
   void bubbleSort(int arr[], int n) {
       for (int i = 0; i < n - 1; i++) {
           for (int j = 0; j < n - i - 1; j++) {
               if (arr[j] > arr[j + 1]) {
                   swap(arr[j], arr[j + 1]);
               }
           }
       }
   }
   ```

### Best, Worst, and Average Cases

- **Best Case**: The scenario where the algorithm performs the minimum number of steps (e.g., finding the first element in a search).
- **Worst Case**: The scenario where the algorithm performs the maximum number of steps (e.g., searching for an element that is not present).
- **Average Case**: The scenario that represents the average number of steps the algorithm takes for a typical input.

### Conclusion

Time complexity is a crucial aspect of algorithm analysis that helps in predicting the performance and efficiency of algorithms. 
By understanding and calculating the time complexity, developers and computer scientists can choose the most appropriate algorithm 
for their specific needs, ensuring optimal performance and resource utilization.
*/