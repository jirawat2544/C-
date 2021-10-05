#include <iostream> 
using namespace std;
int main()
{
    int fish1 , tomato1 , fish2 , tomato2 , can;
    cout << "Enter the number of fish and tomatoes you will need per can." << endl;
    cout << "fish : ";
    cin >> fish1 ;
    cout << "tomato : ";
    cin >> tomato1 ;

    cout << "Enter your number of Fishsardin :";
    cin >> fish2 ;
    cout << "Enter your number of Tomato :";
    cin >> tomato2 ;

    while (fish1<=fish2 && tomato1<=tomato2)
    {
        fish2 -= fish1;
        tomato2 -= tomato1;
        can ++ ;
    }
        cout << "Number of canned fish : " << can <<endl;
        cout << "Fish balance : " << fish2 <<endl;
        cout << "Tomato balance : " << tomato2 <<endl;
    
return(0);
}