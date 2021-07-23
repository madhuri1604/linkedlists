#include <stdio.h>
#include <stdlib.h>

struct node{
	int num;     //For data of the node
	struct node *nptr;     	// For address of the next node 
}*stnode;

void createNodeList(int n);   //function to create list
void displayList();    //function to display list


void main(){
	int n;

	printf("Input number of nodes: ");
	scanf("%d", &n);
	createNodeList(n);
	displayList();
	return 0;
}

void createNodeList(int n)
{
	struct node *fnode, *tmp;
	int num, i;
	stnode = (struct node *)malloc(sizeof(struct node));

	if(stnode == NULL)  //to check whether fnnode is null
{
	printf("Memory cannot be allocated");
}
	else
	{
	printf("input for data node1 :");
	scanf("%d", &num);

	stnode->num = num;
	stnode->nptr = NULL; //for linking address field to null
	tmp = stnode;

	for (i=2; i<n; i++) //for creating n nodes and adding to the linked list		
		{
		fnode = (struct node *)malloc(sizeof(struct node));	
		if(fnode==NULL)
			{
			printf("Memory cannot be allocated");
			break;
			}

		else
			{
			printf(" Input data for node %d : ", i);
                	scanf(" %d", &num);
 
                	fnode->num = num;      // links the num field of fnNode with num
                	fnode->nptr = NULL; // links the address field of fnNode with NULL
 
                	tmp->nptr = fnode; // links previous node i.e. tmp to the fnNode
                	tmp = tmp->nptr; 
			}
		}


	}
}

void displayList()

	{
    struct node *tmp;
    if(stnode == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = stnode;
        while(tmp != NULL)
        {
            printf(" Data = %d\n", tmp->num);       // prints the data of current node
            tmp = tmp->nptr;                     // advances the position of current node
        }
    }
}


//this is test line





