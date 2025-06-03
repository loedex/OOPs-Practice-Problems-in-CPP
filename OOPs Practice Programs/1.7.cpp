/*"Destructors" :- Atype of member function that is automatically executed when an object of that class goes out of scope (destroyed).*/
#include<iostream>
using namespace std;
class Test{
	Test(){
		cout<<"OOP  ";
	}
	~Test(){
		cout<<"OOPs  ";
	}
};
int main(){
	Test t1,t2;
	return 0;
}