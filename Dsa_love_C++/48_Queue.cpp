#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <deque>
using namespace std;

// Queue using an array
class Queue {
public:
    int *arr;
    int front;
    int rear;
    int size;

    Queue(int size) {
        arr = new int[size];
        front = -1;
        rear = -1;
        this->size = size;
    }

    ~Queue() {
        delete[] arr;  // Free the allocated memory
    }

    void push(int element) {
        if (rear == size - 1) {
            cout << "Queue is full" << endl;
            return;
        }
        if (front == -1) {
            front = 0;
        }
        rear++;
        arr[rear] = element;
    }

    void pop() {
        if (front == -1 && rear == -1) {
            cout << "Queue is empty" << endl;
            return;
        }
        if (front == rear) {
            // Queue has only one element, so reset it
            front = -1;
            rear = -1;
        } else {
            front++;
        }
    }

    int getFront() {
        if (front == -1 && rear == -1) {
            cout << "Queue is empty" << endl;
            return -1;  // Return an invalid value or handle it differently
        }
        return arr[front];
    }

    int getBack() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;  // Return an invalid value or handle it differently
        }
        return arr[rear];
    }

    bool isEmpty() {
        return front == -1 && rear == -1;
    }

    int getSize() {
        if (isEmpty()) {
            return 0;
        }
        return rear - front + 1;
    }

    void print() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

class CircularQueue {
public:
    int *arr;
    int front;
    int rear;
    int size;

    CircularQueue(int size) {
        arr = new int[size];
        front = -1;
        rear = -1;
        this->size = size;
    }

    ~CircularQueue() {
        delete[] arr;  // Free the allocated memory
    }

    void push(int element) {
        if ((rear + 1) % size == front) {
            cout << "Queue is full" << endl;
            return;
        }
        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1) % size;
        arr[rear] = element;
    }

    void pop() {
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return;
        }
        if (front == rear) {
            // Queue has only one element, so reset it
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % size;
        }
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;  // Return an invalid value or handle it differently
        }
        return arr[front];
    }

    int getBack() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;  // Return an invalid value or handle it differently
        }
        return arr[rear];
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % size == front;
    }

    int getSize() {
        if (isEmpty()) {
            return 0;
        }
        return (rear >= front) ? (rear - front + 1) : (size - front + rear + 1);
    }

    void print() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % size;
        }
        cout << endl;
    }
};



const int MAX_SIZE = 100; // Maximum size of the deque

class Deque {
private:
    int arr[MAX_SIZE]; // Array to store deque elements
    int front;         // Index of the front element
    int rear;          // Index of the rear element
    int size;          // Current size of the deque

public:
    // Constructor to initialize the deque
    Deque() {
        front = -1;
        rear = 0;
        size = 0;
    }

    // Check if the deque is full
    bool isFull() {
        return ((front == 0 && rear == MAX_SIZE - 1) || front == rear + 1);
    }

    // Check if the deque is empty
    bool isEmpty() {
        return (front == -1);
    }

    // Insert an element at the front of the deque
    void insertFront(int value) {
        if (isFull()) {
            cout << "Deque is full. Cannot insert at front." << endl;
            return;
        }

        // If the deque is empty, set front and rear to 0
        if (front == -1) {
            front = 0;
            rear = 0;
        }
        // If front is at the first position, wrap around to the end
        else if (front == 0) {
            front = MAX_SIZE - 1;
        }
        else {
            front--;
        }

        arr[front] = value; // Insert the element
        size++;
        cout << "Inserted " << value << " at front." << endl;
    }

    // Insert an element at the rear of the deque
    void insertRear(int value) {
        if (isFull()) {
            cout << "Deque is full. Cannot insert at rear." << endl;
            return;
        }

        // If the deque is empty, set front and rear to 0
        if (front == -1) {
            front = 0;
            rear = 0;
        }
        // If rear is at the last position, wrap around to the beginning
        else if (rear == MAX_SIZE - 1) {
            rear = 0;
        }
        else {
            rear++;
        }

        arr[rear] = value; // Insert the element
        size++;
        cout << "Inserted " << value << " at rear." << endl;
    }

    // Delete an element from the front of the deque
    void deleteFront() {
        if (isEmpty()) {
            cout << "Deque is empty. Cannot delete from front." << endl;
            return;
        }

        cout << "Deleted " << arr[front] << " from front." << endl;

        // If there's only one element, reset the deque
        if (front == rear) {
            front = -1;
            rear = 0;
        }
        // If front is at the last position, wrap around to the beginning
        else if (front == MAX_SIZE - 1) {
            front = 0;
        }
        else {
            front++;
        }

        size--;
    }

    // Delete an element from the rear of the deque
    void deleteRear() {
        if (isEmpty()) {
            cout << "Deque is empty. Cannot delete from rear." << endl;
            return;
        }

        cout << "Deleted " << arr[rear] << " from rear." << endl;

        // If there's only one element, reset the deque
        if (front == rear) {
            front = -1;
            rear = 0;
        }
        // If rear is at the first position, wrap around to the end
        else if (rear == 0) {
            rear = MAX_SIZE - 1;
        }
        else {
            rear--;
        }

        size--;
    }

    // Get the front element of the deque
    int getFront() {
        if (isEmpty()) {
            cout << "Deque is empty. No front element." << endl;
            return -1;
        }
        return arr[front];
    }

    // Get the rear element of the deque
    int getRear() {
        if (isEmpty()) {
            cout << "Deque is empty. No rear element." << endl;
            return -1;
        }
        return arr[rear];
    }

    // Get the size of the deque
    int getSize() {
        return size;
    }

    // Display the elements of the deque
    void display() {
        if (isEmpty()) {
            cout << "Deque is empty." << endl;
            return;
        }

        cout << "Deque elements: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) {
                break;
            }
            i = (i + 1) % MAX_SIZE;
        }
        cout << endl;
    }
};


int main(){
    
    /*
    // creating
    queue<int> q;

    // insertion
    q.push(10);
    q.push(20);

    // size
    cout<<"Size: "<<q.size()<<endl;

    // check empty
    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }

    // remove // remove front element
    // q.pop();
    // cout<<"Size after pop: "<<q.size()<<endl;

    // front element
    cout<<"Front element: "<<q.front()<<endl;

    // last element
    cout<<"Last element: "<<q.back()<<endl;
    */

    /*
    Queue q(5);

    q.push(10);
    q.push(20);
    q.push(30);
    q.print();  // Output: Queue: 10 20 30

    cout << "Front element: " << q.getFront() << endl;  // Output: Front element: 10
    cout << "Back element: " << q.getBack() << endl;    // Output: Back element: 30

    q.pop();
    q.print();  // Output: Queue: 20 30

    cout << "Size: " << q.getSize() << endl;  // Output: Size: 2

    q.pop();
    q.pop();
    q.print();  // Output: Queue is empty

    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;  // Output: Is queue empty? Yes
    */

    /*
    CircularQueue q(5);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.print();  // Output: Queue: 10 20 30 40 50

    cout << "Front element: " << q.getFront() << endl;  // Output: Front element: 10
    cout << "Back element: " << q.getBack() << endl;    // Output: Back element: 50

    q.pop();
    q.pop();
    q.print();  // Output: Queue: 20 30 40

    cout << "Size: " << q.getSize() << endl;  // Output: Size: 3

    q.pop();
    q.pop();
    q.pop();
    q.print();  // Output: Queue is empty
    */

    /*
    Deque dq;

    dq.insertFront(10);
    dq.insertRear(20);
    dq.insertFront(5);
    dq.insertRear(30);

    dq.display(); // Output: Deque elements: 5 10 20 30

    cout << "Front element: " << dq.getFront() << endl; // Output: Front element: 5
    cout << "Rear element: " << dq.getRear() << endl;   // Output: Rear element: 30

    dq.deleteFront();
    dq.deleteRear();

    dq.display(); // Output: Deque elements: 10 20

    cout << "Size of deque: " << dq.getSize() << endl; // Output: Size of deque: 2
    */

    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);

    cout<<"Front element: "<<dq.front()<<endl;
    cout<<"Back element: "<<dq.back()<<endl;

    dq.push_front(5);

    cout<<"Front element: "<<dq.front()<<endl;

    dq.pop_back();

    cout<<"Back element: "<<dq.back()<<endl;

    dq.pop_front();

    cout<<"Front element: "<<dq.front()<<endl;
    
    return 0;
}