#include <iostream>
using namespace std;
// Global Scope Variable.
int num = 45;
// Local scope Variables.
int sum(int a, int b)
{
    // Use of global variable.
    cout << num << endl;
    if (a >= 1)
    {
        // Use of global variable.
        cout << num << endl;
        int x = 24;
    }
    // cout<<x<<endl; //local variable inside if.
    {
        int j = 23;
    }
    // cout<<j<<endl; // Local scope inside the braces.
    int s = a + b;
    cout << s;
    return s;
}

int main()
{
    cout << num << endl; // Can be accessed through anywhere in the entire code.
    sum(4, 6);
    // int s =10;
    // cout<<s<<endl; //Error due to local scope in function.
    return 0;
}