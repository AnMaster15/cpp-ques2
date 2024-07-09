#include<iostream>
#include<string.h>

using namespace std;

class student{
	protected:
		int rollno;
		char name[20];
		
	public:
		void getdetails(){
			cout<<"Enter student roll no : "<<endl;
			cin>>rollno;
			fflush(stdin);
			
			cout<<"Enter the name of the student"<<endl;
			gets(name);
		}
		void displaydetails(){
			cout<<rollno<<endl;
			fflush(stdin);
			cout<<name<<endl;
			
		}

};

class marks:public student{
	protected:
		int subject1;
		int subject2;
		
		public:
			void getmarks(){
				cout<<"Enter the first subject :-"<<endl;
				cin>>subject1;
				
				cout<<"enter the second subject :-"<<endl;
				cin>>subject2;
			}
			void displaymarks(){
				//puts(subject1);
				//puts(subject2);
				cout<<subject1<<endl;
				cout<<subject2<<endl;
			}
};

class result:public marks{
	int totalmarks;
	public:
		void calculateresult(){
			
			cout<<"total marks :-"<<endl;
			totalmarks=subject1+subject2;
			
			
		}
		void displayresults(){
			cout<<totalmarks<<endl;
			
			if(totalmarks>62&&totalmarks<=200){
				cout<<"PASSED"<<endl;
			}
			if(totalmarks<62&&totalmarks>=0){
				cout<<"FAILED"<<endl;
			}
			/*else{
				cout<<"NOT DEFINED"<<endl;
			}*/
		}
};

int main(){
	result s1;
	s1.getdetails();
	s1.displaydetails();
	
	//marks m1;
	s1.getmarks();
	s1.displaymarks();
	
	s1.calculateresult();
	s1.displayresults();
	


return 0;
}

