#include <iostream>
#include <cmath>
using namespace std;

bool IsPrime(int n)
{
    bool isprime = true;
    if (n == 1)
        {
            return false;
        }
    for (int i = 2; i <= sqrt(n); i++)
    {
    
        
        if (n % i == 0)
        {
            isprime = false;
            break;
        }
    }
    if (isprime == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    bool prime = IsPrime(num);
    if (prime == true)
    {
        cout << "The Number is Prime.";
    }
    else
    {
        cout << "The Number is Composite.";
    }
    return 0;
}