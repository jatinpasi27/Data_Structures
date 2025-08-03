#include <iostream>
using namespace std;

void sayHello(); // Forward Declaration
int main()
{
    sayHello(); // Function Call.
    return 0;
}

void sayHello()
{
    cout << "Hello!!"; // Defination
}