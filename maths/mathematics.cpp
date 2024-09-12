#include <iostream>
using namespace std;

// o(n)
// bool isPrime(int n)
// {
//     if (n <= 1)
//     {
//         return 0;
//     }

//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }



int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;

    if (isPrime(n))
    {
        cout << "Number is a Prime number" << endl;
    }
    else
    {
        cout << "Number is Not a  prime" << endl;
    }

    return 0;
}
