#include<iostream>
#include<string>

using namespace std;

class count{

private:

    string str;

    public :
    

        count()
        {

            int lenth=0;
        
            cout<<"Enter The string : ";
                cin>>str;

              

            for(int i=0 ; str[i]!='\0' ; i++)
            {
                if(str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' ||str[i] == 'I' ||str[i] == 'i' || str[i] == 'O' ||str[i] == 'o' || 
                    str[i] == 'U' ||str[i] == 'U')
                    {
                        lenth++;
                    }

            }
                    
                cout<<"Your String : "<<str<<endl;

                cout<<"Your String In Vovels : "<<lenth;
        }
       
};

int main()
{
    count s;

    return 0;
}