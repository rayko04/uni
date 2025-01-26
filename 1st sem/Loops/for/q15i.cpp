#include <iostream>
using namespace std;

int main()
{
	int	no, i, sum {0}, avg, max {0}, min;
	
	for(i; no>0; i++)
	{
		
		cout << "Input No: ";
		cin >> no;
		
		if(no<0)
			break;
		else
		{
				
			sum = sum + no;
			avg = sum / i;
			
			if(no > max)
				max = no;
			
			min = max;
			if(no < min)
				min = no;		
			 
	    }
	    
	}	
	
	cout << "Sum is " << sum << endl;
	cout << "Avg is " << avg << endl;
	cout << "Max is " << max << endl;
	cout << "Min is " << min << endl;
	
	return 0;
	
}