#include <iostream> 
using namespace std;
int main()
{
    int fish1 , tomato1 , fish2 , tomato2 , canfish , cantomato , fishremain , tomatoremain ;
    cout << "Enter the number of fish and tomatoes you will need per can." << endl;
    cout << "fish : ";
    cin >> fish1 ;
    cout << "tomato : ";
    cin >> tomato1 ;

    cout << "Enter your number of Fishsardin :";
    cin >> fish2 ;
    cout << "Enter your number of Tomato :";
    cin >> tomato2 ;

    canfish = fish2/fish1;
    cantomato = tomato2/tomato1;

    if(canfish<=cantomato){
        cout << "Number of canned fish : " << canfish <<endl;
        fishremain = fish2-(canfish*3);
        cout << "Fish remain : " << fishremain <<endl;
        tomatoremain = tomato2-(canfish*2);
        cout << "Fish remain : " << tomatoremain <<endl;
    }
    else{
        cout << "Number of canned fish : " << cantomato <<endl;
        fishremain = fish2-(cantomato*3);
        cout << "Fish remain : " << fishremain <<endl;
        tomatoremain = tomato2-(cantomato*2);
        cout << "Fish remain : " << tomatoremain <<endl;
    }

return(0);
}