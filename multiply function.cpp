#include<iostream>
using namespace std;
int multiplied(int a,int b){
	return a*b;
}

int main(){
	int c,d,multiply;
	cout<<"enter first number :"<<endl;
	cin>>c;
	cout<<"enter second number :"<<endl;
	cin>>d;
	multiply=multiplied(c,d);
	cout<<"Your answer is :"<<multiply<<endl;
}