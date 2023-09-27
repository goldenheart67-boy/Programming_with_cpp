//c++ program to perform arithmatic operation on two integer enter by the user 
//Perform addition if the user enter +
//Perform substraction if the user enter -
#include<iostream>
using namespace std;
int main(){
	int a, b, result;
	char c;
	cout<<"Enter the first Integer: ";
	cin>>a;
	cout<<"Enter the Second Integer: ";
	cin>>b;
	cout<<"Enter the operation(+) or (-): ";
	cin>>c;
	if (c=='+')
	{
		result = a+b;
		cout<<"The addition of "<<a<<" and "<<b<<" is: "<<result;
	}
	else if(c=='-')
	{
		result = a-b;
		cout<<"The substraction of "<<a<<" and "<<b<<" is: "<<result;
	}
	else
	{
		cout<<"Wrong Operation";
		
	}
	return 0;
}
