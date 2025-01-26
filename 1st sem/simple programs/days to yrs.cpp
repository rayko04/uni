#include<iostream>
using namespace std;
int main()
{
	int days;
	cout<<"enter days:";
	cin>>days;
	int years = days / 365;
	days = days % 365;
	int months = days / 30;
	days = days % 30;
	int weeks = days / 7;
	days = days % 7;
	
	cout<<"year(s):"<<years<<endl;
	cout<<"month(s):"<<months<<endl;
	cout<<"weeek(s):"<<weeks<<endl;
	cout<<"day(s):"<<days;
    return 0;
}