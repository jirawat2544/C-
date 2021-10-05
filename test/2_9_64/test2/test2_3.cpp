#include <iostream>
using namespace std;
int main(){
    int Pscore , Mscore , Fscore ,rounds;
    int total = 0 ;
    cout << "Enter Number of rounds : ";
    cin >> rounds ;
    do
    {
        cout <<"Enter Project Score : ";
        cin >>Pscore;
        cout <<"Enter Midterm Score : ";
        cin >>Mscore;
        cout <<"Enter Final Score : ";
        cin >>Fscore;

        if(Pscore >  20 ){
            cout << "Project score Error !!! " << endl;
        }    
        if(Mscore >  30 ){
            cout << "Midterm score Error !!! " << endl;
        }
        if(Fscore >  50 ){
            cout << "Final score Error !!! " << endl;
        }   
        if(Pscore >  20 || Mscore >  30  || Fscore >  50 )
        {
            cout << "Total Score : 0" << endl ;
            cout << "Grade : " << endl << endl;
        }
        else
        {
            total = Pscore + Mscore + Fscore ;
             cout << "Totsl Score : " << total << endl;
            if (total>=80&&total<=100){
                cout << "Grade A" <<endl << endl ;
            }
            else if (total>=70){
                cout << "Grade B" <<endl << endl ;
            }
            else if (total>=60){
                cout << "Grade C" <<endl << endl ;
            }
            else if (total>=50){
                cout << "Grade D" <<endl << endl ;
            }
            else if (total<=50 ){
                cout << "Grade F" <<endl << endl;
            }
            else
            {
                cout << "Error" <<endl << endl;
            }
        }
    rounds-- ;

    } while(rounds>0);
    
    return 0;
}