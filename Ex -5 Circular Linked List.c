#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

typedef struct node *NODE;

// Create a new node with given data
NODE createNodeInCLL(int data) {
    NODE temp = (NODE) malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

// Create CLL with n nodes
NODE createCLL(int n) {
	if (n <= 0)
		return NULL;
	NODE head = NULL, temp, last;
	int i, val;
	for(i = 0; i < n; i++) {
	scanf("%d", &val);
	temp = createNodeInCLL(val);
	if (head == NULL) {
		head = temp;
		temp->next = head;
		last = temp;
	} else {
		last->next = temp;
		temp->next = head;
		last = temp;
		
	}
	}
	return head;
// write your code here...


}

// Traverse CLL
void traverseListInCLL( NODE head     ) {
if (head == NULL){
	printf("CLL is empty\n");
	return;
}
	NODE temp = head;
	do {
		printf("%d -> ", temp->data);
		temp = temp->next;
	}
		while (temp != head);
	printf("\n");
// write your code here...


}

// Insert at given position in CLL
NODE insertAtPositionInCLL(NODE head,int pos,int data         ) {
	NODE temp = createNodeInCLL(data);
	if(pos == 1) {
		if (head == NULL) {
			temp->next = temp;
			return temp;
		} else {
