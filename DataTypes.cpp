#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a =10;
    char ch = 'h';
    float b = 3.14923f;   // 7 digits after decimal.
    double d = 2.233434225234;  // 15 digits after decimal.
    bool dec = true;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<ch<<endl;
    cout<<d<<endl;
    cout<<dec<<endl;
    cout<<endl;
    cout<<"The size of int is:"<<sizeof(a)<<endl;
    cout<<"The size of Float is:"<<sizeof(b)<<endl;
    cout<<"The size of character is:"<<sizeof(ch)<<endl;
    cout<<"The size of double is:"<<sizeof(d)<<endl;
    cout<<"The size of boolean dt is:"<<sizeof(dec)<<endl;
    cout<<endl;
    cout<<setprecision(12)<<"The value of float is:"<<b<<endl;
    cout<<setprecision(15)<<"The value of double is:"<<d<<endl;

    return 0;
}