/* Q 3.	Write a program that inputs name and 3 subject’s marks(type int) from the user,
 calculate marks average (float) if average is greater then and equal to 80 then program
  display message you are outstanding.
*/
#include<iostream>
using namespace std;
int main()
{
	string name;
	cout<<"Name: ";
	cin>>name;
	
	int subj1,subj2,subj3;
	cout<<"English: ";
	cin>>subj1;
	cout<<"Maths: ";
	cin>>subj2;
	cout<<"Physics: ";
	cin>>subj3;
	
	float avg = (subj1+subj2+subj3)/3.0f;    //.0f or take subjects as floats
	cout<<"Average: "<<avg<<endl;
	
	if(avg>=80)
	cout<<"You are Outstanding"<<endl;
	cout<<"Congragulations \n You Passed";
	

    return 0;
}