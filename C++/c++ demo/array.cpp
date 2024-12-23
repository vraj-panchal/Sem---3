#include <iostream>

using namespace std;

int main()
{

    int arr1[10];

    cout << "Enter Array Value" << endl;
    for (int i = 0; i < 10; i++)
    {

        cin >> arr1[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout << "Your Value  " << i << "=" << arr1[i] << endl;
    }

    return 0;
}