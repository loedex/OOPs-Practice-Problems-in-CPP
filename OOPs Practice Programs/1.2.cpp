/*Write a class Car that contains the following attributes.
Car Name, Direction of Car, Position of Car(from imaginary zero point). And the class has the following member functions:
A constructor to initialize the attributes, Turn function to change the direction of the car to one step right side, Overload the Turn function 
to change the direction to any side directly and it should accept the direction as parameter, And a move function to change the position of car 
from zero point and it should accept distance as parameter.*/

#include<iostream>
using namespace std;
class Car{
	string carName;
	char direction;
	int position;
	public:
		Car(string,char,int);
		void Turn();
		void Turn(char);
		void Move(int);
		void display();
};
Car::Car(string name, char dir, int pos){
	carName=name;
	direction=dir;
	position=pos;
}
void Car::Turn(){
	if(direction=='E')
	direction='S';
	else if(direction=='S')
	direction='W';
	else if(direction=='W')
	direction='N';
	else if(direction=='N')
	direction='E';
}
void Car::Turn(char dir){
	direction=dir;
}
void Car::Move(int pos){
	position+=pos;
}
void Car::display(){
	cout<<endl<<"Car Name is :"<<carName;
	cout<<endl<<"Position of the car is :"<<position;
	cout<<endl<<"Direction of the Car is :"<<direction;
}
int main(){
	Car obj1("Honda",'S',0);
	obj1.display();
	Car obj2("Altus",'W',10);
	obj2.display();
	obj1.Move(70);
	obj1.Turn('E');
	obj1.display();
	obj2.display();
	return 0;
}