#include<iostream>
using namespace std;
class ch{
	int a;
	public:
		ch(int b){
			a=b;
		}
		void show(){
			cout<<endl<<a;
		}
};
int main(){
	ch x(12);
	x.show();
	return 0;
}