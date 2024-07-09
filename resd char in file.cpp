#include<fstream>
#include<iostream>
using namespace std;

int main(){
char c;
fstream ob("d.txt");
ob<<"this is c++";

ob.seekg(-2,ios::cur);
ob.get(c);
//ob.get(c);

cout<<c;


ob.close();
}
