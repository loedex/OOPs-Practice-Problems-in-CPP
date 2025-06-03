/*"Passing parameters to Constructors.":Write a class Student that has marks and grade as data_members. Aconstructor with two parameters initializesdata members with the given values
and member_function show() displays the values of data members. Create two objects and display the value.*/

#include<iostream>
using namespace std;
class Student{
	int marks;
	char grade;
	public:
		Student(int, char);
		void show();
};
Student::Student(int a, char b){
	marks=a;
	grade=b;
}
void Student::show(){
	cout<<"\nMarks :"<<marks;
	cout<<"\nGrade :"<<grade;
}
int main(){
	Student s1(10,'A'),s2(20,'A');
	cout<<"Record of the first student is :\n";
	s1.show();
	cout<<"\nRecord of the second student is :\n";
	s2.show();
	return 0;
}