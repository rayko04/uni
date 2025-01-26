/* Question 7: Write a program to find the largest and smallest element of an array.

*/
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
   
   const int SIZE = 5;
   double arr[SIZE],max,min;
   for(int i=0; i<SIZE; i++)
   {
   	   cout<<"Input no: ";
   	   cin>>arr[i];
   }
   max=arr[0], min=arr[0];
   for(int i=0; i<SIZE; i++)
   {
   	if(arr[i]>max)
   	max=arr[i];
   	if(arr[i]<min)
   	min=arr[i];
   }
   	 cout<<min<<endl<<max;

	return 0;
}