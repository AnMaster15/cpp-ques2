#include<fstream>
#include<iostream>
#include<fstream>
using namespace std;

int main(){

//ofstream ob;
ifstream ob("a.txt");
char c;

int n=0;
while(!ob.eof()){
	if(c==' ')
	n++;
	ob.get(c);
}
cout<<n;
}

