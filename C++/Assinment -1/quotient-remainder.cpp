// To compute quotient and remainder

#include <iostream>

using namespace std;

class divid
{
private:
    int a, b;

public:
    divid()
    {
        cout << "Enter Dividend : ";
        cin >> a;

        cout << "Enter divisor : ";
        cin >> b;

        int quotient = a / b;
        int remainder = a % b;

        cout << "Quotient : " << quotient << endl;
        cout << "Remainde : " << remainder << endl;
    }
};

int main()
{
    divid d1;

    return 0;
}