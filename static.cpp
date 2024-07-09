#include<iostream>

using namespace std;
int x;
int y;

class complex{
	static int x;
	static int y;
	
	public:
		int setdata(int q,int w){
			x=q;
			y=w;
			
			
			
		}
		void getdata(){
			cout<<x<<" + "<<"i "<<y<<endl;
		}

}c1;

int complex::x;
int complex ::y;

int main(){
	c1.setdata(3,5);
	c1.getdata();
	
	


return 0;
}

