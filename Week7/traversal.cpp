//Creation and Traversal of List (Singly Linked List) -

#include<bits/stdc++.h>
using namespace std;

class Node {
	public:
		int data;
		Node *next;
		Node(int x) {
			data = x;
			next = NULL;
		}
};

void printList(Node *n) {
	while(n != NULL) {
		cout<<n->data<<" ";
		n = n->next;
	}
}

int main() {
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;
	
	head = new Node(10);
	second = new Node(12);
	third = new Node(37);
	
	head->next = second;
	second->next = third;
	third->next = NULL;
	
	printList(head);
	
	return 0;
}
