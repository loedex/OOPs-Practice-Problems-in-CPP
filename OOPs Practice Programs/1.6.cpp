/*"Objects as Function Parameters" :- Write a class Travel that has the attributes 'km' and 'hr'.A constructor with no parameter 
initializes both parameters to zero. A member_function get() and show() to input and display the values respectively. It has a member_funtion add()
that takes an object of type Travel to add the 'km' and 'hr' of calling object and the parameter.*/
#include<iostream>
using namespace std;
class Travel{
  float km,hr;
  public:
  Travel();	
  void get();
  void show();
  void add(Travel);
};
Travel::Travel(){
	km=hr=0;
}
void Travel::get(){
	cout<<endl<<"Enter Kilometers :";
	cin>>km;
	cout<<endl<<"Enter Hours :";
	cin>>hr;
}
void Travel::show(){
	cout<<endl<<"Kilometers :"<<km;
	cout<<endl<<"Hours :"<<hr;
}
void Travel::add(Travel p){
	Travel t;
	t.km=km+p.km;
	t.hr=hr+p.hr;
	cout<<endl<<"Addition of km of both objects is :"<<t.km;
	cout<<endl<<"Addition of hr of both objects is :"<<t.hr;
}
int main(){
	Travel obj1,obj2;
	obj1.get();
	obj1.show();
	obj2.get();
	obj2.show();
	obj1.add(obj2);
	return 0;
}