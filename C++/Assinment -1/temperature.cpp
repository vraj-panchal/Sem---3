// To convert Temperature in celsius to fahernheit

#include<iostream>

using namespace std;

class convert{

private: 

int c;

public:

convert(int f)
{

    cout<<"Enter The Celsius Valiue : ";
    cin>>c;

    f=(c*9/5)+32;

    cout<<"Temperature in Fahrenheit :  "<<f;
}
};

int main()
{
    int c;
    convert n(c);
    
}