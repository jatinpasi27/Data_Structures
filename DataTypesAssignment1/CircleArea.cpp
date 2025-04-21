#include <iostream>
using namespace std;
int main()
{
    float r;
    float PI = 3.14;
    cout << "Enter the radius of circle:";
    cin >> r;
    float Area = PI * r * r;
    cout << "The Area of Circle is:" << Area << endl;
    return 0;
}