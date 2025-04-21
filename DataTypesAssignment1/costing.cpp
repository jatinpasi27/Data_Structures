#include <iostream>
using namespace std;
int main()
{
    float pen, pencil, eraser;
    float IncludingGST,allTotal;
    cout << "Enter the cost of pen:";
    cin >> pen;
    cout << "Enter the cost of pencil:";
    cin >> pencil;
    cout << "Enter the cost of eraser:";
    cin >> eraser;
    float TotalCost = pen + pencil + eraser;
    IncludingGST = TotalCost + (TotalCost * 18/100);
    // float TotalCost = pen + pencil + eraser;
    cout << "The Total Cost is:" << TotalCost << endl;
    cout << "The Total Cost including GST is:" << IncludingGST << endl;
    return 0;
}