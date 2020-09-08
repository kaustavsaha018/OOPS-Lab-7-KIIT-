#include<iostream>
using namespace std;

class Array{
	int *ptr;
	int size;
	
	public:
		Array(int s){
			size=s;
			ptr= new int[size];
		}
		void input(){
			int i;
			cout<<"\nEnter the Array elements: "<<endl;
			for(i=0;i<size;i++){
				cin>>*(ptr+i);
			}
		}
		void display(){
			int i;
			cout<<"\nThe Array is: "<<endl;
			for(i=0;i<size;i++){
				cout<<" "<<*(ptr+i);
			}
		}
		~Array(){
			delete ptr;
			cout<<endl<<"\nDestructor Invoked"<<endl;
		}	
};

int main(){
	int n;
	cout<<"Enter no.of Array elements: ";
	cin>>n;
	Array a1(n);
	a1.input();
	a1.display();
	return 0;
}
