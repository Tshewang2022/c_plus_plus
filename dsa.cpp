#include <iostream>

/*
list-> dealing with the arrays
linked list-> dealing with dynamic arrays(will contains the data and its address)
space and time complexity of the programming lanuages.
*/

// struct Node
// {
//     int data;
//     struct Node *next;
// };

// struct Node *head; // this will store all the value of the print() function which is being passed to the node(Node *).
// void Insert(int x)
// {
//     // this is where all the dynamic memory allocations happens
//     Node *temp = new Node;
//     (*temp).data = x;
//     (*temp).next = NULL;
//     // head = temp;
//     if (head == NULL)
//     {
//         head = temp;
//     }
//     else
//     {
//         struct Node *last = head;
//         while (last->next != NULL)
//         {
//             last = last->next;
//         }
//         last->next = temp;
//     }
// };

// void Print()
// {
//     // will make the local variable and assigned to the *head(which is the global variable)
//     struct Node *temp = head;
//     printf("List is:");
//     while (temp != NULL)
//     {
//         // will print that data
//         printf("%d", (*temp).data);
//         temp = (*temp).next;
//     };
//     printf("\n");
// };

// int main()
// {
//     head = NULL; // emptylist;
//     printf("How many numbers? \n");
//     int n, i, x;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the number \n");
//         scanf("%d", &x);
//         Insert(x); // -> This function will help us insert the new data inside the existing data(linked list), by dynamically allocating the memory.
//         Print();   // this function will help us the print all the linked list(which mean the dynamic arrays)
//     }
// }

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

// inserting the data any given positions of the linked list;(n^th positions)

// struct Node
// {
//     int data;
//     struct Node *next;
// };
// struct Node *head;
// void Insert(int data, int n)
// {
//     //  this will insert the data;
//     Node *temp1 = Node(); // inserting the data using the dynamic allocation of the memory;

//     // needs one condition where if we have the empty list it should loop over, and insert at the n^th position
//     (*temp1).data = head;
//     (*temp1).next = NULL;
//     if (n == 1)
//     {
//         temp1->next = head;
//         head = temp1;
//         return;
//     }
//     Node *temp2 = head;
//     for (int i = 0; i < n - 2; i++)
//     {
//         temp2 = temp2->next;
//     }
//     temp1->next = temp2->next;
//     temp2->next = temp1;
// }

// int main()
// {
//     head = NULL;  // setting linked list into empty;
//     Insert(3, 1); // inserting the data 3, at position 1;
//     Print();
// }

/*
Basically there are three conditions where we can insert the data inside the linked list
1. at the beginning of the linked list
2. at certain given position of the linked list
3. at the end of the linked list
will write the program in c for the linked list
*/

// 1. inserting the data at the beginning of linked list, given it has already the linked list data;
struct node
{
    int data;
    struct node *next;
};
struct node *head, *newnode;

// will allocate the memory using the dynamic allocation of memory using the malloc function
newnode = (struct node *)malloc(sizeof(struct node));
printf("Enter the data for inserting at the beginning of the linked list");
scanf("%d", (*newnode).data);
(*newnode).next = head;
head = newnode;

// 2. inserting at the end of the linked list
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head, *temp;

// writing the main function, the main syntax of the dsa;
int main()
{
    newnode = (struct Node *)malloc(sizeof(struct Node));

    // will allow the user to enter the data
    printf("Enter the data for the linked list");
    scanf("%d", (*newnode).data);
    (*newnode).next = 0;
    temp = head;
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    temp->next = newnode;
};
