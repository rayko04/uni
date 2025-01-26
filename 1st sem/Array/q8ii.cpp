/* Question 8: Write a program to find the sum of all even and odd elements of an array.
*/
#include <iostream>
#include<math.h>
using namespace std ;
int main()
{
   
   const int SIZE = 10 ;
   int arr[SIZE] , sum1 = 0 , sum2 = 0 ;
   
   for(int i = 0 ; i < SIZE ; i++)
   {
   		cout << "Input no: " ;
   		cin >> arr[i] ;
        
	    if( arr[i] % 2 == 0 )
    		sum1 += arr[i] ;
   
        else
        	sum2 += arr[i] ;
   }
   
   cout << "sum of even elements is " << sum1 << endl ;
   cout << "sum of odd elements is "  << sum2 << endl ;
   
	   
	return 0 ;
}