/* write a class Travel that has the attributes of km and hr. A constructor with no parameter initializes both data members to 0. 
A member_function get() inputs the values and function show() displays the values. It has a member function add() that takes an object 
of type Travel, adds the km and hr of calling object and the parameter and returns an object with added values. */

#include<iostream>
using namespace std;
class Travel{
	float km,hr;
	public:
		Travel();
		void get();
		void show();
		Travel add(Travel);
};
Travel::Travel(){
	km=hr=0;}
void Travel::get(){
	cout<<endl<<"Enter Kilometers traveled :";
	cin>>km;
	cout<<endl<<"Enter hours traveled :";
	cin>>hr;}
void Travel::show(){
	cout<<endl<<"You traveled "<<km<<" kilometers. in "<<hr<<" hours.";
}	
Travel Travel::add(Travel obj){
	Travel t;
	t.km=km+obj.km;
	t.hr=hr+obj.hr;
	return t;
}
 int main(){
      Travel obj1,obj2,rOBJ;
      obj1.get();
      obj1.show();
      obj2.get();
      obj2.show();
      rOBJ=obj1.add(obj2);
      cout<<endl<<"Total travelling is as follows :\n";
      rOBJ.show();
      return 0;
}	