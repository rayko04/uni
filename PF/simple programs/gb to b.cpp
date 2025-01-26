#include <iostream>
using namespace std;
int main()
{
	long long int gb;            //same datatype as that of b + long long becoz of range
	cout<<"value in gb: ";
	cin>>gb;
	long long int b{gb*(1024*1024*1024)};
	cout<<"value in b: "<<b<<endl;
	
	return 0;
}