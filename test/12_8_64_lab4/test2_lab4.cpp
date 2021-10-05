#include <iostream> 
#include <string> 
using namespace std;
int main(){
    int Nline;
    string str;
    cout << "INPUT number line  : ";
    cin >> Nline;
    cout << "INPUT character  : ";
    cin >> str;
    cout << endl;

    for (int i = 0; i < Nline; i++)
    {
        for (int t = 0; t <= i; t++)
        {
            cout << str ;
        }
        cout << endl ;
    }
    return(0);
}