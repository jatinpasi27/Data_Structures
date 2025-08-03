#include <iostream>
using namespace std;
// factorial function.

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
// Binomial Coefficient.

int Binomial(int n, int r)
{
    int val1 = factorial(n);
    int val2 = factorial(r);
    int val3 = factorial(n - r);
    int result = val1 / (val2 * val3);
    return result;
}

int main()
{
    int n,r;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter r:";
    cin>>r;
    int binomial = Binomial(n,r);
    cout<<"The value of Binomial Coeffecient is:"<<binomial<<endl;
    return 0;
}