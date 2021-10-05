#include <iostream>
#include <string>
using namespace std;

int main(){
    int year ;
    
    cout << "Please enter year :" ;
    cin >> year ;

    if (year%4 == 0 && year%100 != 0){
        cout << "Year " << year << " is a leap year";
    }
    else if (year%400 == 0 && year%100 == 0)
    {
        cout << "Year " << year << " is a leap year";
    }
    else
    {
        cout << "Year " << year << " is not a leap year";
    }
    
    
}