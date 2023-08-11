#include <iostream>
using namespace std;

class Queue
{
public:
    int size;
    int *arr;
    int qfront;
    int rear;

    Queue()
    {
        int size = 10001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    void enqueue(int data)
    {
        // check isFull
        if (rear == size)
        {
            cout << "Queue is already full" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dqueue()
    {
        if (qfront == rear)
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        else
        {
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if (qfront == rear)
            {
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front()
    {
        if (qfront == rear)
        {
            return -1;
        }
        else
        {
            int ans = arr[qfront];
            return ans;
        };
    }

    bool isEmpty()
    {
        if (rear == qfront)
        {
            return true;
        }
        else
        {
            return false;
        };
    }
};

int main(int argc, char const *argv[])
{
    Queue q1;
    q1.enqueue(1);
    cout << q1.front() << endl;

    q1.enqueue(2);
    cout << q1.front() << endl;

    q1.dqueue();
    q1.dqueue();

    if (q1.isEmpty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl;
    }

    return 0;
}
