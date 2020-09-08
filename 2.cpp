#include<iostream>
using namespace std;

class time{
	int hour,min;
	public:
		
		time(){
			hour=0;
			min=0;
		}
		time(int h){
			hour=h;
		}
		time(int h, int m){
			hour=h;
			min=m;
		}
		
		void show(){
			cout<<"The Time is: "<<endl;
			cout<<hour<<" hr : "<<min<<" min "<<endl<<endl;
		}
		
		~time(){
			cout<<"\nDestructor Invoked";
		 }
};
int main(){
	time t1;
	t1.show(); 
	time t2(1);
	t2.show(); 
	time t3(4,7);
	t3.show(); 
	
	return 0; 
}
