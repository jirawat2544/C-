#include <iostream>
using namespace std;

int main(){
    string name[15],lastname[15],grade[15] ;
    int room[15],home[15],test[15],mid[15],final[15],sumscore,i,j ;

        for (i = 1; i <= 1; i++)
        {
            cout << "Enter of Firtname : " ;
            cin >> name[i] ;
            cout << "Enter of Lastname : " ;
            cin >> lastname[i] ;

            cout << "Enter of Scoreroom : " ;
            cin >> room[i];
            while(room[i]<0 || room[i]>5)
            {
            cout << "Enter of Scoreroom : " ;
            cin >> room[i];
            }
            
            cout << "Enter of ScoreHomework : " ;
            cin >> home[i];
            while(home[i]<0 || home[i]>15)
            {
            cout << "Enter of ScoreHomework : " ;
            cin >> home[i];
            }
            cout << "Enter of ScoreTest : " ;
            cin >> test[i];
            while(test[i]<0 || test[i]>10)
            {
            cout << "Enter of ScoreTest : " ;
            cin >> test[i];
            }
            cout << "Enter of ScoreMidterm : " ;
            cin >> mid[i];
            while(mid[i]<0 || mid[i]>30)
            {
            cout << "Enter of ScoreMidterm : " ;
            cin >> mid[i];
            }
            cout << "Enter of ScoreFinal : " ;
            cin >> final[i];
            while(final[i]<0 || final[i]>30)
            {
            cout << "Enter of ScoreFinal : " ;
            cin >> final[i];
            }

            sumscore = room[i]+home[i]+test[i]+mid[i]+final[i];

            if (sumscore>=80 || sumscore <=100)
            {
                grade[i] = "A" ;
            }
            if (sumscore>=70)
            {
                grade[i] = "B" ;
            }
            if (sumscore>=60)
            {
                grade[i] = "C" ;
            }
            if (sumscore>=50)
            {
                grade[i] = "D" ;
            }
            else{
                grade[i] = "F" ;
            }

            cout << endl ;
            
        }
        for (j = 1; j < i ; j++)
        {
            cout << "====================================" << endl ;
            cout << "No : " << j << endl ;
            cout << "Name : " << name[j] << "  " << lastname[j] << endl ;
            cout << "Score Room : " << room[j] << endl ;
            cout << "Score Homework " << home[j] << endl ;
            cout << "Score Test " << test[j] << endl ;
            cout << "Score Midterm " << mid[j] << endl ;
            cout << "Score Final " << final[j] << endl ;
            cout << "TOTAL Score : " << sumscore << endl ;
            cout << "Grade : " << grade[j] << endl ;
        }
        

    return 0 ;
    
}