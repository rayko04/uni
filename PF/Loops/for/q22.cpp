/* 

*/
#include <iostream>
#include<math.h>
using namespace std;

int main() {
	float no,no1=0,no2=1,no3;
	cout<<"Input no: ";
	cin>>no;
	cout<<no1<<" "<<no2<<" ";
	
	for(int i=1; i<=no; i++)
	{
		no3=no1+no2;
		cout<<no3<<" ";
		no1=no2;
		no2=no3;
		
	}
	


	return 0;
}
   