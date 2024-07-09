#include<iostream>

using namespace std;

class a{
	int A;
	public:
		//a(){
		//	
		//}
		a(int d){
			A=d;
		}
		//void set(int l){
	//		A=l;
	//	}
		void show(){
			cout<<A;
		}

};

class b{
	int B;
	public:
		b(int d){
			B=d;
		}
		operator a(){
		//	a ob2;
			int c=B*4;
			//ob2.set(c);
			//return ob2;
			return a(c);
		}

};

int main(){
	
	b ob(6);
	a ob1=ob;
	ob1.show();
	


return 0;
}

