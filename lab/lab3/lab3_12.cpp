#include <iostream> 
using namespace std;
int main(){
    float F;
    float C;
    cout << "Enter Fahrenheit(F) : ";
    cin >> F;
    C = 5/9*(F-32) ;
    cout <<"Celsius (C) = " << C << endl;
    return (0) ; 
    }