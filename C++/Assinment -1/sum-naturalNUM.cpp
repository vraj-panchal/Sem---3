// TO FIND THE SUM OF FITRST 10 NETURAL NUMBER

#include <iostream>

using namespace std;

class Number
{

private:
    int i;

public:
    int s = 0;
    Number()
    {
        for (i = 1; i < 10; i++)
        {
            s += i;
        }

        cout << "Sum Of first 10 Natural Number : " << s;
    }
};

int main()
{
    Number n;

    return 0;
}
