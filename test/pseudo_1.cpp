#include <iostream>
using namespace std;

void shoice();
void InputName(string firtname[15], string last[15]);
int InputScore(int room[15] , int home[15] , int test[15] , int mid[15] , int final[15]);

int main(){
    int shoice ;
    string firtname[15],lastname[15],grade[15] ;
    int room[15],home[15],test[15],mid[15],final[15],sumscore,i;

        
        while (shoice != 0){
            shoice();
            cin >> shoice ;
            if(shoice == 1){
                    InputName(firtname,lastname);
            }
            if (shoice == 2){
                room[15] = InputScore();
                home[15] = InputScore();
                test[15] 
                mid[15]
                final[15]
            }
            
        }
    return 0 ;
}
void shoice(){
        cout <<"Select of Shoice " << endl ;
        cout <<"1 : Input Name  " << endl ;
        cout <<"2 : Input Score " << endl ;
        cout <<"3 : Calgrade " << endl ;
        cout <<"4 : Show Score And Grade " << endl ;
        cout <<"0 : Off  " << endl ;
}
void InputName(string firtname[15], string lastname[15]){
    for(i = 0; i < 15; i++){
        cout << "Enter of Firtname : " ;
        cin >> firtname[i] ;
        cout << "Enter of Lastname : " ;
        cin >> lastname[i] ;
    }         
}
int InputrScore(int room[15] , int home[15] , int test[15] , int mid[15] , int final[15]){
            cout << "Enter of Scoreroom : " ;
            cin >> room[15];
            while(room[15] <0 || room[15] >5)
            {
            cout << "Enter of Scoreroom : " ;
            cin >> room[15];
            }
            
            cout << "Enter of ScoreHomework : " ;
            cin >> home[15];
            while(home[15] <0 || home [15]>15)
            {
            cout << "Enter of ScoreHomework : " ;
            cin >> home[15];
            }
            cout << "Enter of ScoreTest : " ;
            cin >> test[15];
            while(test [15]<0 || test[15] >10)
            {
            cout << "Enter of ScoreTest : " ;
            cin >> test[15];
            }
            cout << "Enter of ScoreMidterm : " ;
            cin >> mid[15] ;
            while(mid[15] <0 || mid[15] >30)
            {
            cout << "Enter of ScoreMidterm : " ;
            cin >> mid[15] ;
            }
            cout << "Enter of ScoreFinal : " ;
            cin >> final[15] ;
            while(final[15] <0 || final[15] >30)
            {
            cout << "Enter of ScoreFinal : " ;
            cin >> final[15];
            }
        return(room[15],home[15],test[15],mid[15],final[15]);
}