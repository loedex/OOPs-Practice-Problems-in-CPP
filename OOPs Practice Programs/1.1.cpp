/*Write a class Run that contains the following data members: name_of_the_runner, and distance_covered_by_a_runner. 
And the class has the following member functions : Get_functinton() input runner name and distance And show_function() to display 
runner name and distance. The program should display the name of runner who has covered the longest distance at any point of time.*/

#include<iostream>
#include<string>
using namespace std;
class Run{
	char runnerName[30];
	//char maxName[30];
	int coveredDistance;
	/*static*/ int maxRunner;
	public:
	void get();
	void show();
	void showinner(Run ob1, Run ob2){
		if(ob1.coveredDistance>ob2.coveredDistance)
      cout<<endl<<"Runner who covered the largest distance is :"<<ob1.runnerName;
	  else
	  		cout<<endl<<"Runner who covered the largest distance is :"<<ob2.runnerName;
	}
};
//int Run::maxRunner=0;
void Run::get(){
	cout<<endl<<"Enter Runner Name :";
	cin>>runnerName;
	cout<<endl<<"Enter distance covered by runner :";
	cin>>coveredDistance;
	cout<<coveredDistance;
	//if(coveredDistance>=maxRunner){
	//	maxName[30]=runnerName[30];
	//}
	
}
void Run::show(){
	cout<<endl<<"Runner Name is :"<<runnerName;
	cout<<endl<<"Distance covered by the runner is :"<<coveredDistance;
}
int main(){
	Run obj1;
	obj1.get();
	obj1.show();
	Run obj2;
	obj2.get();
	obj2.show();
	Run obj3;
	obj3.showinner(obj1,obj2);
	return 0;
}