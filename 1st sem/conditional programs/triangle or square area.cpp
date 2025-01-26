/* Q 17.	Write a program that contains an if statement that
 may be used to compute the area of a square (area = side * side) 
or a triangle (area = * base * height) after prompting the user to
 type the first character of the figure name (S or T).

*/
#include<iostream>
using namespace std;
int main()
{
	char a;
	cout<<"Required Area of triangle or square? "<<"\nInput as 'T' or 'S': ";
	cin>>a;
	
	if(a == 'S')
	{
		float side1;
		cout<<"Length of any side: ";
		cin>>side1;
		
		float area = side1 * side1;
		cout<<"Area of square is "<<area<<endl;
    }
    
/*	else                                                             this
	    cout<<"Square was not defined in input."<<endl;
	
	    
	if(a == 'T')
	{
		float base,height;
		cout<<"Base: ";
		cin>>base;
		cout<<"Height: ";
		cin>>height;
		
		float area = 0.5 * base * height;
		cout<<"Area of triange is "<<area<<endl;
	}
	
	else
	    cout<<"Triangle was not defined in input.";
*/
    else if(a == 'T')
    {
    	float base,height;                                          //or this
		cout<<"Base: ";
		cin>>base;
		cout<<"Height: ";
		cin>>height;
		
		float area = 0.5 * base * height;
		cout<<"Area of triange is "<<area<<endl;
    	
    	
	}
	
	else
	    cout<<"Invalid Input!";
    
    
   /* if(a == 'T')                                                      //or this
	{
		float base,height;
		cout<<"Base: ";
		cin>>base;
		cout<<"Height: ";
		cin>>height;
		
		float area = 0.5 * base * height;
		cout<<"Area of triange is "<<area<<endl;
	}
    
    if(a!='T' && a!='S' )
        cout<<"invalid";
*/
	return 0;
    
}