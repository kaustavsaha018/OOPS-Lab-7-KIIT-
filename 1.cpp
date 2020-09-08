#include<iostream>
using namespace std;

class complex{
	float real;
	float img;
	static int count;
	public:
		
		complex(){
			real=0;
			img=0;
			count++;
		}
		complex(float r, float i){
			real=r;
			img=i;
			count++;
		}
		complex(const complex &c2){
			real=c2.real;
			img=c2.img;
			count++;
		}
		
		void show(){
			cout<<"The complex number is: "<<endl;
			cout<<real<<" + "<<img<<"i"<<endl;
		}
		
		~complex(){
		 	cout<<"Destructor being invoked of copy"<<endl;
		 	cout<<"Object "<<count<<" is destroyed"<<endl;
			count--;
		 }
};

int complex::count=0;

int main(){
	complex c1;
	c1.show(); // default constructor
	complex c2(1,2);
	c2.show(); // parameterized constructor
	complex c3=c2;
	c3.show();  //copy constructor
	
	return 0;
}
