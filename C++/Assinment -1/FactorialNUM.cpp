#include<iostream>

using namespace std;

class FactoNUM
{
private:
    int n;

public:
int f=1;

    FactoNUM()
    {
        cout<<"Enter The NUmber : ";
        cin>>n;

        for(int i=1 ; i<=n ;i++)
        {
            f=f*i;
        }

        cout<<"Factorial :"<<f; 
    }
   
};

int  main()

{
    FactoNUM n;

    return 0;
}

