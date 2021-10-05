#include <iostream>
#include <string>
using namespace std;

int main(){
    int nBook , nToy , nModel , nStatinery ;
    float payment = 1000 , sum , sumb , sumt , summ , sums ;

    cout << "Input number of Books : ";
    cin >> nBook ; 
    cout << "Input number of Toys : ";
    cin >> nToy ;
    cout << "Input number of Models : ";
    cin >> nModel ;
    cout << "Input number of Stationery : ";
    cin >> nStatinery ;

    sumb = nBook * 120 ;
    sumt = nToy * 80 ; 
    summ = nModel * 50 ;
    sums = nStatinery * 15 ;
    sum = sumb + sumt + summ + sums ;

    if(sum >= 100000)
    {
        payment += (sum*10/100) ;
        cout << "Payment = " << payment ;
    }
    else if (sum >= 10000)
    {
        payment += (sum*5/100) ;
        cout << "Payment = " << payment ;
    }
    else if (sum >= 5000)
    {
        cout << "Payment = " << payment ;
    }
    else if (sum >= 1)
    {
        payment -= (1000*10/100) ;
        cout << "Payment = " << payment ;
    }
    else
    {
        payment -= (1000*50/100) ;
        cout << "Payment = " << payment ;
    }
    
    
    
    
    
}