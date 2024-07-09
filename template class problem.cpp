#include<iostream>

using namespace std;

template <class t,class r>
class a{
	t x;
	public:
		a(){
			cout<<"enter the value"<<endl;
			cin>>x;
		}
		void show();
	

};
template <class m,class k> void a<m,k> :: show(){
	cout<<"the value of x"<<x<<endl;
}

int main(){
	
	a <int,float> ob;
	ob.show();
	
	a<string,char> ob1;
	ob1.show();


return 0;
}
