//C++ program for checking academic and age requirements

#include <iostream>
using namespace std;

int main()
{
	string student_name;
	int age;
	float exam_score;
	
	//prompt to enter student details
	cout <<"Enter student name:"<<endl;
	cin >> student_name;
	cout <<"Enter age:"<<endl;
	cin >> age;
	cout <<"Enter exam score:"<<endl;
	cin >> exam_score;
	
	if (age>=18){
		//inner statement
		if(exam_score>=50){cout <<" Student admitted."<<endl;
		}
	//inner else condition
	else{cout<< "Student not admitted: Low score."<<endl;
	}
	}
//outer else condition
else{cout<<"Not admitted:Underage."<<endl;
}
	
	

//display student details

cout << "STUDENTS ADMISSION DETAILS"<<endl;
cout << "=========================="<<endl;
cout << "Student name:"<< student_name <<endl;
cout << "Student age:"<< age <<endl;
cout << "Exam score:"<<exam_score <<endl;
cout << "=========================="<<endl;

}