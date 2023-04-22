#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int n=0;
	int a1,a2,a3;
	cin>>n>>a1>>a2>>a3;
	int all,num50=0,num5=0,num1=0;
	all=a1*15+a2*20+a3*30;
	
	if(all>n){
		cout<<"0"<<endl;
	}
	else{
		num50=(n-all)/50;
		num5=((n-all)-(50*num50))/5;
		num1=((n-all)-(50*num50)-(5*num5));
		cout<<num1<<","<<num5<<","<<num50<<endl;
	}	
	return 0;
}
