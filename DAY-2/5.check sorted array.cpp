//check whether array is sorted-ascending order

#include<iostream>
using namespace std;


bool sorted(int arr[],int len)
{
	for(int i=0;i<len-1;i++)
	{
		if(arr[i+1]<arr[i]) //consecutive checking
		{
			return false;
		}
	}
	return true;
}


int main()
{
	int arr[100];
	int len;
	
	cout<<"Enter no. of elements:";
	cin>>len;
	
	//taking elements
	cout<<"Enter elements into array:"<<endl;
	for(int i=0;i<len;i++)
	{
		cin>>arr[i];
	}
	
	
	//call
	if(sorted(arr,len))
	{
		cout<<"Sorted array";
	}
	else
	{
		cout<<"Unsorted array";
	}
	
	return 0;
}
