/* =

*/
#include<iostream>
using namespace std;
int main()
{
	char a;
	cout<<"Input B,T,C: ";
	cin>>a;
	int charge,days;
	cout<<"Days: ";
	cin>>days;
	
	
	switch(a)
		{
			case 'B':
		    case 'b':
		    	charge = days*3000;
		    	break;
			case 'C':
			case 'c':
				charge = 5000*days;
			break;
			case 'T':	
			case 't':
				charge = 10000*days;
				break;
		}
		
		cout<<"Total Charge is "<<charge<<endl;
			
		 	
	return 0;
}