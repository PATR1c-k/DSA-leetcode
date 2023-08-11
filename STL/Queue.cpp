#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char const *argv[])
{
    queue<string> q;

    q.push("Pratik");
    q.push("Vilas");
    q.push("Kaple");

    cout << "First Element -> " << q.front() << endl;

    q.pop();
    cout << "First Element -> " << q.front() << endl;

    return 0;
}
