#include <iostream> 
#include <string> 
using namespace std;
int main(){
    int num;
    cout << "Enter Numeric : ";
    cin >> num;
    cout << endl;

    if(num > 0){
        cout << num <<": Number is positive " << endl;
    }
    else if (num < 0){
        cout << num <<": Number is negative " << endl;
    }
    else{
        cout << num <<": Number is zero " << endl;
    }

    return(0);
}