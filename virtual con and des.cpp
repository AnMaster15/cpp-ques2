#include<fstream>
#include<iostream>
using namespace std;
int main()

{

int i,x=0;

ifstream ob1("LOL.txt");
ofstream ob2("1.txt");
 char c1[100];

ob1.seekg (5L, ios::beg); 
ob1.getline(c1,100);


//cout<<c1;
ob2<<c1;
char c2[100];
ifstream ob3("1.txt");
 ob3.seekg (0L, ios::beg);
 
ob3.getline(c2,100);

cout<<c2;
while (!ob3.eof())
{

x++;
//cout<<"number of letters in second text file: "<<x<<endl; return 0;
 }
}



