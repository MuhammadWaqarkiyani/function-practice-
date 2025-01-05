#include<iostream>
using namespace std;
int substract(int a,int b){
	return a-b;
}
int main(){
	int c,d,minus;
	cout<<"enter your first number :"<<endl;
	cin>>c;
	cout<<"enter your second number :"<<endl;
	cin>>d;
	minus=substract(c,d);
	cout<<"the answer is "<<minus<<endl;
}