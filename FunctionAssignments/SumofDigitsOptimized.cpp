#include <iostream>
using namespace std;

int DigSum(int n)
{
  int res = 0;
    while (n > 0)
    {
        res += n % 10;
     
        n /= 10;
    }
    return res;
}
int main()
{
    int num;
    cout << "Enter the Number:";
    cin >> num;
    int sum = DigSum(num);
    cout << "The Sum of the Digits of a number is: " << sum << endl;
    return 0;
}