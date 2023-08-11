#include <iostream>
using namespace std;

class circularQueue
{

public:
    int front;
    int rear;
    int *arr;
    int size;

    circularQueue(int n)
    {
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    };

    bool enqueue(int value)
    {
        // if queue is empty
        if ((front == 0 && rear == size - 1) || rear == (front - 1) % (size - 1))
        {
            return false;
        }

        else if (front == -1)
        {
            rear = front = 0;
        }

        else if (front != 0 && rear == size - 1)
        {
            rear = 0;
        }

        else
        {
            rear++;
        }

        arr[rear] = value;
        return true;
    }

    int dequeue()
    {
        // check empty
        if (front == -1)
        {
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;

        if (front == rear)
        {
            front = rear = -1;
        }

        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }

        return ans;
    }
};

int main(int argc, char const *argv[])
{
    circularQueue q1(3);
    q1.enqueue(21);
    q1.enqueue(22);
    q1.enqueue(23);

    cout << q1.front << endl;
    // cout << q1.enqueue(2100);

    cout << q1.dequeue() << endl;
    cout << q1.dequeue() << endl;
    cout << q1.dequeue() << endl;

    return 0;
}
