//6.	Write a program in C++ to overload input operator (>>) and output operator (<<).


#include<iostream>

using namespace std;

class number{
	int x;
	public:
		void operator >>(number &ob){
		cin>>ob.x;
		}
		void operator <<(number ob){
			cout<<ob.x;
		}

};

int main(){
	number n;


return 0;
}

