#include <iostream>
using namespace std;
int main()
{
    int area , area_cal , all , value ;
    int chart_1 = 200000 ;
    int chart_2 = 150000 ;
    char mat , size ;
    string text = "" ;

    cout << "Enter area : ";
    cin >> area ;
    cout << "Enter type of the meterial : ";
    cin >> mat ;

    if (area >= 20 && area <=40){
        size = 'S' ;
        all = chart_1 ;
    }
    else if (area >= 40 && area <=100){
        size = 'M' ;
        area_cal =  area - 40 ;
        all = chart_1 + (area_cal * 30000);
    }
    else if (area>100){
        size = 'L' ;
        area_cal =  area - 60 ;
        all = chart_1 + chart_2 + (area_cal * 2000);
    }
    else{
        text = "Error!";
    }

    switch (mat)
    {
    case 'b': 
    case 'B' :
        if (size == 'S'){
            area *= 5000 ;
            value = all + area ;
        }
        else if (size == 'M'){
            area *= 7500 ;
            value = all + area ;
        }
        else if (size == 'L'){
            area *= 15000 ;
            value = all + area ;
        }
        else{
            text = "Error!" ;
        }
        break;

    case 'g': 
    case 'G' :
        if (size == 'M'){
            area *= 10000 ;
            value = all + area ;
        }
        else if (size == 'L'){
            area *= 20000 ;
            value = all + area ;
        }
        else{
            text = "Error!" ;
        }
        break;

    case 'p': 
    case 'P' :
        if (size == 'M'){
            area *= 15000 ;
            value = all + area ;
        }
        else if (size == 'L'){
            area *= 30000 ;
            value = all + area ;
        }
        else{
            text = "Error!" ;
        }
        break;    
    default:
        text = "Error!" ;
        break;
    }

if (text == ""){
    cout << "the house will cost " << value <<" baht to build" ;
}
else
{
    cout << text ;
}
return(0);
}

    
    
    