/*Write a class Book with three data members BookID,Pages and Price. And contains the following member functions:
get() to input values, show() to display values, set() to set the values of data members using parameters and get_price() to
return the value of Price.
The Program should create two objects of the class and input values for these objects. The program displays the details of the most costly book. */
#include<iostream>
using namespace std;
class Book{
	private:
		int bookID, pages,price;
		public:
			void get(){
				cout<<"Enter Book ID :\n";
				cin>>bookID;
				cout<<endl<<"Enter No. of Pages :\n";
				cin>>pages;
				cout<<endl<<"Enter Price : \n";
				cin>>price;
			}
			void show(){
				cout<<endl<<"Book ID is :"<<bookID;
				cout<<endl<<"Pages :"<<pages;
				cout<<endl<<"Price :"<<price;
			}
			void set(int a, int b, int c){
				bookID=a;
				pages=b;
				price=c;
			}
			int get_price(){
				return price;
			}
};
int main(){
	Book b1,b2;
	int a,b,c;
	b1.get();
	cout<<endl<<"Enter BOOK iD for other book :";
	cin>>a;
	cout<<endl<<"Enter Pages :";
	cin>>b;
	cout<<endl<<"Enter Price :";
	cin>>c;
	b2.set(a,b,c);
	cout<<endl<<"Detail of the most costly book is as follows :\n";
	if(b1.get_price()>b2.get_price())
	b1.show();
	else
	b2.show();
	return 0;
}