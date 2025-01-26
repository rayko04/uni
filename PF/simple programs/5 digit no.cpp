/*18.	19.	Accept 5 digits no from the user then display following option.
No=12345
Result =15

*/
#include<iostream>
using namespace std;
int main()
{
	int no;
	cout<<"input 5 digit no: ";
	cin>>no;
	
	int mod1 = no % 10;
	
	int no2 = no/10;
	int mod2 = no2 % 10;
	
	int no3 = no2/10;
	int mod3 = no3 % 10;
	
	int no4 = no3/10;
	int mod4 = no4 % 10;
	
	int no5 = no4/10;
	int mod5 = no5 % 10;
	
	int sum = mod1 + mod2 +mod3 +mod4 + mod5;
	cout<<"result: "<<sum;
	
    return 0;
}