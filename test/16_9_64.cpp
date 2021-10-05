#include <iostream>
using namespace std;

int main(){
    double dep , month  , rate , i ,IR , IN_R , OC , SUM_IR ;
    cout << "input interest : " ;
    cin >> dep ;
    cout << "Input number of month : " ;
    cin >> month ;
    cout << "Input interest rate : ";
    cin >> rate ;
    cout << "***************************" << endl;  

    for (i = 1; i <= month; i++)
    {
	    IN_R = (dep*rate)/100;
        OC = dep+IN_R ;

        cout << "#"<<i << " dep. = " << dep << " in. = " << IN_R << " outcome = " << OC <<endl;

        dep = OC ;
        SUM_IR += IN_R ;

    }
    cout << "***************************" << endl;    

    cout << "All oF interest : " << SUM_IR;

    return 0 ;
    
}