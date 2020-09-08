#include<iostream>
using namespace std;

class demo{
	static int count;
	public:
		
		demo(){
			count++;
			cout<<"Object "<<count<<" is constructed"<<endl;
		}
		demo(int n1, int n2){
			count++;
			cout<<"\nObject "<<count<<" is constructed"<<endl;
		}
		demo(const demo &b){
			count++;
			cout<<"\nObject "<<count<<" is constructed"<<endl;
		}
		
		~demo(){
		 	cout<<"\nObject "<<count<<" is destroyed"<<endl;
			count--;
		 }
};

int demo::count=0;

int main(){
	
	demo a;
	demo b(1,2);
	demo c=b;
	
	return 0;
}
