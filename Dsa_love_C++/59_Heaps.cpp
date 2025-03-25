#include <iostream>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

// Class to store information about array elements
class Info {
public:
    int data, rowIndex, colIndex;
    Info(int d, int r, int c) : data(d), rowIndex(r), colIndex(c) {}
};

// Comparator for min-heap
class Compare {
public:
    bool operator()(Info &a, Info &b) {
        return a.data > b.data;
    }
};

void mergeKSortedArrays(int **arrays, int k, int *sizes) {
    priority_queue<Info, vector<Info>, Compare> minHeap;
    int totalElements = 0;

    // Insert first element of each array into the min-heap
    for (int i = 0; i < k; i++) {
        if (sizes[i] > 0) {
            minHeap.push(Info(arrays[i][0], i, 0));
            totalElements += sizes[i];
        }
    }

    int *result = new int[totalElements];
    int index = 0;

    // Process the min-heap
    while (!minHeap.empty()) {
        Info top = minHeap.top();
        minHeap.pop();
        result[index++] = top.data;

        // Push the next element from the same row into the heap
        if (top.colIndex + 1 < sizes[top.rowIndex]) {
            minHeap.push(Info(arrays[top.rowIndex][top.colIndex + 1], top.rowIndex, top.colIndex + 1));
        }
    }

    // Print the merged sorted array
    for (int i = 0; i < totalElements; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    delete[] result;
}
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
    public:
        ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
            if (!l1) return l2;
            if (!l2) return l1;
    
            if (l1->val > l2->val) swap(l1, l2);
            ListNode* head = l1;
    
            while (l1 && l2) {
                ListNode* temp = nullptr;
                while (l1 && l1->val <= l2->val) {
                    temp = l1;
                    l1 = l1->next;
                }
                temp->next = l2;
                swap(l1, l2);
            }
            return head;
        }
    
        ListNode* mergeKLists(vector<ListNode*>& lists) {
            if (lists.empty()) return nullptr;
            
            int n = lists.size();
            while (n > 1) {
                int j = 0;
                for (int i = 0; i < n; i += 2) {
                    if (i + 1 < n)
                        lists[j] = mergeTwoLists(lists[i], lists[i + 1]);
                    else
                        lists[j] = lists[i];
                    j++;
                }
                n = j;  // Reduce problem size
            }
    
            return lists[0];
        }
    };
    

int main() {
    int k = 3;
    int sizes[] = {3, 3, 3};
    int arr1[] = {1, 4, 7};
    int arr2[] = {2, 5, 8};
    int arr3[] = {3, 6, 9};
    int *arrays[] = {arr1, arr2, arr3};



    mergeKSortedArrays(arrays, k, sizes);
    return 0;
}