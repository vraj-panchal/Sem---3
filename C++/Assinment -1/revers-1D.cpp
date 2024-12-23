#include<iostream>

using namespace std;

class Array {
    private: 
        int a[10],j,temp=0;

    public:
        Array() {
            cout << "Enter the elements: ";
            for(int i = 0; i < 10; i++) {
                cin >> a[i];
            }

            for(int  i=0 ; j=10-1 ,j<i;i++,j--)
            {
                if(a[i]<a[j])
                {       
                        temp = a[j];
                        a[j] = a[i];
                        a[i] = temp;
                }
            }

            cout << "Reverse array: ";
            for(int i = 0; i < 10; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
};

int main() {
    Array S;
    return 0;
}
