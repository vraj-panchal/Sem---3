// to print the code (ASCII Code ) of a given character
#include <iostream>

using namespace std;

class value
{
private:
    char ch;
    int a;

public:
    value()
    {
        cout << "Enter a character: ";
        cin >> ch;

        a = int(ch);

        cout << "ASCII code of '" << ch << "' is: " << a << endl;
    }
};

int main()
{
    value n1; // Corrected: Removed unnecessary parentheses

    return 0;
}
