/*
การศึกษาเขียนโฟวชาร์ตเพื่อออกแบบโปรแกรมดังต่อไปนี้
ให้นักศึกษาเขียนโปรแกรมรับคะแนนเก็บของนักเรียนชั้นม 6 
ของโรงเรียนมัธยมแห่งหนึ่งในจังหวัดปราจีนบุรีแล้วนำมา
หาผลรวมของคะแนนเก็บต่าง ๆ และนำมาคิดเกรดของนักเรียนแต่ละคน 
โดยที่ให้รับจำนวนนักเรียนเข้ามาก่อนแล้วค่อยทำการรับค่าคะแนนเก็บ
ของนักเรียนแต่ละคน ซึ่งคะแนนเก็บมีหัวข้อดังนี้ 
คะแนนเข้าห้องเรียน 	5 คะแนน 
คะแนนการบ้าน 	 15 คะแนน
คะแนนทดสอบย่อย 	10 คะแนน
คะแนนกลางภาค 	35 คะแนน
คะแนนปลายภาค 	35 คะแนน
รวมทั้งหมด 		100 คะแนน
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int num_std , score1 , score2 , score3 ,score4 , score5 , sum_score ;

    cout << "Enter Number of Studen : " ;
    cin >> num_std ;
    for (int i = 1; 
    i <= num_std ; i++)
    {
        cout << "Studen of number : " << i <<endl; 
        cout << "Enter score 1 : " ; 
        cin >> score1 ; 
        cout << "Enter score 2 : " ;
        cin >> score2 ; 
        cout << "Enter score 3 : " ;
        cin >> score3 ; 
        cout << "Enter score 4 : " ;
        cin >> score4 ; 
        cout << "Enter score 5 : " ;
        cin >> score5 ; 
        
        sum_score = score1 + score2 + score3 + score4 + score5 ;
            if (sum_score >= 80)
            {
                cout << "Grade A" << endl;
            }
            else if (sum_score >= 70)
            {
                cout << "Grade B" << endl;
            }
            else if (sum_score >= 60)
            {
                cout << "Grade C" << endl;
            }
            else if (sum_score >= 50)
            {
                cout << "Grade D" << endl;
            }
            else
            {
                cout << "Grade F" << endl;
            }

    }
}