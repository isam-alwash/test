#include<iostream>
using namespace std;
int x, r = 1;
int main(){
	cin>>x;
	for(int i = 1;i<=x;++i){
	r*=i;
}
	cout<<r;
	return 0;
}