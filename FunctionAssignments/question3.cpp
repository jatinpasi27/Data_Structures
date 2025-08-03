#include <iostream>
using namespace std;

int abSquare(int a, int b)
{
    int res = a * a + b * b + 2 * a * b;
    return res;
}
int main()
{
    int a;
    cout << "Enter the number:";
    cin >> a;
    int b;
    cout << "Enter the number:";
    cin >> b;
    cout << "The whole Square of the two numbers are:" << abSquare(a,b);
    return 0;
}