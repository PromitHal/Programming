//Creating a simple linked list
#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node* ptr;
};
void create_linked_list(struct node** ptr_node){
  struct node* first=NULL;	
  struct node* second=NULL;
  struct node* third=NULL;
  first=(struct node*)(malloc(sizeof(struct node*)));
  second=(struct node*)(malloc(sizeof(struct node*)));
  third=(struct node*)(malloc(sizeof(struct node*)));
  //Creating the list:
  first->data=1;
  first->ptr=second;
  second->data=2;
  second->ptr=third;
  third->data=3;
  third->ptr=NULL;
  *ptr_node=first;  
}
void print_linked_list(struct node* ptr_node){
	//Printing the linked list:
	int i;
	while(ptr_node!=NULL){
	for (i=0;i<3;i++){
		printf("%d\n",ptr_node->data);
	    ptr_node=ptr_node->ptr;
	}	
}
}
int main(){
	struct node *ptr;
	ptr=NULL;
	create_linked_list(&ptr);
	print_linked_list(ptr);
	return 0;
}

