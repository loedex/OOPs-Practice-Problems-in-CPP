/*Write a class "Over" with num and ch data_members. A constructor with no parameter initializes num to 0 and ch to 'x'. A constructor with two
parameters initializes data_members with the given values and member function show() displays the values of data_members.*/
#include<iostream>
using namespace std;
class Over{
	int num;
	char ch;
	public:
		Over();
		Over(int, char);
		void show();
};
Over::Over(){
	num=0;
	ch='x';
}
Over::Over(int a, char b){
	num=a;
	ch=b;
}
void Over::show(){
	cout<<endl<<"Number :"<<num;
	cout<<endl<<"Character is :"<<ch;
}
int main(){
	Over obj1,obj2(15,'A');
	obj1.show();
	obj2.show();
	return 0;
}