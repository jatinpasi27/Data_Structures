#include <iostream>
using namespace std;
int main()
{
    float rate, principle, time;
    cout << "Enter the Principle Amount:";
    cin >> principle;
    cout << "Enter the ROI:";
    cin >> rate;
    cout << "Enter the time duration:";
    cin >> time;
    float SI = (principle * rate * time) / 100;
    cout << "The Simple Interest is:" << SI << endl;
    return 0;
}