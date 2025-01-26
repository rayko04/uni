/*Q20 vowel or consonent

*/
#include<iostream>
using namespace std;
int main()
{
	char a;
	cout<<"input character: ";
	cin>>a;
	
	if(!isalpha(a))
	cout<<"isnt alphabet";
	else if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U')  //or seperate upper lower case
	cout<<"is vowel.";
	else
	cout<<"is consonant.";
	
	return 0;
}