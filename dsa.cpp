#include <iostream>

/*
list-> dealing with the arrays
linked list-> dealing with dynamic arrays(will contains the data and its address)
space and time complexity of the programming lanuages.
*/

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head; // this will store all the value of the print() function which is being passed to the node(Node *).
void Insert(int x)
{
    // this is where all the dynamic memory allocations happens
    Node *temp = (Node *)malloc(sizeof(struct Node));
    (*temp).data = x;
    (*temp).next = NULL;
    temp = head;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        struct Node *last = head;
        while (last->next !=)
    }
};

void Print()
{
    // will make the local variable and assigned to the *head(which is the global variable)
    struct Node *temp = head;
    printf("List is:");
    while (temp != NULL)
    {
        // will print that data
        printf("%d", (*temp).data);
        temp = (*temp).next;
    };
    printf("\n");
};

int main()
{
    head = NULL; // emptylist;
    printf("How many numbers? \n");
    int n, i, x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number \n");
        scanf("%d", &x);
        Insert(x); // -> This function will help us insert the new data inside the existing data(linked list), by dynamically allocating the memory.
        Print();   // this function will help us the print all the linked list(which mean the dynamic arrays)
    }
}

/*
The basic syntaxs for DSAstruct Node
{
    int data;
    struct Node *next;
};

struct Node *head; // this will store all the value of the print() function which is being passed to the node(Node *).
void Insert(int x)
{
    // this is where all the dynamic memory allocations happens
    Node *temp = (Node *)malloc(sizeof(struct Node));
    (*temp).data = x;
    (*temp).next = NULL;
    temp = head;
};

void Print()
{
    // will make the local variable and assigned to the *head(which is the global variable)
    struct Node *temp = head;
    printf("List is:");
    while (temp != NULL)
    {
        // will print that data
        printf("%d", (*temp).data);
        temp = (*temp).next;
    };
    printf("\n");
};

int main()
{
    head = NULL; // emptylist;
    printf("How many numbers? \n");
    int n, i, x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number \n");
        scanf("%d", &x);
        Insert(x); // -> This function will help us insert the new data inside the existing data(linked list), by dynamically allocating the memory.
        Print();   // this function will help us the print all the linked list(which mean the dynamic arrays)
    }
}

1.Needs to have pointers
2.Needs insert() function-> this will allocate the memory for the existing linked list
3.Needs print() function-> this will print all linked list
4.Needs one global variable where we can store address, and we can manipulate that data
5.Needs one loop(for(){})-> that will loop over the existing linked list
*/