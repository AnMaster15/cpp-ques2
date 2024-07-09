#include<fstream>
#include<iostream>
using namespace std;

int main(){

fstream ob("a.txt");
char c1,c2;

cout<<"enter the character to be replaced "<<endl;
cin>>c1;
cout<<"enter the character to be inserted"<<endl;
cin>>c2;

char c;
ob.get(c);

while(!ob.eof()){
	if(c==c1){
		int r = ob.tellg();
		cout<<r<<endl;
		ob.seekg(-1,ios::cur);
		ob.put(c2);//ob<<c2;
	}
	ob.get(c);
}
ob.close();
}
