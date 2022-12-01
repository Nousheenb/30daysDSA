//creating and traversing a liked list

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

//traversing through a linked list
void display(Node *p) {
	
	while ( p ) { 
		cout << p->data << " ";
		p = p->next ;    //updating of pointer
	}
}


//traversing through a linked list recursively
void recDisplay(Node *p) {
	
	if ( p ) {
		cout << p->data << " ";
		recDisplay(p->next) ;  //recursive call
	}
}

int main()
{
	int arr[5] = {1,2,3,4,5} ;
	Node *first ;
	first = new Node ;
	first->data = arr[0];
	first->next = NULL;
	
	create(arr , 5 , first);
	display(first);
	cout<<endl;
	recDisplay(first);
	
	return 0;
}
