#include<iostream>
using namespace std;
// Find product of 2 numbers.

int product(int a, int b){

    int pro = a*b;
    return pro;
}
int main(){
    int x,y;
    cout<<"Enter x:";
    cin>>x;
    cout<<"Enter y:";
    cin>>y;
    int pro = product(x,y);
    cout<<"The Product is : "<<pro<<endl;
    return 0;
}