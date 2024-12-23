#include<iostream>
using namespace std;

class matrix
{
    private:

    int data[3][3];

    public:

        void input()
        {
            cout<<"Enter Elements Of the 3x3 Matrix :\n ";
                for(int i=0 ; i<3;i++)
                {
                    for(int j=0 ; j<3;j++)
                    {
                        cin>>data[i][j];
                    }
                }
        }

        matrix operator+(matrix& Other)
        {
            matrix result;

                for(int i=0; i<3; i++)
                {
                    for(int j=0 ; j<3;j++)
                    {
                        result.data[i][j]=data[i][j]+Other.data[i][j];
                    }
                }

                return result;
        }

        void display()  
        {
        for (int i = 0; i < 3; i++) 
        {
            for (int j = 0; j < 3; j++)
            {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
        }
};

int main() {
    matrix mat1, mat2, result;

    // Input for the first matrix
    cout << "Matrix 1:\n";
    mat1.input();

    // Input for the second matrix
    cout << "Matrix 2:\n";
    mat2.input();

    // Adding the two matrices
    result = mat1 + mat2;

    // Display the result
    cout << "\nResultant Matrix after addition:\n";
    result.display();

    return 0;
}