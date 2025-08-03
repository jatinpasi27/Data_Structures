#include <iostream>
using namespace std;
// sum function.
int sum(int a, int b) // a & b are parameters.
{
    int sum = a + b;
    return sum;
}
int diff(int a, int b) // a & b are parameters.
{
    int diff = a - b;
    return diff;
}
//default parameter function.
int product(int a, int b=1) // a & b are parameters.
{
    int pro = a * b;
    return pro;
}
int main()
{
    int s = sum(2, 4); // 2 & 4 are arguments
    cout << "The sum is : " << s << endl;
    int d = diff(4, 2); // 2 & 4 are arguments
    cout << "The Difference is : " << d << endl;
    // default parameters
    int p = product(4); // 2 & 4 are arguments
    cout << "The product is : " << p << endl;
    return 0;
}