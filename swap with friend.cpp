#include<iostream>

using namespace std;

class b;
class A{
	
	int x;
	public:
	void putdata(int q){
		x=q;
	}
	void getdata(){
	
		cout<<x<<endl;
	}
	friend void swap(A *x,b *y);	
	

};
class b{
	int y;
	public:
	void putdata(int w){
		y=w;
	}
	void getdata(){
		cout<<y<<endl;
	}
	friend void swap( A *x,b *y);
};

 void swap(A *ob4,b *ob5){
//	cout<<"number before swap"<<ob1<<ob2<<endl;
	int temp;
	temp=ob4->x;
	ob4->x=ob5->y;
	ob5->y=temp;
	
	//cout<<"number after swap"<<ob4<<endl<<ob5<<endl;
}


int main(){
	A ob;
	b ob6;
	ob.putdata(2);
	ob6.putdata(3);
	swap(&ob,&ob6);
	ob.getdata();
	ob6.getdata();
	
	


return 0;
}

