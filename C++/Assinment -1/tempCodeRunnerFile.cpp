// swap a two number

#include <iostream>

using namespace std;

class swp
{
private:
    int a, b;

public:
    swp(int x, int y)
    {
        int temp;
        a = x;
        b = y;

        temp = a;
        a = b;
        b = temp;

        cout << "Your A value : " << a << endl;
        cout << "Your B value : " << b << endl;
    }
};

int main()
{
    int a, b;

    cout << "Enter Value A : " << endl;
    cin >> a;
    cout << "Enter Value B : " << endl;
    cin >> b;

    swp s(a, b);
}
