#include <iostream>
using namespace std;

// if(a>=b && a>= c){
//     return a;
// }else if (b >= c)
// {
//     return b;
// }
// else{
//     return c;
// }

int largestNum(int a, int b, int c)
{
  
        if (a >= b && a >= c)
            return a;
        else if (b >= a && b >= c)
            return b;
        else
            return c;
    }


int main()
{
    int x, y, z;
    cout << "Enter x:";
    cin >> x;
    cout << "Enter y:";
    cin >> y;
    cout << "Enter z:";
    cin >> z;
    int largest = largestNum(x, y, z);
    if (largest == x)
    {
        cout << x << " is Largest among all.";
    }
    else if (largest == y)
    {
        cout << y << " is Largest among all.";
    }
    else
    {
        cout << z << " is Largest among all.";
    }
    return 0;
}