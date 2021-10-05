#include <iostream>
using namespace std;

int main(){
    int day , month , year , sumDay , satatus= 0;

    do{
        if (satatus ==1)
        {
            cout << "*** Error ****";
        }
        else{
            cout << "Please enter (day month  year1) : ";
            cin >> day >> month >> year ;
        }
    }while(day < 1 && day > 30 && month < 1 && month > 12 && year < 2513  && year > 2599);
    do
    {
        if (satatus ==1)
        {
            
        }
        else{
             cout << "Please enter (day month  year1) : ";
        }
    } while (/* condition */);
    

    sumDay += day - 1 ;
    sumDay += (month-1)*30;
    sumDay += (year-2513)*12*30;

    cout << "The difference is about "  << sumDay << " days." ;

    return 0 ;
    
}