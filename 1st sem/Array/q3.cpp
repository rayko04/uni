/*  Question 3:Write a program to store 10 elements in an array of integers. 
Program store the double value of each element of one array into another array.
 Print the second array on the screen.

*/
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
   
   const int SIZE = 5;
   double arr[SIZE],arr2[SIZE];
   for(int i=0; i<SIZE; i++)
   {
   	   cout<<"Input no: ";
   	   cin>>arr[i];
       arr2[i]=2*arr[i];	   
   }
   
   for(int i=0;i<SIZE;i++)
   {
   	   cout<<"No at index "<<i<<" is "<<arr2[i]<<endl;
   }
   
   
   
	   
	 

	return 0;
}