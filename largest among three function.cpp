#include<iostream>
using namespace std;
int largest (int d,int e,int f){
	if (d>e&&d>f)
	return d;
	else if (e>f&&e>d)
	return e;
	else 
	return f;
}
int main(){
	int a,b,c,result;
	cout<<"enter your first value "<<endl;
	cin>>a;
	cout<<"enter your second value "<<endl;
	cin>>b;
	cout<<"enter your third value "<<endl;
	cin>>c;
	result=largest(a,b,c);
	cout<<"The largest among them is"<<result<<endl;
	
}