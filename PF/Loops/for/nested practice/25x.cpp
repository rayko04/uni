/*  BBBBBBBBB
     BBBBBBB
      BBBBB
       BBB
        B




*/
#include <iostream>
using namespace std;
int main()
{
	for(int i=5 ; i>=1;i--)
	{
		for(int j=1; j<=5-i; j++)
		{
			cout<<" ";
		}
		for(int k=1 ; k<i*2; k++ )
		{
			cout<<'B';
	    }
	    cout<<endl;
	}
	
	
	return 0;
}