#include<iostream>
using namespace std;

class Employee{

    private :

        int emp_Id;
        string Name;
        string designation;

    public :

        string department;

            Employee(int Id = 0,string Nam = "",string Post = "", string Dep = "")
            {
                emp_Id = Id;
                Name = Nam;
                designation = Post;
                department = Dep;

            }

        void Display()
        {
            cout<<emp_Id<<"\t"<<Name<<"\t"<<designation<<"\t\t"<<department<<"\n"; 
        }
};


class Date
{
    private :

        int d=0,m=0;

    public :

        int y=0;

            void get_data()
            {
                cout<<"\n Enter The Date (DD/MM/YYYY) :  ";
                cin>>d>>m>>y;
            }
        
        void Display()
        {
            cout<<d<<"/"<<m<<"/"<<y<<"\n";
        }
};

class Salary
{
    private : 

        int BS , GS;
        float HRA , DA;

    public : 

        void get_salary()
        {
            cout<<"\n Enter Basic Salary : ";
            cin>>BS;

            
            if(BS <= 30000)
            {
                DA = BS * (60.0 / 100);
                HRA = BS * (20.0 / 100);
                GS = DA + HRA +BS;
            }

            else if(BS > 30000 && BS <= 45000)
            {
                DA = BS * (70.0 / 100);
                HRA = BS * (30.0 / 100);
                GS = DA + HRA +BS;
            }

            else if(BS > 45000)
            {
                DA = BS * (85.0 / 100);
                HRA = BS * (40.0 / 100);
                GS = DA + HRA +BS;
            }
            else
            {
                cout<<"Enter Valid salary :";
            }

        }

    void display()
    {
        cout<<GS<<"\n";
    }

        
};


int main()
{
    Employee e[3];
    Date DOB[3] , DOJ[3] , CD[3];
    Salary s[3];

    for(int i=0 ; i<3 ; i++)
    {
        int id;
        string Nam,Post,Dep;

        cout<<" \n Employee "<< (i+1)<<" Detail : \n";

        cout<<" Enter The Employee Id : ";
        cin>>id;

        cout<<" Enter The Employee Name : ";
        cin>>Nam;

        cout<<" Enter The Designation : ";
        cin>>Post;

        cout<<" Enter The Department : ";
        cin>>Dep;

        e[i]=Employee(id , Nam , Post , Dep);

        cout<<" Enter Date Of Birth :\n ";
        DOB[i].get_data();

        cout<<" Enter Date Of Joining : \n ";
        DOJ[i].get_data();

        cout<<" Enter Current Date :\n ";
        CD[i].get_data();

        s[i].get_salary();

    }

    int ex[3];

    for(int i=0 ; i<3; i++)
    {
        ex[i]=CD[i].y - DOJ[i].y;
    }

    cout << "\nDisplaying Employee Details:\n";
    cout<<"\nID\tNname\tDesigantion\tDepartment\n";

    for (int i = 0; i < 3; i++) 
    {
        cout << "\n";
        e[i].Display();
        cout<<" \n ";
        cout<<"Date Of Birth :";DOB[i].Display();
        cout<<"Date Of Joining :";DOJ[i].Display();
        cout<<"Current Date :";CD[i].Display();
        cout<<"Salary :";s[i].display();
        cout <<"Experience : "<<ex[i] << "\n";
    }

    cout<<"\nSearch The Employee Who Work In Salse Department :"<<endl;
    cout<<"\nID\tNname\tDesigantion\tDepartment\n";
    for(int i = 0; i < 3; i++)
    {

        if(e[i].department == "sales" || e[i].department == "Sales")
        {
            cout << "\n";
            e[i].Display();
            cout <<" \n";
            cout<<"Date Of Birth :";DOB[i].Display();
            cout<<"Date Of Joining :";DOJ[i].Display();
            cout<<"Current Date :";CD[i].Display();
            cout<<"Salary :";s[i].display();
            cout <<"Experience : "<<ex[i] << "\n";
        }
    }

    cout<<"\nSearch The Employee Who`s Experiance Is More Then 5 Years :\n";
    cout<<"\nID\tNname\tDesigantion\tDepartment\n";
    for(int i=0;i<3;i++)
    {
        if(ex[i] > 5)
        {
            cout << "\n";
            e[i].Display();
            cout << "\n";
            cout<<"Date Of Birth :";DOB[i].Display();
            cout<<"Date Of Joining :";DOJ[i].Display();
            cout<<"Current Date :";CD[i].Display();
            cout<<"Salary :";s[i].display();
            cout <<"Experience : "<<ex[i] << "\n";
        }
    }

    return 0;

}




