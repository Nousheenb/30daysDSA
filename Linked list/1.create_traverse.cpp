//creating a linked list and traversing through it 

     
#include<iostream>
using namespace std;

//creating a class to create node type of objects

class Node
{
	public:
		int data;
		Node *next;
};

class LinkedList
{
	private:
		Node *first;
	public:
		LinkedList(){
			first = NULL;
		}
		
		LinkedList(int arr[] , int n);   //constructor
		void display();
		
};


//creating a linked list
LinkedList :: LinkedList(int arr[] , int n)
{
	
	first = new Node ;
	first->data = arr[0];
	first->next = NULL;
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

void LinkedList :: display() {
	
	Node *p;
	p = first ;
	while ( p ) { 
		cout << p->data << " ";
		p = p->next ;    //updating of pointer
	}
}


int main()
{
	int arr[10] = {99,89,79,48,5} ;
	
	LinkedList l(arr , 5);
	
	l.display();
	 
	return 0;
}
