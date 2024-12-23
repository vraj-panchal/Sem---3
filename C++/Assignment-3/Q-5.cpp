#include <iostream>
using namespace std;

class Binary {
private:
    float value;  // Float data member to store the value

public:
    // Constructor to initialize the value
    Binary(float v = 0.0) : value(v) {}

    // Overloading the + operator
    Binary operator+(const Binary& other) 
    {
        return Binary(value + other.value);
    }

    // Overloading the - operator
    Binary operator-(const Binary& other) 
    {
        return Binary(value - other.value);
    }

    // Overloading the * operator
    Binary operator*(const Binary& other) 
    {
        return Binary(value * other.value);
    }

    // Overloading the / operator
    Binary operator/(const Binary& other) 
    {
        // Ensure no division by zero
        if (other.value == 0) 
        {
            cout << "Error: Division by zero!" << endl;
            return Binary(0);
        }
        return Binary(value / other.value);
    }

    // Overloading the >> operator for input
    friend istream& operator>>(istream& in, Binary& b) {
        cout << "Enter a value: ";
        in >> b.value;
        return in;
    }

    // Overloading the << operator for output
    friend ostream& operator<<(ostream& out, const Binary& b) {
        out << b.value;
        return out;
    }
};

int main() {
    Binary b1, b2, result;

    // Taking input for b1 and b2
    cout << "Input for b1:" << endl;
    cin >> b1;
    cout << "Input for b2:" << endl;
    cin >> b2;

    // Performing and displaying arithmetic operations
    result = b1 + b2;
    cout << "Addition: " << result << endl;

    result = b1 - b2;
    cout << "Subtraction: " << result << endl;

    result = b1 * b2;
    cout << "Multiplication: " << result << endl;

    result = b1 / b2;
    cout << "Division: " << result << endl;

    return 0;
}
