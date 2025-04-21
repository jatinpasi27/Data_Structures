#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int b = 5;
    cout << ((a < b) && (a != b)) << endl;    // 1.
    cout << ((a > b) || (a != b)) << endl; // 1.
    cout << (!(3 == 5)) << endl;           // 1.
    cout << (!(3 != 5)) << endl;           // 0.

    return 0;
}