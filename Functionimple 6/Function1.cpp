//Functions in Cpp.
#include<iostream>
using namespace std;

void sayHello(){
    cout<<"Hello :)\n";
}

void assistant(){
    sayHello();
    cout<<"Work Done!\n";
}
int main(){
    // sayHello();
    assistant();
    return 0;
}