/* Question 8	write a program that inputs number and then display the table of enter no.


*/
#include <iostream>
using namespace std;
int main()
{
	int no;
	cout<<"Input no: ";
	cin>>no;
	
	int prod;
	for(int i=1; i<=10;i++)
	{
		prod = no*i;
		cout<<no<<'x'<<i<<'='<<prod<<endl;
	}

	
	return 0;
}