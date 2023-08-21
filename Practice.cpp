#include <iostream>
using namespace std;

class heap
{
private:
    int arr[100];
    int size;

public:
    heap()
    {
        arr[0] = -1;
        size = 0;
    };

    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;

            if (arr[parent] < arr[index])
            {
                swap(arr[index], arr[parent]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    };

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    };

    void deleteNodefromheap()
    {
        // base case
        if (size == 0)
        {
            cout << "Nothing to delete" << endl;
            return;
        }

        arr[1] = arr[size];
        size--;

        // take root node to its correct position
        int i = 1;
        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;

            if (leftIndex < size && arr[i] < arr[leftIndex])
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if (rightIndex < size && arr[i] < arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else
            {
                return;
            }
        }
    }
};

int main(int argc, char const *argv[])
{
    heap h1;

    h1.insert(50);
    h1.insert(51);
    h1.insert(53);
    h1.insert(54);
    h1.insert(56);
    h1.print();

    h1.deleteNodefromheap();
    h1.print();

    h1.deleteNodefromheap();
    h1.print();

    return 0;
}
