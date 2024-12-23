#include<iostream>
using namespace std;

class Date
{

public:

    int dd;
    int mm;
    int yyyy;

        void get_data()
        {   
            cout<<"Enter the date :"<<endl;
            cin>>dd;

            cout<<"Enter the month :"<<endl;
            cin>>mm;

            cout<<"Enter the Year :"<<endl;
            cin>>yyyy;
        }

        void Display()
        {
            cout<<" The Date (dd/mm/yyyy) : "<<dd<<"/"<<mm<<"/"<<yyyy;
        }

        void Leap_year()
        {
            if(yyyy % 4 == 0)
            {
                cout<<yyyy<<" Is Is The Leap Year : "<<endl;
            }
            else
            {
                cout<<yyyy<<" Id Not Leap Year : "<<endl;
            }
        }

        int day()
        {
            return dd;
        }

        int month()
        {
            return mm;
        }

        int year()
        {
            return yyyy;
        }

};

class Time
{

public:

    int ss;
    int mm;
    int hh;

        void Get_data()
        {
            cout<<"Enter the Hours :"<<endl;
            cin>>hh;

            cout<<"Enter the Minutes :"<<endl;
            cin>>mm;

            cout<<"Enter the Second :"<<endl;
            cin>>ss;
        }

        void Display()
        {
            cout<<" The Time (HH : MM : SS) : "<<hh<<":"<<mm<<":"<<ss;
        }

        int Hours()
        {
            return hh;
        }

        int minutes()
        {
            return mm;
        }

        int second()
        {
            return ss;
        }


    
};


int main()
{
    Date D;
    Time T;

    int d,m,y;
    int s,mi,h;


    int choice;

        do
        {
           
                cout<<" \n ";
                cout<<"1. Date."<<endl;
                cout<<"2. Time."<<endl;
                cout<<"3. Format Date."<<endl;
                cout<<"4. Difference between 2 dates."<<endl;
                cout<<"4. Check Leap year."<<endl;
                cout<<"5. Retrieve Day."<<endl;
                cout<<"6. Retrieve Month."<<endl;
                cout<<"7. Retrieve Year."<<endl;
                cout<<"8. Retrieve Hour."<<endl;
                cout<<"9. Retrieve Minute."<<endl;
                cout<<"10. Retrieve Second. \n"<<endl;

                cout<<"Enter the Choice :";
	            cin>>choice;

            switch (choice)
            {
            case 1:

                    D.get_data();
                    D.Display();
                break;

            case 2:
                    T.Get_data();
                    T.Display();

                break;
            
            case 3:
                    D.Display();
                break;

            case 4:

                    D.Leap_year();
                break;
            
            case 5:
                    cout<<"The Date Is "<<D.day()<<endl;
                break;

            case 6:
                    cout<<"The Month Is "<<D.month()<<endl;
                break;

            case 7:
                    cout<<"The Year Is "<<D.year()<<endl;
                break;

            case 8:
                    cout<<"The Hours Is "<<T.Hours()<<endl;
                break;

            case 9:
                    cout<<"The Minutes Is "<<T.minutes()<<endl;
                break;

            case 10:
                    cout<<"The Second Is "<<T.second()<<endl;
                break;

            case 11:
                    cout<<"You Are Out Of The Program"<<endl;
                return 0;
            
            default:

                cout<<" Enter Valid Choice : ";
                break;
            }
            
        } while (1);
        

        return 0;

}