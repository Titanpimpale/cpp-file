#include <iostream>

using namespace std;

int main(){
	int num, d,sum=0;
	cout<<"Enter a number: ";
	cin>>num;
	int t;
	t=num;
	while(num>0){
		d = num % 10;
		sum = sum + (d*d*d);
		num = num/10;
	}
	if(t == sum){
		cout<<"It is an armstrong number";
	}	
	else{
		cout<<"It is not an armstrong number"<<endl;
	}
	return 0;
}
