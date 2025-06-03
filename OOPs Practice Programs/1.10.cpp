/*Write a class TV that contains the attributes Brand_Name, Model and Retail_Price. Write a method to dispaly all attributes and 
a method to change the attributes. Also write a constructor to initialize all the attributes.*/

#include<iostream>
using namespace std;
class TV{
	string brandName;
	char Model;
	int retailPrice;
	public:
		TV(string, char, int);
		void display();
		void change(string, char, int);
};
TV::TV(string s, char ch, int i){
	brandName=s;
	Model=ch;
	retailPrice=i;
}
void TV::display(){
	cout<<endl<<"Brand Name is : "<<brandName;
	cout<<endl<<"Model is : "<<Model;
	cout<<endl<<"Retail Price is : "<<retailPrice;
}
void TV::change(string s, char ch, int i){
	brandName=s;
	Model=ch;
	retailPrice=i;
}
int main(){
	TV obj("SONY",'A', 150000);
	obj.display();
	obj.change("SONY2",'B',2000000);
	obj.display();
	return 0;
}