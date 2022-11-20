#include<iostream>
using namespace std;

//insertion function
void insert(int arr[],int &len,int ele,int idx)  //len is taken as reference , to modify its value originally
{
	if(idx<=len)
	{
		for(int i=len;i>idx;i--)
		{
			arr[i]=arr[i-1];
		}
		arr[idx]=ele;
		len++;
	}
}
int main(){
	int size, len;
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
	
	//taking insertion element and index at which to insert
	int idx,ele;
	cout<<"Enter index at which to insert:";
	cin>>idx;
	cout<<"Enter element to insert:";
	cin>>ele;
	insert(arr,len,ele,idx);
	
	//printing output elements
	for(int i=0;i<len;i++){
		cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
	}
	return 0;	
}
