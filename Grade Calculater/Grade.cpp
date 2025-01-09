// project of Grade Calculater 

#include<iostream>
using namespace std;
int main()
{
	int score;
	char grade;
	cout<<" *********************************************\n |--    Welcome! to the Grade Calculater   --|\n *********************************************"<<endl<<endl;
	cout<<" Please Enter Your Score:";
	cin>>score;
		
	if(score>80)
	{
		
		grade='A';
	}
	
	else if(score>70)
	{
		
		grade='B';
	}
	
	else if(score>50)
	{
		grade='C';
	}
	
	else if(score>=35)
	{
		grade='D';
	}
	
	else if(score<35)
	{
		grade='F';
	}
	
	else
	{
		cout<<"*You entered Invalid Value*";
	}
	
	switch(grade)
	
	{
		case 'A':
			cout<<"Your Grade is:- A 'Excellent Work! Keep it up'"<<endl<<endl;
			break;
		
		case 'B':
			cout<<"Your Grade is:- B 'Well Done..'"<<endl<<endl;
			break;
			
		case 'C':
			cout<<"Your Grade is:- C 'Good Job..'"<<endl<<endl;
			break;
			
		case 'D':
			cout<<"Your Grade is:- D 'You Passed , but you could do better next time..'"<<endl<<endl;
			break;
			
		case 'F':
			cout<<"Your Grade is:- F 'Sorry,You Failed.. Work hard next time...'"<<endl<<endl;
			break;
			
		default:
			cout<<"*You had entered wrong default value*";
			break;	
	}
	
	if(grade=='A'|| grade=='B'|| grade=='C'|| grade=='D')
		cout<<endl<<"'Congratulations! You are eligible for the next level'"<<endl;
	
	else
	{
		cout<<endl<<"'Please try again next time..'"<<endl;
	}
			
		
		
	return 0;
}
