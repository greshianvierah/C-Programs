// sales assistant system
#include <iostream>
using namespace std;

int main()
{
	double number1, number2, result;
	char operation;
	
	//prompt to enter numbers and operation
	
	cout <<"Enter first number:"<< endl;
	cin >> number1;
	
	cout <<"Enter an operater (+, -, *, /):";
	cin >>operation;
	
	cout <<"Enter second number:"<< endl;
	cin >>number2;
	
	// perform calculation using switch statement
	
	switch (operation){
	case '+':
		result = number1 + number2;
		cout << "Result:"<< result<<endl;
		break;
	
	case '-':
		result = number1 - number2;
		cout << "Result:"<< result<<endl;
		break;
	
	case '*':
		result = number1 * number2;
		cout << "Result:"<< result<<endl;
		break;
	
	case '/':
		if (number2 !=0){
		result = number1 / number2;
		cout << "Result:"<< result<<endl;
		}
		else{ cout<< "Error: Division by zero is not allowed."<<endl;}
			break;
		
		default:
			cout << "Invalid operator! Please use +,-,*,/."<<endl;
	}
	
	//display the results of the operation
	cout<<"SALES RESULTS"<<endl;
	cout<<"========================"<<endl;
	cout <<"First number:"<<number1<<endl;
	cout <<"Operation:"<<operation<<endl;
	cout <<"Second number:"<<number2<<endl;
	cout<<"Result:"<<result<<endl;		
	cout <<"======================="<<endl;
}