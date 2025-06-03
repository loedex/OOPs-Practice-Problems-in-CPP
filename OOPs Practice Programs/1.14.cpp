//understanding the concept of objects of a single class 
#include<iostream>
using namespace std;
class A{
	public:
		int x,y;
		
};
int main(){
	A obj1,obj2;
	obj1.x=10;
	obj1.y=77;
	obj2=obj1;
	cout<<endl<<"Value of x and y of obj1 :"<<obj1.x<<"   "<<obj2.y;
	cout<<endl<<"Value of x and y of obj2 :"<<obj2.x<<"   "<<obj2.y;
	return 0;
}