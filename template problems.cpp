#include<iostream>

using namespace std;

template<class T,int t>

void show(T x,T y){
	cout<<x<<t<<y;
}



int main(){
	
	show <float,10>(5.8,6);


return 0;
}

