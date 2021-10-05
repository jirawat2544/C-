/*
หนูดีรับจ้างถอนหญ้าได้เงินวันละ 1 บาท ถ้าเขาใช้เงินซื้อขนมเพิ่มขึ้นเรื่อย ๆ 
โดยในวันที่ 1 ซื้อขนม 1 บาท วันที่ 2 ซื้อขนม 2 บาท 
กำหนดให้หนูดีมีเงินเริ่มต้นในวันที่ 1 จากคุณแม่ให้ไว้ m บาท 
หนูดีจะมีเงินพอที่จะซื้อขนมแบบนี้ไปถึงวันที่เท่าไหร่ 
ให้เขียนโปรแกรมภาษา C++ เพื่อหาคำตอบของปัญหานี้
*/

#include <iostream>
using namespace std;
int main(){
    int money,day=0,dis=0;
    cout <<"How much money has Dee got? : ";
    cin >>money;
   do
   {
       dis++;
       day++;
       money = money - dis;
   } while (money > 0);
    money = money+dis;
    cout <<" Dee can do this for "<< day<<" days."<<endl;
    cout <<"Then he still has "<< money << " Baht.";
    return 0;
}