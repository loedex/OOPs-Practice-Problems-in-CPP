/*Write a class Array that contains an array of integers to store five values and also contains the following member functions :
fill() to fill the array with values from the user, display() to display the values of array, max() to show the maximum value in the array,
and min() to show the minimum value inthe array. */

#include<iostream>
using namespace std;
class Array{
	private:
		int arr[5];
		public:
			void fill();
			void display();
			int max();
			int min();
			
};
void Array::fill(){
	for(int i=0; i<=4; ++i){
		cout<<"Enter "<<i+1<<" value :\n";
		cin>>arr[i];
	}
}
void Array::display(){
	cout<<"Values in the array are :\n ";
	for(int i=0; i<5; i++)
	cout<<arr[i]<<"\t";
}
int Array::max(){
	int mx=arr[0];
	for(int i=1; i<5; i++){
		if(arr[i]>mx)
		mx=arr[i];
	}
	return mx;
}
int Array::min(){
	int mn=arr[0];
	for(int i=0; i<=4; i++)
	if(arr[i]<mn)
	mn=arr[i];
	return mn;
}

int main(){
	Array obj;
	obj.fill();
	obj.display();
	cout<<"\nMaximum Number is :\n "<<obj.max();
	cout<<"\nMinimum Number is :\n"<<obj.min();
	return 0;
}