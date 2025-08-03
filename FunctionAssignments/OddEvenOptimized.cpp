#include<iostream>
using namespace std;

bool Even(int n){
    if (n%2==0)
    {
        return true;
    }
    else{
        return false;
    }
    
}

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<Even(n)<<endl;
    return 0;
}