//mobile phone sales receipt system
#include <iostream>
using namespace std;

int main()
{
	string customer_name;
	string phone_model;
	int quantity;
	float price_per_phone;
	float totalsales;
	
	cout<< "Enter customer name:"<<endl;
	cin>> customer_name;
	cout<<"Enter phone model:"<<endl;
	cin>> phone_model;
	cout<< "Enter quantity purchased:"<<endl;
	cin>> quantity;
	cout<< "Enter price per phone:"<<endl;
	cin>> price_per_phone;
	
	//calculate total sales amount
	totalsales = quantity * price_per_phone;
	
	
	cout<< "SALES RECEIPT"<<endl;
	cout<< "======================================="<<endl;
	cout<< "Customer name:"<<customer_name<<endl;
	cout<< "Phone model:"<<phone_model<<endl;
	cout<< "Quantity purchased:"<<quantity<<endl;
	cout<< "Price per phone:"<<price_per_phone<<endl;
	cout<< "======================================="<<endl;
	cout<< "Total sales:"<<totalsales<<endl;
	
	
}
