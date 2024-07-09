//inheritence

//like father and son heritence

#include<iostream>

using namespace std;
/*
class base{
	public:
		void hello(){
			
		
		cout<<"hello"<<endl;
	
}
	};

class deprived:public base
{
	public:
		void hi(){
			cout<<"hi"<<endl;
		}

};

int main(){
	deprived ob;
	ob.hello();
	ob.hi();
}

class base{
	int a;
	protected:
		int b;
	public:
		int c;
		void input(){
			a=20;
			b=30;
		}
};

class derived:private base{
	//protected:
	//	int a;
		public:
			void output(){
				input();
				cout<<a<<endl;
				
			}
};
int main(){
	derived ob;
	ob.input();
	ob.output();
}
*/

//wop in c++ to define a class length having variable l in protected scope class square is inheriting class length in public mode 
//class square is having two member functions input and output
// input function is to input the value of l and output fun is to show the value of square of l
// tere is another class q which is inheriting square class in public mode 
//define a member function display to output the value of cune of l
#include<iostream>
using namespace std;

class length{
	protected:
	int l;
	
};

class square: public length{
	public:
		void input(){
			cout<<"enter the value of l"<<endl;
			cin>>l;
		}
		void output(){
			//input();
			cout<<l*l<<endl;
		}
};
class cube:public square{
	public:
		void display(){
			cout<<l*l*l;
		}
};
int main()
{

square b1;
b1.input();
b1.output();
cube s2;
s2.input();
s2.display();
}
