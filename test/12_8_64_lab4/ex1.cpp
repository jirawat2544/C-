#include <iostream> 
#include <string> 
using namespace std;
int main(){
    char Num;
    cout << "\nEnter a character : ";
    cin >> Num;
    cout << endl;
    
    if(Num >= '0' && Num <= '9')
        cout << Num << " Is numeric.";

    else cout << Num << " Is character.";
        cout << endl;

    return(0);
}