// Compute the sum of the elements in a array
#include <iostream>
using namespace std;
int main()
{
        // declare and initial array
        int A[ ] = {1,2,3,4,5,6,7,8,9,10};
        const int Array_Size = 10;
        int Sum = 0;
        // Compute sum value in array 
        for(int i = 0 ; i < Array_Size ; i++) Sum = Sum + A[i];
        // Display result 
        cout << "Total of array elements : " << Sum << endl;
        return(0);
}

// int main()
// {
//         // declare and initial array
//         int A1 = 1 , A2 = 2 ,A3 = 3 , A4 = 4 , A5 = 5 , A6 = 6 , A7 = 7 , A8 =8 , A9 = 9 , A10 = 10 ;
//         int Sum = 0;
//         Sum = A1+A2+A3+A4+A5+A6+A7+A8+A9+A10 ;
//         cout << "Total of array elements : " << Sum << endl;
//         return(0);
// }