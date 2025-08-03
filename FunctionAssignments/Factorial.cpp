#include <iostream>
using namespace std;

int factorial(int n){
    int i = 1;
    int fact =1;
    while(i<=n){
        fact *= i;
        i++;
    }
    return fact;
}
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    int fact = factorial(num);
    cout<<"The factorial of "<<num<<" is : "<<fact;
    return 0;
}