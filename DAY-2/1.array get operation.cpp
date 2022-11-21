#include<iostream>
using namespace std;

//get function 
int get(int arr[],int len,int idx)
{
	if(idx>=0 && idx<len)
	{
		return arr[idx];
	}
}




int main()
{
	//defining an array
	int len=5;
	int arr[5]={1,4,6,23,9};
	
	//index at which element is to be fetched
	int idx;
	cout<<"Enter the index:";
	cin>>idx;
	
	//call
	int element=get(arr,len,idx);
	
	cout<<"The element present at index "<<idx<<" is "<<element;
	
	return 0;
}
