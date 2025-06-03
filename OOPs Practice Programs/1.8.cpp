/*"Default Copy Constructor" :- Write a class Book that has the attributes pages,price and title. It has two functions to input the values and 
display the values. Create three objects of the class and input values.*/
#include<iostream>
using namespace std;
class Book{
	int pages,price;
	string title;
	public:
		void input();
		void display();
};
void Book::input(){
	cout<<endl<<"Enter Title :";
	getline(cin, title);
	cout<<endl<<"Enter Pages :";
	cin>>pages;
	cout<<endl<<"Enter Price :";
	cin>>price;
}
void Book::display(){
	cout<<endl<<"Title :"<<title;
	cout<<endl<<"Pages :"<<pages;
	cout<<endl<<"Price :"<<price;
}

int main(){
	Book obj1;
	obj1.input();
	Book obj2(obj1);
	Book obj3=obj1;
	obj1.display();
	obj2.display();
	obj3.display();
}