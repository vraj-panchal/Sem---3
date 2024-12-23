#include<iostream>
using namespace std;

// Design Employee Management System. 
// a)  Design appropriate classes and makeuse of inheritance. 
// b) Makeuse of constructors to initialize the members. 
// 4. Design billing system for Super Market. 
// a)  Design appropriate classes and makeuse of inheritance. 
// b) Makeuse of constructors to initializethemembers.


class Employee
{
    protected :

        int emp_id;
        string Name;
        int salary;

    public:


    Employee()
    {}
    Employee(int id,string n,int s)
    {
        emp_id=id;
        Name=n;
        salary=s;
    }
        void get_data()
        {
            cout<<"\n Enter The Employee Id : ";
            cin>>emp_id;

            cout<<"\n Enter The Employee Name : ";
            cin>>Name;

            cout<<"\n Enter The Employee Salary : ";
            cin>>salary;
        }

            void Display()
            {
                cout<<"\n Employee Id "<<emp_id;
                cout<<"\n Name : "<<Name;
                cout<<"\n Salary : "<<salary;
            }
};

class Department :public Employee
{

    protected:

        string Dep_Name;
        int T_employee;

    public :
    
        Department(){}
        Department(string Name,int employee)
        {

                Dep_Name=Name;
                T_employee=employee;

        }
       

        void Input()
        {

            Employee::get_data();

            cout<<"\n Enter Department Name : ";
            cin>>Dep_Name;

            cout<<"\n Enter The Total Employee : ";
            cin>>T_employee;
        }

            void Display()
            {

                Employee::Display();

                cout<<"\n Department Name : "<<Dep_Name;
                cout<<"\n Total Employee :"<<T_employee;
            }
};

class Date : public Department
{
    protected:
     
        int dd,mm,yyyy;

    public:

        Date()
        {}
        Date(int d,int m,int y)
        {
            dd=d;
            mm=m;
            yyyy=y;
        }

        void input()
        {

            Department ::Input();

            cout<<"\n Enter The Date (DD/MM/YYYY) : ";
            cin>>dd>>mm>>yyyy;

        }

        void display()
        {
            Department::Display();
            cout<<"(DD/MM/YYYY) : "<<dd<<"/"<<mm<<"/"<<yyyy;
        }

};


int main()
{

    int size=2;

    Date D[size];

    for(int i=0 ; i<size ; i++)
    {
        D[i].input();
        
    }

    for(int i=0 ; i<size ;i++)
    {
        D[i].display();
    }
}