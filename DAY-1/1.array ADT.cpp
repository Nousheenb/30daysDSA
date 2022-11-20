#include<iostream>
using namespace std;
int main(){
	//to allocate array in the stack
	//int arr[10];
	 
	//to allocate array in the heap dynamically and to take array's size as input
	int size,len;
	cout<<"Enter size of an array:";
	cin>>size;
	cout<<"Enter length of array:";
	cin>>len;
	
	//pointer to point array
	int *arr;
	arr=new int[size];
	
	//taking input elements
	cout<<"Enter elements into array"<<endl;
	for(int i=0;i<len;i++){
		cin>>arr[i];
	}
	
	//printing output elements
	for(int i=0;i<len;i++){
		cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
	}
	return 0;	
}
