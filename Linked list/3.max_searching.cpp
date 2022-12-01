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

//-----------------------------------Max element-----------------------------------------------------------

max_search (Node *p , int key)
{
	int max = p->data ;
	bool flag = false ;
	while ( p)
	{
		if ( max < p->data)  //max element
		{
			max = p->data ;
		}
		
		if ( key == p->data)
		{
			cout << "The key found "<<endl;
			flag = true ;
		}
		p = p->next ;
	}
	
	if ( flag == false)
	{
		cout << "The key not found "<<endl;
	}
	cout << "The maximum element is " << max <<endl ;
}


int main()
{
	int arr[5] = {1,2,3,4,5} ;
	Node *first ;
	first = new Node ;
	first->data = arr[0];
	first->next = NULL;
	
	create(arr , 5 , first);
	
	max_search (first , 8) ;
	
	return 0;
}
