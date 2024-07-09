#include<iostream>

using namespace std;

class rectangle{
	int length;
	int breadth;
	public:
		rectangle();
		rectancle(){
//			cout<<"enter the valus of len and bread"<<endl;
		//	length=0;breadth=0;
			//cout<<"the area of the rectangle 1 is: "<<endl<<length*breadth<<endl;
		}
		void setdata(){
			//cout<<"enter the valus of len and bread"<<endl;
			length=0;breadth=0;
			//cin>>length>>breadth;
		    
			
		}
		rectangle(int x,int y){
			length =x;
			breadth=y;
			
			
		}
		rectangle(int z){
			length=z;
			breadth=z;
		}
		void getdata(){
			cout<<"the area of the rectangle is :- "<<endl<<length*breadth<<endl;
		}
		
};

int main(){
//	rectangle r1,r2,r3;
	rectangle  r1;
	
	r1.setdata();
	r1.getdata();
	
	rectangle r2(2,3);
	r2.getdata();
	
	rectangle r3(4);
	r3.getdata();
}

