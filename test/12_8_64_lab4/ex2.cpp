#include <iostream> 
#include <string> 
using namespace std;
int main(){
    int score;
    cout << "Enter a score : ";
    cin >> score;
    cout << endl;

    if(score >= 90)
        cout << score << " Grade A ";

    else if(score >= 80 && score <= 89)
        cout << score << " Grade B ";

    else if(score >= 70 && score <= 79)
        cout << score << " Grade C ";
    
    else if(score >=60 && score <= 69)
        cout << score << " Grade D ";

    else cout << score << " Grade F !!!!!!";
        cout << endl;

    return(0);
}