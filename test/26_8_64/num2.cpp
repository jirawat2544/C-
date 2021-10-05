#include <iostream>
using namespace std;

int main()
{
    int area , value1 , value2 ;
    char quality ;

    cout << "Enter area : ";
    cin >> area ;
    cout << "Enter type of the meterial : ";
    cin >> quality ;

    if (area >100)
    {
      value2 =(area-60)*2000 ;
        if(quality == 'b')
        { 
            value1 = 200000 + 150000 + value2 + (area*15000) ;
            cout << "the house will cost " << value1 <<" baht to build" ;
        }
        if (quality == 'g')
        {
            value1 = 200000 + 150000 + value2 + (area*20000) ;
            cout << "the house will cost " << value1 <<" baht to build" ;
        }
        if (quality == 'p')
        {
            value1 = 200000 + 150000 + value2 + (area*30000) ;
            cout << "the house will cost " << value1 <<" baht to build" ;
        }  /* code */
    }

    else if (area > 40)
    {
        value2 = (area-40)*3000 ;
        
        if(quality == 'b')
        {  
            value1 = 200000 + value2 +(area*7500) ;
            cout << "the house will cost " << value1 <<" baht to build" ;
        }
        if (quality == 'g')
        {
            value1 = 200000 + value2 +(area*10000) ;
            cout << "the house will cost " << value1 <<" baht to build" ;
        }
        if (quality == 'p')
        {
            value1 = 200000 + value2 +(area*15000) ;
            cout << "the house will cost " << value1 <<" baht to build" ;
        }
    }

    else{
        if(quality == 'b')
        {
            value1 = 200000 + (area*5000) ;
            cout << "the house will cost " << value1 <<" baht to build" ;
        }
        if (quality == 'g')
        {
            cout << "Error";
        }
        if (quality == 'p')
        {
            cout << "Error";
        }
    }
    
}
