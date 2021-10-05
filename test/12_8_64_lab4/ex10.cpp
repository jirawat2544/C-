#include <iostream> 
#include <string> 
using namespace std;
int main(){
    int aim;
    float sum1;
    cout << "Enter annual income money : ";
    cin >> aim;
    cout << endl;

    if(aim<=100000){
        sum1 = aim * 0.05 ;
        cout << "pay tax 5% :" << sum1 << endl;
    }
    else if(aim<=500000){
        sum1 = aim * 0.1 ;
        cout << "pay tax 10% :" << sum1 << endl;
    }
    else if(aim<=1000000){
        sum1 = aim * 0.2 ;
        cout << "pay tax 20% :" << sum1 << endl;
    }
    else if(aim<=4000000){
        sum1 = aim * 0.3 ;
        cout << "pay tax 30% :" << sum1 << endl;
    }
    else{
        sum1 = aim * 0.37 ;
        cout << "pay tax 37% :" << sum1 << endl;
    }
    return(0);
}