#include <iostream>
#include <string>

using namespace std;

class person
{
private:
    string name;
    int age;

public:
    person() : name("Unknown"), age(0)
    {
        cout << "Defult Constructor called " << endl;
    }

    person(string n, int a = 18) : name(n), age(a)
    {
        cout << "Parameterized Constructor Called for " << name << endl;
    }

    person(const person &p) : name(p.name), age(p.age)
    {
        cout << "Copy Constructor Called for " << name << endl;
    }

    void display()
    {
        cout << "Name : " << name << " Age : " << age << endl;
    }
};

int main()
{

    person person1;
    person1.display();

    person person2("Alice", 30);
    person2.display();

    person person3("Bob");
    person3.display();

    person person4(person2);
    person4.display();

    return 0;
}