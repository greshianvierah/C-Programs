//rocky driving school system
#include <iostream>
using namespace std;

int main()
{
	string studentname;
	float theory_test_marks;
	float practical_test_marks;
	float average_score;
	
	//prompt user to enter details
	cout << "Enter student name:"<<endl;
	cin >> studentname;
	cout << "Enter Theory test mark:"<<endl;
	cin >> theory_test_marks;
	cout << "Enter Practical test marks:"<<endl;
	cin >> practical_test_marks;
	
	//calculate the average score
	average_score=(theory_test_marks+practical_test_marks)/2; 
	 cout << "Average score:"<< average_score<< endl;
	 
	 cout << "DRIVING TEST RESULTS"<<endl;
	 
	 cout << "===================="<<endl;
	 cout << "Student name:"<< studentname<<endl;
	 cout << "Theory test marks:"<< theory_test_marks<<endl;
	 cout << "Practical test marks:"<< practical_test_marks<<endl;
	 cout << "Average score:"<< average_score<<endl;
	 
	 //student passes or fails
	 if(average_score >=50){cout << "Status: Passed"<<endl;}
	 	else {cout << "Status: Failed"<<endl;}
	 		
	 cout << "===================="<<endl;		
		 
		 
	 		
	 		
	 

}