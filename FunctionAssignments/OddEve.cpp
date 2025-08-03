#include <iostream>
using namespace std;

void OddEven(int num)
{
    if (num % 2 == 0)
    {
        cout << "The number is Even.";
    }
    else
    {
        cout << "The number is Odd.";
    }
}
int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    OddEven(n);
    return 0;
}