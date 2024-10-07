#include<stdio.h>
#include<stdlib.h>

struct Node{
	int info;
	struct Node* link;
};
typedef struct Node* NODE;

//Function declarations
NODE Insert_Front(int,NODE);
NODE Insert_End(int,NODE);
NODE Delete_Front(NODE);
NODE Delete_End(NODE);
void display(NODE);

//Function to insert the element at front of linked list
NODE Insert_Front(int e, NODE First){
	NODE New = (NODE)malloc(sizeof(struct Node));
	New->info=e;
	New->link=NULL;
	//chech if list empty and newly created is first node
	if(First==NULL){
		return New;
	}
	New->link=First;
	printf("Insert successfully\n");
	return New;
}

//Function to insert the element at End of linked list
NODE Insert_End(int e, NODE First){
	NODE temp=First,New;
	New = (NODE)malloc(sizeof(struct Node));
	New->info=e;
	New->link=NULL;
	//chech if list empty and newly created is first node
	if(First==NULL){
		return New;
	}
	while(temp->link!=NULL){
		temp=temp->link;
	}
	temp->link=New;
	printf("Insert successfully\n");
	return First;
}


// Function to delete from the front
NODE Delete_Front(NODE First) {
    // If the list is empty
    if (First == NULL) {
        printf("List is empty\n");
        return NULL;
    }

    
    // If the list has one item
    if (First->link == NULL) {
        printf("%d deleted element\n", First->info);
        free(First);
        return NULL;  // The list will now be empty
    }

    NODE temp = First;
    
    // More than one item in the list
    First = First->link; // Move head to the next node
    printf("%d deleted element\n", temp->info);
    free(temp);  // Free the old head

    return First; // Return the new head of the list
}

// Function to delete from the front rear
NODE Delete_End(NODE First){
	// If the list is empty
    if (First == NULL) {
        printf("List is empty\n");
        return NULL;
    }

    
    // If the list has one item
    if (First->link == NULL) {
        printf("%d deleted element\n", First->info);
        free(First);
        return NULL; 
    }

    NODE Next=First,prev=NULL;
    
	while(Next->link!=NULL){
		prev=Next;
		Next=Next->link;
	}
	prev->link=NULL;
	printf("%d deleted element\n", Next->info);
	free(Next);
	
	return First;
}


void display(NODE First) {
    NODE temp = First;
    // If the list is empty
    if (First == NULL) {
        printf("List is empty\n");
        return;
    }

   printf("\n");
    printf("Linked List: \n");
    while (temp != NULL) {
        printf("%d\t", temp->info);
        temp = temp->link;
    }
    printf("\n");
   
}



// Main function
int main() {
    NODE First = NULL; 
    int choice, ele;

    while (1) {
        printf("1. Insert at Front\n2. Insert at End\n3. Delete from Front\n4. Delete from End\n5. Display List\n6. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert at front: ");
                scanf("%d", &ele);
                First = Insert_Front(ele, First);
                break;
            case 2:
                printf("Enter value to insert at end: ");
                scanf("%d", &ele);
                First = Insert_End(ele, First);
                break;
            case 3:
                First = Delete_Front(First);
                break;
            case 4:
                First = Delete_End(First);
                break;
            case 5:
                display(First);
                break;
            case 6:
        
                exit(0);
            default:
                printf("Invalid choice, please try again.\n");
        }
    }
    return 0;
}
