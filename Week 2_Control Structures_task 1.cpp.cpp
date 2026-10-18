//Grading system
#include <iostream>
using namespace std;
int main()
{
	string student_name, grade;
	float exam_marks;

	//Enter student details
	
	cout << "Enter student name:"<<endl;
	cin >> student_name;
	cout << "Enter exam marks:"<<endl;
	cin >> exam_marks;

	if (exam_marks>=70){grade="A";}
		else if (exam_marks>=60){grade="B";}
			else if (exam_marks>=50){grade="C";}
				else if (exam_marks>=40){grade="D";}
					else {grade="E";}
						
						
//Displaying grading system results
	cout << " GRADING SYSTEM RESULTS"<<endl;					
	cout <<"***=======================***"<<endl;
    cout << "Student name:"<< student_name<<endl;
    cout << "Exam marks:"<< exam_marks<<endl;  
    cout << "Grade:"<< grade<<endl;
	cout <<"***=======================***"<<endl;						
						

}