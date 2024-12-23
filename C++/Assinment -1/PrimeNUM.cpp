

#include <iostream>

using namespace std;

class prime
{
private:
    int num;
    int sum;

public:
    prime()
    {
        cout << "Find sum of prime numbers up to: ";
        cin >> num;

        sum = 0;
        int count = 0;

        for (int n = 2; count < num; n++)
        {
            // Check if n is prime
            int isprime = 1;
            for (int i = 2; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    isprime = 0;
                    break;
                }
            }

            if (isprime)
            {
                sum += n;
                count++;
            }
        }

        cout << "Sum of first " << num << " prime numbers: " << sum << endl;
    }
};

int main()
{
    prime p;
    return 0;
}
