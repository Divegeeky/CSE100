#include<iostream>
using namespace std;

int main()
{
	const int SIZE=10;
	char correctAnswers[]={'B', 'D', 'A' , 'A', 'C', 'A', 'B', 'A', 'C', 'D'};
	char studentAnswers[SIZE];
	char ans;
	int attempts=0, correctCount=0;

	//read student answers
	for(int i=0; i<SIZE ; i++)
	{
		cin>>ans;
		
		if(ans !='A' && ans !='B' && ans !='C' && ans !='D')
		{
		  if(attempts<3)
		  {
		  cout<<"Invalid Input"<<endl;
		  attempts++;
		  i--;
		  continue;
		  }else
		  {
			  cout<<"Invalid Input"<<endl;
			  system("pause");
			  exit(0);
		  }
		}else
		{
           studentAnswers[i]=ans;
		}

	}
	// Grade

	for(int i=0; i<SIZE; i++)
	{
		if(correctAnswers[i]==studentAnswers[i])
		correctCount++;
		
	}

	if(correctCount>=7)
	{
		cout<<"Congratulations !, you have passed the exam"<<endl;
	    cout<<"Number of correct answers ="<<correctCount<<endl;
	}
	else
	{
		cout<<"Sorry, you have not passed the exam "<<endl;
		cout<<"Number of correct answers ="<<correctCount<<endl;
	}

	system("pause");
	return 0;
}