/*Write a program that declares a class with one integer data member and 
two member functions in() and out() to input and output data in the data member.*/
#include<iostream>
using namespace std;
class Check{
	private:
		int a;
		public:
			void in(){
				cout<<"Enter Number :\n";
				cin>>a;
			}
			void out(){
				cout<<"You entered : "<<a;
			}
};
int main(){
	Check obj;
	obj.in();
	obj.out();
	return 0;
}