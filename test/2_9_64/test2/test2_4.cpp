#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int choice ;
    float radious  , circum , area , volume ; 
    float pi = 3.14;
    cout << "Enter the number of radious : ";
    cin >>radious;
    cout << "1. Calculate the circumference of circle" << endl ;
    cout << "2. Calculate the area of circle" << endl;
    cout << "3. Calculate the volume of phere" << endl;
    cout << "Enter the choice : ";
    cin >> choice ;

    switch(choice)
    {
    case 1 :
        circum = 2.0*pi*radious ;
        cout << "CVolume of circle is : " << circum ;
        break;

    case 2 :
        area = pi*pow(radious,2);
        cout << "Volume of circle is : " << area ;
        break;
        
    case 3 :
        volume = (4.0/3.0) * pi * pow(radious,3)  ;
        cout << "Volume of circle is : " << volume ;
        break;
    
    default:
        cout << "Error"; 
        break;
    }
    return 0;
}