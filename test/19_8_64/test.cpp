#include <iostream> 
using namespace std;

    int main(){
        int n1 , n2;
        cout << "Enter number1 : ";
        cin >> n1;
        cout << "Enter number2 : ";
        cin >> n2;
        int Sum = 0;
        int Value = 0;
        if (n1>n2)
        {
            cout << "number1 morethan number2 !!!";
            return(0);
        }
        
        for(int n = n1 ; n <= n2  ; n++)
        {
            for(int j = 1 ; j <= n ; j++)
            {
                if((j%1==0)&&(j!=1))
                {
                    if ((n%j==0))
                    {                  
                        Value = Value + 1;
                    }
                }
            }
            if(Value==2)
            {
                Sum = Sum + n ;    
            }
        Value = 0;
        }
        cout << " value = "<< Sum << endl;
    return(0);
    }