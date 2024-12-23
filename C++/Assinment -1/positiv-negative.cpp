// to check whether a number is positive negative or zero

#include <iostream>

using namespace std;

class num
{

    int n;

public:
    num() // DEFULT CONSTRUCTOR
    {
        cout << "Enter the Number : ";
        cin >> n;

        if (n < 0)
        {
            cout << "Your Number is Negative :";
        }
        else if (n > 0)
        {
            cout << "your Number is Positive :";
        }
        else 
        {
            cout << "Your Number iS ZERO ";
        }
       
    }
};

int main()
{
    num n;
}