#include<iostream>

using namespace std;

class Array
{
private:
    int a[10];

public:
    Array()
    {
        cout << "Enter the elements: ";
        for (int i = 0; i < 10; i++)
        {
            cin >> a[i];
        }

        // Swap the first and last elements
        int temp = a[0];
        a[0] = a[9];
        a[9] = temp;

        cout << "Swapped array: ";
        for (int i = 0; i < 10; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Array S;
    return 0;
}
