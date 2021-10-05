#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num1;
    int num2;
    cout << "Enter number 1 : ";
    cin >> num1;
    cout << "Enter number 2 : ";
    cin >> num2;
    cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
    cout << num1 << " - " << num2 << " = " << num1-num2 << endl;
    cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
    cout << num1 << " / " << num2 << " = " << num1/num2 << endl;
    cout << num1 << " % " << num2 << " = " << num1%num2 << endl;
   
    return(0);
}