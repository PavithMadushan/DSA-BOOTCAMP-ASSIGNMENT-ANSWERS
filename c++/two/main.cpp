#include <iostream>
using namespace std;


int largest(int arr[], int n)
{
    int i;
    int max = arr[0];
 
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
 
    return max;
}


int main(){
	
	int max,arr[3];
	cout<<"Enter 3 numbers \n\n";
	
	for(int i=0;i<3;i++){
		cout<<"Enter "<<i+1<<"th number : ";
		cin>>arr[i];
		
		
	}
	
	cout<<"\n";

    
	
	cout<<"The largest number is : "<<largest(arr,3);	
	
	
	return 0;
}
