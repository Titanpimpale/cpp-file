#include <iostream>
using namespace std;

int main(){
	char op;
	int a, b;
	int sum, sub, multi, div;
	cout<<"Enter two numbers a and b: ";
	cin>>a>>b;
	cout<<"Enter the operator: ";
	cin>>op;
	switch(op){
		case '+':
			sum = a + b;
			cout<<"Sum is "<<sum;
			break;
		case '-':
			sub = a - b;
			cout<<"Subtraction is "<<sub;
			break;
		case '*':
			multi = a * b;
			cout<<"Multiplication is "<<multi;
			break;
		case '/':
			div = a / b;
			cout<<"Division is "<<div;
		default:
			cout<<"Enter the correct operator!!!";
	}
	return 0;
}
