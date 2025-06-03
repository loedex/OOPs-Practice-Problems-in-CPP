/*Write a class Circle with one data member radius. Write three member functions get_radius() to set
radius value with parameter value, area() to display radius and circum() to calculate and display the circumference of circle.*/
#include<iostream>
using namespace std;
class Circle{
	private:
		float radius;
		public:
			void get_radius(float a){
			 radius=a;	
			}
			void area(){
				cout<<endl<<"Area of Circle is :"<<3.14*radius*radius;
			}
			void circum(){
				cout<<endl<<"Circumference of circle is :"<<2*3.14*radius;
			}
};
int main(){
	Circle c;
	float r;
	cout<<"Enter Radius :\n";
	cin>>r;
	c.get_radius(r);
	c.area();
	c.circum();
	return 0;
}