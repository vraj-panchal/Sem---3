#include<iostream>

using namespace std;

class array

{
private:

    int a[10];

public:

    array()
    {
        cout<<"Enter The Value : ";
        
        for(int i=0 ;i<10 ;i++)
        {
            
            cin>>a[i];
        }

        int sum=0;

        for(int i=0 ; i<10 ;i++)
        {
            sum = sum+a[i];
        }

        cout<<"Sum : "<<sum;

    }


};


int main()
{
    array A;

    return 0;
}