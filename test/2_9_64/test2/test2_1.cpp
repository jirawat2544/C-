#include <iostream>
using namespace std;
int main(){
    int score;
    cout <<"Enter the number of your score : ";
    cin >>score;

    if (score>=80&&score<=100){
        cout << "Grade A";
    }
    else if (score>=70){
        cout << "Grade B";
    }
    else if (score>=60){
        cout << "Grade C";
    }
    else if (score>=50){
        cout << "Grade D";
    }
    else if (score<=50 && score>0){
        cout << "Grade D";
    }
    else
    {
        cout << "Error";
    }
    return 0;
}