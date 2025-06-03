/*Write a class Marks with three data members to store three marks. 
Write three member functions in() to input marks, sum() to calculate and return the sum, avg() to calculate and return the average marks.*/
#include<iostream>
using namespace std;
class Marks{
	private:
		int a,b,c;
		public:
			void input(){
				cout<<"Enter three marks :\n";
				cin>>a>>b>>c;
			}
			int sum(){
				return a+b+c;
	    	}  
			float avg(){
				return (a+b+c)/3.0;
	    	}
};
int main(){
	Marks m;
	int a;
	float b;
	m.input();
	cout<<"Sum is :"<<m.sum();
	cout<<endl<<"Average is :"<<m.avg();
/*	cout<<endl<<"Sum is :"<<a;
	cout<<endl<<"Average is :"<<b;*/
	return 0;
}