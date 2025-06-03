/*Write a class Result that contains rollNo,name and marks of three subjects. The marks are stored in an array of integers. The class also contains 
the followinf member functions:
input() to input the values in data members, show() to display the values in data members, total() to return the total marks of a student, and 
avg() to return the average marks of a student.
The program should crate an object of the class and call the member functions.*/
#include<iostream>
#include<string>
using namespace std;
class Result {
	private:
		int rollNo,marks[3];
		char name[50];
		public:
			void input(){
				cout<<endl<<"Enter Name :";
			    //getline( cin, name);
			    gets(name);
				cout<<endl<<"Enter Roll_No :";
				cin>>rollNo;
				for(int i=0; i<3; i++){
					cout<<endl<<"Enter marks of "<<i+1<<" subject :";
					cin>>marks[i];
				}	
			}
			void show(){
				cout<<endl<<"RollNO is :"<<rollNo;
				cout<<endl<<"Name is :"<<name;
				for(int i=0; i<=2; i++){
					cout<<endl<<"Marks of "<<i+1<<"subject :"<<marks[i];
				}
			}
			int total(){
				int sum=0;
				for(int i=0; i<3; i++)
					sum+=marks[i];
				return sum;
			}
			float avg(){
				int sum=0; 
				for(int i=0; i<3; i++)
					sum+=marks[i];
					return sum/3.0;
			
			}
};
int main(){
Result obj;
obj.input();
obj.show();
cout<<endl<<"Total is :"<<obj.total();
cout<<endl<<"Average is :"<<obj.avg();
obj.input();
obj.show();
return 0;	
}