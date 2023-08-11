#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char const *argv[])
{
    // creating a queue
    queue<int> q;

    q.push(11);
    cout << "Front is : " << q.front() << endl;

    q.push(12);
    cout << "Front is : " << q.front() << endl;
    q.push(13);
    cout << "Front is : " << q.front() << endl;
    q.push(14);
    cout << "Front is : " << q.front() << endl;

    cout << "size of queue is : " << q.size() << endl;

    q.pop();
    cout << "Front is : " << q.front() << endl;

    q.pop();
    q.pop();
    q.pop();
    if (q.empty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue is not-Empty" << endl;
    }

    return 0;
}
