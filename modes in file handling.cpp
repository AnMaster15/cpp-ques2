#include<fstream>
#include<iostream>
using namespace std;

int main(){

fstream ob("g.txt",ios::out|ios::ate);
ob<<"vhjvbjhv";

//cout<<ob;
ob.close();
}
