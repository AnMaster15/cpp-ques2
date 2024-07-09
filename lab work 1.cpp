#include<iostream>

using namespace std;
/*
class a{
	
	private:
		
	   char name[100];
	   int account number;
	   char account type[100];
	   float balance amount;
	   
	  public:
	    void  
};

int main(){


return 0;
}
*/
struct A{
	int  a,b;
	public:
		void input(){
		cout<<"real number is :";
		cin>>a;
		cout<<"imaginary number is: ";
		cin>>b;
		}
		/*
		void sum(A ob3){
			a=a+ob3.a;
			b=b+ob3.b;
		}
		void output(){
			cout<<"\n"<<a<<" "<<b;
			
		}
		//void sum
		
};

  int main(){
  	A ob1,ob2,ob3;ob1.input();/*ob1.output();ob2.input();/*ob2.output(),ob1.sum(ob2),ob1.output();*/
  	
  	void output(){
  		//cout<<"sum of first two numbers is:"<<a<<"\n"<<"sum of second two numbers is:"<<b;
  		cout<<"sum of real no and imaginary no is : "<<a<<"+ i"<<b;
	  }
	  A sum(A ob4,A ob5){
	  	A ob6;
	  	ob6.a=ob4.a+ob5.a;
	  	ob6.b=ob4.b+ob5.b;
	  	return ob6;
	  }

  };
  
  int main(){
  	A ob1,ob2,ob3;ob1.input();ob2.input();ob3=ob3.sum(ob1,ob2);ob3.output();
  }
