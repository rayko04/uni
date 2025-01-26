/* Question 6: Write a program to reverse the element of an integer 1-D array.

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
       
   }
   
   for(int i=0,j=SIZE-1;i<SIZE , j>=0;i++,j--)
   {
   	   arr2[j]=arr[i];
   	   
   }
   for(int j=SIZE-1; j>=0; j--)
   { 
   	   cout<<"No at index "<<j<<" is "<<arr2[j]<<endl;
   }   
   
	   
	 

	return 0;
}