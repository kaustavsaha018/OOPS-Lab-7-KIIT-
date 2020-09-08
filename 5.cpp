#include<iostream>
using namespace std;

class matrix{
	int *ptr;
	int row;
	int col;
	
	public:
		matrix(int r, int c){
			row=r;
			col=c;
			ptr = new int [row+col];
		}
		void input(){
			int i,j;
			cout<<"Enter the matrix elements: "<<endl;
			for(i=0;i<row;i++){
				for(j=0;j<col;j++){
					cin>>*(ptr+(j*col)+i);
				}
				
			}
		}
		void display(){
			int i,j;
			cout<<"\nThe Matrix is: "<<endl;
			for(i=0;i<row;i++){
				for(j=0;j<col;j++){
					cout<<" "<<*(ptr+(j*col)+i);
				}
				cout<<endl;	
			}
		}
		~matrix(){
			delete ptr;
			cout<<endl<<"Destructor Invoked"<<endl;
		}	
};

int main(){
	int m,n;
	cout<<"Enter the no. of rows & columns: "<<endl;
	cin>>m>>n;
	matrix m1(m,n);
	m1.input();
	m1.display();
	return 0;
}
