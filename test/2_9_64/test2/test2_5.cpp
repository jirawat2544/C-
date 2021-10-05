#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << i * j << "\t"; 
        }
        cout << endl;
    }
    return 0;
}
/*
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 10; i++) {
        cout << i << "\t" ;
            if(i%100 == 0){
                cout << endl;
            }
    }
    return 0;
}
*/
