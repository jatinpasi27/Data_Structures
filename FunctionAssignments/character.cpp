#include <iostream>
using namespace std;

char character(char ch)
{
    if (ch == 'z')
    {
        return 'a';
    }
    else if (ch == 'Z')
    {
        return 'A';
    }
    else
    {
        char res = ch + 1;
        return res;
    }
}

int main()
{
    char c;
    cout << "Enter the character:";
    cin >> c;
    cout << "The Resultant Character is: " << character(c) << endl;
    return 0;
}