//reverse an array : method-1:using auxillary array

#include<iostream>
using namespace std;

//function
void reverse(int arr[],int len)
{
	int arr1[len];		//auxillary array
	
	int i,j;
	for(i=len-1,j=0;i>=0,j<len;i--,j++)
	{
		arr1[j]=arr[i];
	}
	for(i=0;i<len;i++)
	{
		arr[i]=arr1[i];
	}
	
}


int main()
{
	//declaring of array
	int *arr;
	int len;
	cout<<"Enter length of array:";
	cin>>len;
	arr=new int[len];
	
	
	//taking elements into array
	cout<<"Enter elements into array"<<endl;
	for(int i=0;i<len;i++)
	{
		cin>>arr[i];
	}
	
	//call
	reverse(arr,len);
	
	//printing after reversing
	cout<<"After reversing array"<<endl;
	for(int i=0;i<len;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
