#include <iostream>
#include <cmath>
using namespace std;

bool IsPrime(int n)
{

    if (n == 1)
    {
        return false;
    }
    else if (n == 0)
    {
        cout<<"The number is 0 which can't be Prime nor Composite."<<endl;
    }
    
    for (int i = 2; i <= sqrt(n); i++)
    {

        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
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