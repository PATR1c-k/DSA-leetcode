// rather can using code always we can use priority_queue

#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char const *argv[])
{
    // maxHeap
    priority_queue<int> pq;

    pq.push(3);
    pq.push(7);
    pq.push(5);
    pq.push(1);
    pq.push(2);

    cout << "Top of heap " << pq.top() << endl;
    pq.pop();

    cout << "Top of heap " << pq.top() << endl;
    pq.pop();

    cout << "Top of heap " << pq.top() << endl;
    pq.pop();

    cout << "Top of heap " << pq.top() << endl;

    cout << "=============================================" << endl;
    // min-heap
    priority_queue<int, vector<int>, greater<int>> minHeap;

    minHeap.push(4);
    minHeap.push(9);
    minHeap.push(1);
    minHeap.push(10);

    cout << "Top of heap " << minHeap.top() << endl;
    minHeap.pop();
    cout << "Top of heap " << minHeap.top() << endl;
    minHeap.pop();
    cout << "Top of heap " << minHeap.top() << endl;
    minHeap.pop();
    cout << "Top of heap " << minHeap.top() << endl;

    return 0;
}
