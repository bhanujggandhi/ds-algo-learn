#include <iostream>
#include <queue>

using namespace std;

int main()
{
    // Max heap
    priority_queue<int> maxHeap;

    // Min heap
    priority_queue<int, vector<int>, greater<int>> minHeap;

    maxHeap.push(1);
    maxHeap.push(3);
    maxHeap.push(2);
    maxHeap.push(0);
    cout << "Size of Max Heap -> " << maxHeap.size() << endl;

    // This should return maximum elements present in the heap
    int n = maxHeap.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
    cout << endl;

    minHeap.push(5);
    minHeap.push(1);
    minHeap.push(0);
    minHeap.push(4);
    minHeap.push(3);
    cout << "Size of Min Heap -> " << minHeap.size() << endl;

    // This should return minimum elements present in the heap
    n = minHeap.size();
    for (int i = 0; i < n; i++)
    {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    cout << endl;

    cout << "Empty or not? " << maxHeap.empty() << endl;

    // Another way to implement Min Heap
    /*
    -> Whenever storing, multiply with a negative 1.
    -> Whenever retreiving, multiply with a neg 1.

    #Majory used in Competitive Programming
    */

    priority_queue<int> mini;

    int arr[6] = {1, 0, 4, 5, 2, 8};
    for (auto x : arr)
    {
        mini.push(-1 * x);
    }

    n = mini.size();

    for (int i = 0; i < n; i++)
    {
        cout << -1 * mini.top() << " ";
        mini.pop();
    }
    cout << endl;
}