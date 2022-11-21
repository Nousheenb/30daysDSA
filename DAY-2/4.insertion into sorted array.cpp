//inserion into sorted array
#include<iostream>
using namespace std;

void insert(int arr[],int len,int x)
{
	int i=len-1;
	while(arr[i]>x)
	{
		arr[i+1]=arr[i];
		i--;
	}
	arr[i+1]=x;
	
	cout<<"array after  insertion:";
	for(int i=0;i<len;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}


int main()
{
	//taking a sorted array of size 10
	int arr[10]={2,4,6,8,12,14,16};
	int len=7; //no of elements
	
	int x; //element to be inserted
	cout<<"Enter element to be inserted:";
	cin>>x;
	
	insert(arr,len,x);
	return 0;
}
