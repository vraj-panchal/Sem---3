#include<iostream>
using namespace std;

class Student 
{
protected:
    int roll_no;
    string name;

public:
    Student()
    {
        cout << "\n Enter The Roll No: ";
        cin >> roll_no;

        cout << "\n Enter The Name: ";
        cin >> name;
    }

    void Display()
    {
        cout <<roll_no << " \t\t " << name << "\n";
    }
};

class Marks : public Student
{
protected:
    int sub[3];
    float total = 0.0;

public:
    Marks() : Student() // Correct constructor calling
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "\n Enter The Marks for Subject " << i + 1 << ": ";
            cin >> sub[i];
            total += sub[i];
        }
    }

    void display()
    {
        cout << roll_no << "\t" << name;
        for (int i = 0; i < 3; i++) 
        {
            cout << "\t\t" << sub[i];
        }
        cout << "\t" << total;
    }
};

class Result : public Marks
{
protected:
    float per;
    char grade;

public:
    Result() : Marks()
    {
        per = total / 3;

        if (per < 0 || per > 100)
        {
            cout << "There is an issue in marks input\n";
        }
        else if (per >= 50 && per < 60)
        {
            grade = 'E';
        }
        else if (per >= 60 && per < 70)
        {
            grade = 'D';
        }
        else if (per >= 70 && per < 80)
        {
            grade = 'C';
        }
        else if (per >= 80 && per < 90)
        {
            grade = 'B';
        }
        else if (per >= 90 && per <= 100)
        {
            grade = 'A';
        }
        else
        {
            grade = 'F';
        }
    }

    float get_percentage() 
    {
        return per;
    }

    void Display_Result()
    {
        display();
        cout << "\t" << per << "\t\t" << grade << endl;
    }
};

int main()
{
    Result r[3];

    cout << "\nRoll no\t Name\t\tSubject 1\tSubject 2\t Subject 3\tTotal\tPercentage\tGrade \n ";

    for (int i = 0; i < 3; i++)  // Fixed to iterate over all 3 students
    {
        r[i].Display_Result();
    }
    
    // Sorting results based on percentage
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (r[i].get_percentage() < r[j].get_percentage())
            {
                Result temp = r[i];  // Correct swapping logic
                r[i] = r[j];
                r[j] = temp;
            }
        }
    }

    cout << "\nAfter sorting by percentage:\n";
    cout << "\nRoll_no\t Name\t\tSubject1\tSubject2\tSubject3\tTotal\tPercentage\tGrade\n";
    for (int i = 0; i < 3; i++)
    {
        r[i].Display_Result();
    }

    return 0;
}
