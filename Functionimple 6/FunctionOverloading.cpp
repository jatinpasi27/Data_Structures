#include <iostream>
using namespace std;

int sum(int a, int b)
{
    cout << (a + b) << endl;
    return a + b;
}
// Function Overloading.-> Difference in terms of Parameters.
double sum(double a, double b)
{
    cout << (a + b) << endl;
    return a + b;
}
int sum(int a, int b, int c)
{
    cout << (a + b + c) << endl;
    return a + b + c;
}
int main()
{
    sum(2, 3);
    sum(12, 4);
    sum(1.2, 4.5);
    sum(5, 2, 8);
    return 0;
}