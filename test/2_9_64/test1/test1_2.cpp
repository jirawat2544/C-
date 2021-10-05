/*ให้นักศึกษาเขียนโปรแกรมเกมเป่ายิ้งฉุบโดยมีผู้ดเล่นได้ 2 คนผู้เล่นแต่ละคนสามารถออกค้อนกรรไกรกระดาษได้เท่านั้น
กฎกติกาการแพ้ชนะมีดังนี้ 1 กระดาษชนะค้อน 2 ค้อนชนะกรรไกร 3 กรรไกรชนะกระดาษ 4 หากออกค้อน กรรไกร กระดาษเหมือนกันจะถือว่าเสมอ
จำนวนการเล่นในแต่ละรอบให้สามารถกำหนดจำนวนการเล่นได้ไม่เกิน 20 ครั้งต่อรอบ การชนะหมายความว่าจะต้องชนะ 70 % 
ของจำนวนทั้งหมดเท่านั้นถึงจะชนะ
1 คือ ค้อน
2 คือ กรรไกร
3 คือ กระดาษ
*/

#include <iostream>
using namespace std;
int main(){
    int play1 , play2 , scoreP1=0 , scoreP2=0 , rounds;
    cout <<"Enter number of rounds : ";
    cin >>rounds;
    cout << "Enter your choice (1 = hammer , 2 = scissors , 3 = paper)" << endl ;
        for (int i = 1; i <=rounds; i++)
        {
            cout << endl << "round : " << i << endl;
            cout <<"Enter play 1 : "; //1 คือ ค้อน, 2 คือ กรรไกร , 3 คือ กระดาษ
            cin >>play1;
            cout <<"Enter play 1 : "; //1 คือ ค้อน, 2 คือ กรรไกร , 3 คือ กระดาษ
            cin >>play2;

            if(play1==play2)
            {
                 scoreP1+=1 , scoreP2+=1 ;
                 cout << "Play1 equal Play2" << endl ;
            }
            else if((play1==1 && play2==2) || (play1==3 && play2==1) || (play1==2 && play2==3))
            {
                scoreP1+=1 ;
                cout << "Play1 Win" << endl ;
            }
            else if((play1==2 && play2==1) || (play1==1 && play2==3) || (play1==3 && play2==2))
            {
                scoreP2+=1 ;
                cout << "Play2 Win" << endl ;
            }
        }
        if (scoreP1==scoreP2){
            cout << endl << "Play1 equal Play2"  ;
            cout << endl << "ScorePlay1 : " << scoreP1 <<" , ScorePlay2 : " << scoreP2 ;
        }
        else if (scoreP1 >= (70*rounds/100)){
            cout << endl << "Play1 Win Win Win";
            cout << endl << "ScorePlay1 : " << scoreP1 <<" , ScorePlay2 : " << scoreP2 ;
        } 
        else if (scoreP2 >= (70*rounds/100)){
            cout << endl << "Play2 Win Win Win";
            cout << endl << "ScorePlay1 : " << scoreP1 <<" , ScorePlay2 : " << scoreP2 ;
        }
        
        
    return 0;
}