#include <iostream>

using namespace std;

class operation
{
public:
    string s1;

    void insert()
    {
        cout << "\n Enter Your String : ";
        cin >> s1;
    }

    void display()
    {
        cout << s1;
    }

            void length()
            {
                int count = 0;

                for (int i = 0; s1[i] != 0; i++)
                {
                    count++;
                }
                s1 = '\0';

                cout << count;
            }

                void Ucase()
                {

                    cout << "\n Enter your String : ";
                    cin >> s1;

                    int i = 0;

                    while (s1[i] != '\0')
                    {
                        if (s1[i] >= 'a' && s1[i] <= 'z')
                        {
                            s1[i] = s1[i] - 32;
                            i++;
                        }
                    }

                    cout << "\n String Upper Case : " << s1;
                }

                    void Lcase()
                    {
                        cout << "\n Enter String : ";
                        cin >> s1;

                        int i = 0;

                        while (s1[i] != '\0')
                        {
                            if (s1[i] >= 'A' && s1[i] <= 'Z')
                            {
                                s1[i] = s1[i] + 32;
                                i++;
                            }
                        }

                        cout << "\n String Lower Case : " << s1;
                    }

                        void Comparison()
                        {
                            string f1;

                            cout << "Enter Your String : ";
                            cin >> s1;

                            cout << "Enter Your Comparison string : ";
                            cin >> f1;

                            int i = 0;

                            while (s1[i] != '\0' || f1[i] != '\0')
                            {
                                if (s1[i] == f1[i])
                                {
                                    cout << "This String is Same...";
                                    break;
                                }
                                else
                                {
                                    cout << "String is Not Same....";
                                    break;
                                }
                            }
                        }

                            void Copy()
                            {
                                string s2 = s1;

                                cout << "\n String Copy: " << s2 << endl;
                            }

                                void Concatenation()
                                {
                                    string s2;

                                    cout << "Enter String for Concatenation: ";
                                    cin >> s2;

                                    cout << "Your Concatenation String: " << s1 + s2 << endl;
                                }

                                    void Reverse()
                                    {
                                        int j = 0;

                                        for (int i = 0; s1[i] != '\0'; i++)
                                        {
                                            j++;
                                        }

                                        cout << "\n Reversed String : ";

                                        for (int i = j - 1; i >= 0; i--)
                                        {
                                            cout << s1[i];
                                        }
                                    }

                                        void Palindrome()
                                        {
                                            string s2;
                                            int l = 0, flag = 0,j;

                                            for (int i = 0; s1[i] != '\0'; i++)
                                            {
                                                l++;
                                            }

                                            for (int i = l - 1,j=0; i >= 0; i--,j++)
                                            {
                                                s2[j] = s1[i];
                                            }

                                            for (int i = 0; i < l; i++)
                                            {
                                                if (s1[i] == s2[j])
                                                {
                                                    flag = 0;
                                                }
                                                else
                                                {
                                                    flag = 1;
                                                    break;
                                                }
                                            }

                                            if (flag == 0)
                                            {
                                                cout << "String Palindrome : ";
                                            }
                                            else
                                            {
                                                cout << "String Not Palindrome : ";
                                            }
                                        }
};

int main()
{
    operation p1;

    int choice;

    p1.insert();
    p1.display();

menu:

    cout << "\n\n 1. length : \n";
    cout << " 2. Upper case Of string : \n";
    cout << " 3. Lower case of String : \n";
    cout << " 4. Comparison Of String : \n";
    cout << " 5. Copy of string : \n";
    cout << " 6. Concatenation of string : \n";
    cout << " 7. Reverse of String : \n";
    cout << " 8. Palindrome of string : \n";

    cout << "\n Enter Your Choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        p1.length();

        goto menu;

    case 2:
        p1.Ucase();

        goto menu;

    case 3:
        p1.Lcase();

        goto menu;

    case 4:
        p1.Comparison();

        goto menu;

    case 5:
        p1.Copy();

        goto menu;

    case 6:
        p1.Concatenation();

        goto menu;

    case 7:
        p1.Reverse();

        goto menu;

    case 8:
        p1.Palindrome();

        goto menu;
    }

    return 0;
}