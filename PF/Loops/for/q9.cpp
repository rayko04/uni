/* Question 9	write a program that inputs number and length, then display the table.

*/
#include <iostream>
using namespace std;

int main() {
	
	int no, len;
	cout<<"input number";
	cin>>no;
	cout<<"input length";
	cin>>len;
	
	int prod;
	for(int i=1; i<=len; i++)
    {
    	prod=i*no;
    
        cout<<no<<'X'<<i<<'='<<prod<<endl;    	
	}
	
	return 0;
} 
   