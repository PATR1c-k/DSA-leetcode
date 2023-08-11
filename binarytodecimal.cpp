#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int answer = 0;
    int i = 0;
    while (n != 0)
    {
        int digit = n & 1;
        if (digit == 1)
        {
            answer = pow(2, i) + answer;
        }

        n = n / 10;
        i++;
    }
    cout << "Answer is" << answer;
    return 0;
}
