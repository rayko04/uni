/* Question 9: Write a program to find the total number of even and odd number of elements in the array.

*/
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
   
   const int SIZE = 10;
   int arr[SIZE],even=0,odd=0;
   for(int i=0; i<SIZE; i++)
   {
   	  cout<<"Input no: ";
   	  cin>>arr[i];
      if(arr[i]%2==0)
	     even++;
      else
         odd++;
   }
   cout<<"no of even elements: "<<even<<endl;
   cout<<"no of odd: "<<odd<<endl;
	return 0;
}