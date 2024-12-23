#include <iostream>
#include <string>
using namespace std;

class CString {
private:
    string str;  // to hold the string

public:
    // Constructor to initialize the string
    CString(const string& s = "") : str(s) {}

    // Overload the + operator for string concatenation
    CString operator+(const CString& other) {
        return CString(str + other.str);  // Concatenate strings
    }

    // Overload the == operator to check if two strings are equal
    bool operator==(const CString& other) const {
        return str == other.str;
    }

    // Overload the != operator to check if two strings are not equal
    bool operator!=(const CString& other) const {
        return str != other.str;
    }

    // Overload the < operator for lexicographical comparison
    bool operator<(const CString& other) const {
        return str < other.str;
    }

    // Overload the <= operator for lexicographical comparison
    bool operator<=(const CString& other) const {
        return str <= other.str;
    }

    // Overload the > operator for lexicographical comparison
    bool operator>(const CString& other) const {
        return str > other.str;
    }

    // Overload the >= operator for lexicographical comparison
    bool operator>=(const CString& other) const {
        return str >= other.str;
    }

    // Method to accept user input
    void input() {
        cout << "Enter a string: ";
        getline(cin, str);
    }

    // Method to display the string
    void display() const {
        cout << str << endl;
    }
};

int main() {
    CString str1, str2, str3;

    // Taking user input for strings
    cout << "Input for str1:\n";
    str1.input();

    cout << "Input for str2:\n";
    str2.input();

    cout << "Input for str3:\n";
    str3.input();

    // Concatenation using + operator
    CString result = str1 + str2;
    cout << "Concatenated String: ";
    result.display();

    // Equality check using == and != operators
    if (str1 == str3) {
        cout << "str1 is equal to str3" << endl;
    } else {
        cout << "str1 is not equal to str3" << endl;
    }

    if (str1 != str2) {
        cout << "str1 is not equal to str2" << endl;
    }

    // Lexicographical comparison using <, <=, >, >= operators
    if (str1 < str2) {
        cout << "str1 is lexicographically smaller than str2" << endl;
    }

    if (str1 >= str3) {
        cout << "str1 is lexicographically greater than or equal to str3" << endl;
    }

    return 0;
}
