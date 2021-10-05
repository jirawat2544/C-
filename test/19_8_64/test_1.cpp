#include <iostream> 
using namespace std;

    int main(){
    int x ;
    cout << "Enter number (x) :" ;
    cin >> x ;

    if (x/5==1){
        cout << x << " is divisble by 5 " <<endl;
    }
    else{
        cout << x << " isn't divisble by 5 " <<endl;
    }

    return(0);
    }