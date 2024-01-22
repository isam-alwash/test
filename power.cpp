#include<iostream>
using namespace std;
int x, p,  r = 1;
int main(){
	cout<<"insert the number\n";
	cin>>x;
	cout<<"insert it power\n";
	cin>>p;
	for(int i = 1;i<=p;i++){
		r = r * x;
	}
	cout<<r;
	return 0;
}