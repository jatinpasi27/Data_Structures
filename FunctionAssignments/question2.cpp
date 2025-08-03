#include <iostream>
using namespace std;

int DigSum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int lastdig = n % 10;
        sum += lastdig;
        n /= 10;
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter the Number:";
    cin >> n;
    int sum = DigSum(n);
    cout << "The Sum of the Digits of a number is: " << sum << endl;
    return 0;
}