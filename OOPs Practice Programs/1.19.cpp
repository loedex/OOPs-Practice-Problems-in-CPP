/*Write a class that contains two integer data members which are initialized to 1000 when an object is created. 
It has a member function avg() that displays the average odf data members.*/
#include<iostream>
using namespace std;
class Test{
	int a,b;
	public:
		Test();
		float avg(){
			return (a+b)/2;
		}
};
Test::Test(){
	a=1000;
	b=1000;
}
int main(){
	Test obj;
	cout<<"Average is :"<<obj.avg();
	return 0;
}
