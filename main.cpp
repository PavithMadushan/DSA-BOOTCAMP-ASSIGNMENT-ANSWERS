#include <iostream>
using namespace std;

void swap(int *a,int *b){
	
	int temp=*a;
	*a=*b;
	*b=temp;	
	
}

int main(){
	
	int a,b;
	
	cout<<"Enter 1 st number : ";
	cin>>a;

    cout<<"Enter 2 st number : ";
	cin>>b;
	
	swap(&a,&b);
	cout<<"\nAfter Swapping\n\n";
	
	cout<<"1 st number       = "<<a<<endl;
    cout<<"2 st number       = "<<b;		
	
	return 0;
}
