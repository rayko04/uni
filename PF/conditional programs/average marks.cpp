/* Q 22.	Write a program that determines a student’s grade. The program will read three types of scores 
(quiz, mid-term, and final scores) and determine the grade based on the following rules:
•	if the average score =90% =>grade=A
•	if the average score >= 70% and <90% => grade=B
•	if the average score>=50% and <70% =>grade=C
•	if the average score<50% =>grade=F


*/
#include<iostream>
using namespace std;
int main()
{
	float quiz,mids,finals,average;
	cout<<"Marks in quiz: ";
	cin>>quiz;
    cout<<"Marks in mids: ";
	cin>>mids;
	cout<<"Marks in finals: ";
	cin>>finals;
	
	average = (quiz+mids+finals)/100*100;
	
	if(average>=90)
	cout<<"Passed with Grade A";
	else if(average>=70 && average<90)
	cout<<"Passed with Grade B";
	else if(average>=50 && average<70)
	cout<<"Passed with Grade C";
	else
	cout<<"Failed.";
	return 0;
}