#include <iostream>

using namespace std;

int sum(int a, int b)
{
    int c;

    c = a + b;

    return c;
}

int main()
{
    int x, y;

    cout << "Enter First Number : " << endl;
    cin >> x;

    cout << "Enter Secound Number : " << endl;
    cin >> y;

    cout << "The function return " << sum(x, y);

    return 0;
}