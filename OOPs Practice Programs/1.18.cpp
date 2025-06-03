/*Constructors: Write a class that displays a simle message on the screen whenever an object of that class is created.*/
#include<iostream>
#include<string>
using namespace std;
class Hello{
	public:
		Hello();
};
Hello::Hello(){
	cout<<"OOPs\n";
}
int main(){
	Hello a,b,c;
	return 0;
}