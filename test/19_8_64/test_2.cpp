#include <iostream> 
#include <string> 
using namespace std;
int main(){
    int score;
    cout << "Enter a score : ";
    cin >> score;
    cout << endl;

    if(score >= 80 && score <= 100)
        cout << score << " Good ";

    else if(score >= 50 && score < 80)
        cout << score << " Pass ";

    else
        cout << score << " Fail " << endl;

    return(0);
}