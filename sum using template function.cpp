#include<iostream>

using namespace std;

template<class T>

void show(int d){
	cout<<"hello";
}
T show(T a,T b){
	return a+b;
}

int main(){
	int t;float f;
	
	t=show(3,4);
	f=show(6.5,1.3);
	
	cout<<t<<endl<<f;
}



