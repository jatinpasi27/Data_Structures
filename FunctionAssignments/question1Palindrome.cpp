#include <iostream>
using namespace std;

bool palindrome(int n)
{
    int dig = n, lastdig;
    int res = 0;

    while (dig > 0)
    {
        lastdig = dig % 10;
        res = res * 10 + lastdig;
        dig /= 10;
    }
    if (n == res)
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
    int n;
    cout << "Enter the number:";
    cin >> n;
    // palindrome(n);
    if ( palindrome(n))
    {
        cout << "The number is Palindrome Number.";
    }
    else
    {
        cout << "The number is not a Palindrome Number.";
    }
    return 0;
}