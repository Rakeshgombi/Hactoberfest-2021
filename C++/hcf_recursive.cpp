#include<iostream>
using namespace std;
int gcd(int a,int b){
	return (b==0)?a:gcd(b,a%b); 
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<"hcf "<<gcd(a,b)<<endl;
	//lcm = a*b/hcf;
	cout<<"lcm "<<(a*b)/gcd(a,b)<<endl;
}




