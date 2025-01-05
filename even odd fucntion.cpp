#include<iostream>
using namespace std;
int type(int w){
	if (w%2==0)
	return 1;
	else 
	return 0;
}
int main(){
	int a,b;
	cout<<"enter your number :"<<endl;
	cin>>a;
	b=type(a);
	if (b==1)
	cout<<"your number is even"<<endl;
	else 
	cout<<"your number is odd"<<endl;
	}