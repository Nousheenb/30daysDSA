#include<iostream>
using namespace std;

//creating a class to create node type of objects

class Node
{
	public:
		int data;
		Node *next;
};

//creating  linked list
void create(int arr[] , int n , Node *first)
{
	Node *last ;
	last = first;
	
	for (int i=1 ; i<n ;i++)
	{
		Node *temp;
		temp = new Node ;
		temp->data = arr[i] ;
		temp->next = NULL;
		last->next = temp ;
		last = temp;
	}
}


//------------------------number of nodes , sum of all elements in linked list ------------------------

void countSum ( Node *p)
{
	int sum=0 , count = 0;
	while (p)
	{
		count++ ;
		sum = sum + p->data ;
		p = p->next ;
	}
	
	cout << "The sum is : "<< sum <<endl ;
	cout << "The number of elements : " << count ;
}


int main()
{
	int arr[5] = {1,2,3,4,5} ;
	Node *first ;
	first = new Node ;
	first->data = arr[0];
	first->next = NULL;
	
	create(arr , 5 , first);
	countSum( first );
	
	return 0;
}
