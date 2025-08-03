#include<iostream>
using namespace std;


int reverse(int n){
    int res = 0;
    while(n > 0)
    {
        int lastdig = n % 10;
        res = res * 10 + lastdig;
        n /= 10;
    }
    return res;
}

bool isPalindrome(int num){
    int revnum = reverse(num);
    return num == revnum;
}

int main(){
    int number;
    cout<<"Enter the number:";
    cin>>number;
    if(isPalindrome(number)){
        cout<<"The number is Palindrome.";

    }
    else{
        cout<<"The number is not a Palindrome Number.";
    }

    return 0;
}