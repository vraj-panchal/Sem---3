#include <iostream>

using namespace std;

class Array
{
    public:
        int arr[5];

        void Insert()
        {
            for (int i = 0; i < 5; i++)
            {
                cout << "\n Enter Array element [" << i << "]: ";
                cin >> arr[i];
            }

            cout << "\n 1D Array Elements: ";
            for (int i = 0; i < 5; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }

        void search()
        {
            int search,flag=0;

                cout<<"\n Enter Value You Want To search ";
                cin>>search;

                for(int i =0 ; i<5 ; i++)
                {
                    if(arr[i]==search)
                    {
                        flag=1;

                        cout<<"\n Number Is Avilable ";
                    }

                }

                    if(flag==0)
                    {
                        cout<<"Number is Not Avilable ";

                    }
        }

                    void Bubble_Sort() 
                    {
                        int temp;

                        cout << "\n1D Array Bubble Sort..\n";

                        // Perform Bubble Sort
                        for (int i = 0; i < 5 - 1; i++) 
                        {
                            for (int j = 0; j < 5 - i - 1; j++) 
                            {
                                if (arr[j] < arr[j + 1]) 
                                {
                                    // Swap arr[j] and arr[j + 1]
                                    temp = arr[j];
                                    arr[j] = arr[j + 1];
                                    arr[j + 1] = temp;
                                }
                            }
                        }

                        // Print the sorted array
                        for (int i = 0; i < 5; i++) 
                        {
                            cout << arr[i] << " ";
                        }
                        cout << endl;
                    }

                            void sum()
                            {
                                int s=0;
                                    for(int i=0 ;i<5 ; i++)
                                    {
                                        s=s+arr[i];
                                    }

                                    cout<<"\n Sum OF The 1D array Elements : "<<s;
                            }

                                void Average()
                                {
                                    float avg=0,sum=0;

                                    for(int i=0 ; i<5 ;i++)
                                    {
                                        sum=sum+arr[i];
                                        
                                    }
                                    avg=sum/5;

                                    cout<<"\n Average Number Of 1D Array :  "<<avg;
                                }

                            void Find_MAX_Num()
                            {
                                int max=arr[0];

                                for(int i=0 ;i<5 ;i++)
                                {
                                    if(arr[i]>max)
                                    {
                                        max=arr[i];
                                    }
                                }

                                cout<<"\n Maximum Number in 1D array : "<<max;

                            }


                            void Find_MIN_Num()
                            {
                                int min=arr[0];

                                for(int i=0 ;i<5 ;i++)
                                {
                                    if(arr[i]<min)
                                    {
                                        min=arr[i];
                                    }
                                }

                                cout<<"\n Maximum Number in 1D array : "<<min;

                            }

                        void Swap_First_last_Num()
                        {
                            int temp=0;

                            temp=arr[4];
                            arr[4]=arr[0];
                            arr[0]=temp;

                            cout<<"Swap First And Last Number ";

                            for(int i=0 ; i<5 ;i++)
                            {
                                cout<<arr[i];
                            }
                        }


};

int main()
{

    Array a1;
    int choice;

    menu: 
        cout << "\n\n 1. Insert Array Element  \n";
        cout << " 2. Search Element \n";
        cout << " 3. Bubble Sort \n";
        cout << " 4. Sum of Array Elements \n";
        cout << " 5. Average of Array Elements \n";
        cout << " 6. Find Maximum value from array elements \n";
        cout << " 7. Find Minimum value from array elements \n";
        cout << " 8. Swap first and last element of an array \n";
        cout << " 9. EXIT \n";

        cout <<"\n Enter Your choice: ";
        cin >> choice;

            switch (choice)
            {
                case 1:
                    a1.Insert();

                    goto menu;

                case 2:
                    a1.search();

                    goto menu;

                case 3:
                    a1.Bubble_Sort();

                    goto menu;

                case 4:
                    a1.sum();

                    goto menu;

                case 5:
                    a1.Average();

                    goto menu;
                
                case 6:
                    a1.Find_MAX_Num();

                    goto menu;

                case 7:
                    a1.Find_MIN_Num();

                    goto menu;

                case 8:
                    a1.Swap_First_last_Num();

                    goto menu;

                case 9:
                    cout<<"Program Is Exit.....";

                    break;
                default:
                    cout << "Invalid choice, please try again." << endl;
            }
        

    return 0;

}