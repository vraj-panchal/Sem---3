#include<iostream>
using namespace std;

class Vehicle
{
    protected: 

        string brand;
        string model;

    public:

        Vehicle()
        {}
        Vehicle(string b,string m)
        {

            brand=b;
            model=m;
        }

        void get_data()
        {
            cout<<"\n Enter Bike Brand : ";
            cin>>brand;

            cout<<"\n Enter Bike Model : ";
            cin>>model;
        }

        virtual void Display()
        {
            cout << "\n Brand: " << brand << "\n Model: " << model << endl;
        }
};

class TwoWheeler : public Vehicle
{
    protected:

        float distance;
        float mileage;

    public:

        TwoWheeler()
        {}
        TwoWheeler(float d, float m)
        {
          
            distance=d;
            mileage=m;
        }
        void data()
        {
            get_data();

            cout<<"\n Enter Distance traveled (in KM): ";
            cin>>distance;

            cout << "Enter mileage (in km/l): ";
            cin >> mileage;
        }

        void Display()
        {
            Vehicle::Display();
            cout << "Distance: " << distance << " km, Mileage: " << mileage << " km/l" << endl;
    
        }
};

class Bike : public TwoWheeler
{
protected:

    string type;

public:


    Bike(){}
    Bike(string t)
    {
        
        type=t;
    }
   

    void Get()
    {
        
        data();
        cout << "Enter bike type (e.g., Sports, Cruiser): ";
        cin>>type;

    }
    
    void Display()
    {
        TwoWheeler::Display();
        
       
        cout << "Type: " << type << endl;
    }


};


int main()
{
    int size = 3;

    Bike b[size];

    for(int i=0 ;i<size;i++)
    {
        b[i].Get();
    }
    
    for(int i=0 ;i<size ; i++)
    {
        b[i].Display();
    }
    

    return 0;

   
}


