#include <iostream>
using namespace std;

int fibonacci(int n)
{
    int a = 0, b = 1, c;
    cout << a << " " << b << " ";

    for (int i = 2; i < n; i++)
    {
        c = a + b;
        cout<<c<<" ";
        a = b;
        b = c;
    }
    
}

int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    cout<<"The fibonacci series is: ";
    fibonacci(num);
    return 0;
}