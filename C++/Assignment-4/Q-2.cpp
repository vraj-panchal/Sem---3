#include <iostream>
#include <string>
using namespace std;

// Base class for Patient
class Patient 
{
protected:
    string name;
    int age;

public:

    // Default constructor
    Patient(){}

    // Parameterized constructor
    Patient(string n, int a) 
    {
        name=n;
        age=a; 
    }
    void getPatientData() 
    {
        cout << "Enter Patient Name: ";
        cin >> name;
        cout << "Enter Patient Age: ";
        cin >> age;
    }

    void displayPatientData() 
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Base class for IPD
class IPD 
{
protected:
    int ward_no;
    int bed_no;
    float charge_per_day;

public:


        // Default constructor
    IPD(){}

    // Parameterized constructor
    IPD(int w, int b, float c)
    {
        ward_no=w;
        bed_no=b;
        charge_per_day=c; 
    }

    void getIPDData() 
    {
        cout << "Enter Ward Number: ";
        cin >> ward_no;
        cout << "Enter Bed Number: ";
        cin >> bed_no;
        cout << "Enter Charge per Day: ";
        cin >> charge_per_day;
    }

    void displayIPDData() 
    {
        cout << "Ward No: " << ward_no << ", Bed No: " << bed_no << ", Charge per Day: " << charge_per_day << endl;
    }

};

// Derived class for IPD Patient
class IPDPatient : public Patient, public IPD 
{
private:

    int no_of_days;

public:

        // Default constructor
    IPDPatient(){}

    // Parameterized constructor
    IPDPatient(int days) 
    {
        no_of_days=days;
    }

    void get_Data() 
    {
        getPatientData();
        getIPDData();

        cout << "Enter Number of Days Admitted: ";
        cin >> no_of_days;
    }

    void display_Data() 
    {
        displayPatientData();
        displayIPDData();
        cout << "Number of Days Admitted: " << no_of_days << endl;
        cout << "Total Charges: " << (charge_per_day * no_of_days) << endl;
    }
};

int main() 
{

    IPDPatient patient;

    patient.get_Data();
    patient.display_Data();

    return 0;

}
