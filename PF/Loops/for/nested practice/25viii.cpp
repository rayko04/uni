/*  a
    ab
    abcd
    abcde
 



*/
#include <iostream>
using namespace std;
int main()
{
	for(char i='a'; i<='e';i++)
	{
		
		for(char k='a' ; k<=i; k++ )
		{
			cout<<k;
	    }
	    cout<<endl;
	}
	
	
	return 0;
}