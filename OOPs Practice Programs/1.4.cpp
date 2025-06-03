/*Write a program that counts the number of objects created of a particular class. The program must be able to display the result 
even if no object is created. */
//A type of member function that can be accessed without any object is called "Static Member Function".

#include<iostream>
using namespace std;
	class Class{
		static int count;
		public:
			Class();
			static void show(){
				cout<<endl<<"You created "<<count<<" objects.";
			}
	};
	Class::Class(){
		count++;
	}
	int Class::count=0;
	int main(){
		Class::show();
		Class x;
		x.show();
		Class y;
		y.show();
		Class a,b,c,d;
		x.show();
		return 0;
	}
