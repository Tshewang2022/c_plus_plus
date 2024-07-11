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
// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *head, *newnode;

// will allocate the memory using the dynamic allocation of memory using the malloc function
// newnode = (struct node *)malloc(sizeof(struct node));
// printf("Enter the data for inserting at the beginning of the linked list");
// scanf("%d", (*newnode).data);
// (*newnode).next = head;
// head = newnode;

// 2. inserting at the end of the linked list
// struct Node
// {
//     int data;
//     struct Node *next;
// };
// struct Node *head, *temp;

// // writing the main function, the main syntax of the dsa;
// int main()
// {
//     newnode = (struct Node *)malloc(sizeof(struct Node));

//     // will allow the user to enter the data
//     printf("Enter the data for the linked list");
//     scanf("%d", (*newnode).data);
//     (*newnode).next = 0;
//     temp = head;
//     while (temp->next != 0)
//     {
//         temp = temp->next;
//     }
//     temp->next = newnode;
// };

// // inserting the data at the given positions, this seems little complex than it was

// struct Nodes
// {
//     int data;
//     struct Nodes *next;
// };

// struct Nodes *head, *newnode, *temp;
// int Pos; // will store the size of the linked list
// int main()
// {
//     int Count;
//     // first step we will create the malloc functions to dynamically assgin the memory
//     newnode = (struct Nodes *)malloc(sizeof(struct Nodes));
//     scanf("%d", &Pos);
//     if (Pos > Count)
//     {
//         prinf("Invalid positions")
//     }
//     else
//     {
//         int i;
//         temp = head;
//         while (i < Pos)
//         {
//             temp = temp->next;
//             i++;
//         };
//         printf("Enter the data");
//         scanf("%d", &newnode->data);
//         newnode->next = temp->next;
//         temp->next = newnode;
//     }
// }
/*
Deletion of the linked list
1. from the beginning of the linked list
2. from the end of the linked list
3. from  the n^th positions
*/
// struct Nodes
// {
//     int data;
//     struct Nodes *next;
// };
// void DelFrmBeg()
// {
//     // we need the new variables
//     struct Nodes *temp;
//     temp = head;
//     head = head->next;
//     free(temp);
// }
// *** we are using the temp variable to temporialy store the node data inside it, so after changing the head address, we cam access it from the temp, so that we can free that temp; ***

// void DelFrmEnd()
// {
//     // to delete the node from the end, we need to have two pointer variables, where first temp will delete, and another variable will updated nodes to NULL;
// }

// things that will make you a men
/*
Never say yes to something that you dont owned it
If you are not invited, please dont go
Control your emotions in all level
Save money in all the case, and keep some money in cash as a men
Find a ways to make money in any case, or you will be the money making machines for others
Work hard and be humble-> but not weak
Never go broke to impress someone-> that is not the right person for you at any case. the right person for you will help to build the empire not destroy it
*/
// i have learned hard way, but you should not, follow my advice, if not you are in big trouble

//  How to gain confidence in this world
// speak slowly and more concise
// take nothing for free, if you accept in the free mode, you have to pay the price triple the amount
// give eye contact when you speak, and dont brag
// Be a men not a boy
// this are the rules that  you need to follow as the men
// how can you crack the higher level problem sloving skills

// finding out the time complexity of a loop
// for (int i = 0; i < 10; i++)
// {                   // this will run n+1 of times
//     std::cout << i; // this will run n numbers of time
// }
// so the time complexity of the for loop is O(n);

// the new concepts in the c++, palinedrom
/*
we will need the function that will check if the given function is palinedrome or not
we need loop that will iterate over the given string
so we have to use the bool functions
we need to length property that will over each and every string, that will compare the string from start and from the last;
*/
// bool is_palinedrome(string num2)
// {
//     // this will loop over the string of num2 to check if it is palinedrome or not;
//     for (int i = 0; i < length.num2 / 2; i++;)
//     {
//         // we will have to check for the condition for the palinedrome string;
//         if (num2[i] != num2[length.num2 - i - 1])
//         {
//             return false;
//         }
//         return true;
//     }
// };
// int main()
// {
//     // will check if the given string is palinedrome or not;
//     std::string num2 = "121";
//     if (is_palinedrome(num2))
//     {
//         std::cout << num2 < "is palinedrome \n";
//     }
//     else
//     {
//         std::cout << num2 << "is not palinedrome \n";
//     }
// }

// till now what i have studied
/*
1.memory allocation-> global/stack/heap
2.pointers ->
3.linked list-> where inserting the data, deleting and reversing the linked list
3.1 inserting the node at the begining, nth position and end
3.2 deleting the node and freeing up the memory
3.3. reversing the linked list, using iteration and recursion method
*/

// reversing the linked list using the recursive methods in c++
// struct Node
// {
//     int data;
//     struct Node *next;
// };
// struct Node *head, *temp;
// // print function that will print out the output
// void print(Node *p)
// {
//     // if the given address is null, then it will return the input
//     if (p == NULL)
//     {
//         printf('\n');
//         return;
//     };

//     Print(p->next); // this is the recursive call
//     printf("%d", p->data);
// };

// void Insert(Node *head, int data)
// {
//     // this function will allocated the memory for the data
//     /*
//     steps for allocating the data dynamically
//     1. first calculate the size of data that we are going to stored inside the heap*/
//     Node *temp = (struct Node *)malloc(sizeof(struct Node));

//     // defining the data
//     temp->data = data;
//     temp->next = NULL;

//     if (head == NULL)
//     {
//         head = temp;
//     }
//     else
//     {
//         Node *temp1 = head;
//         while (temp1->next != NULL)
//         {
//             temp1 = temp1->next;
//         };
//         temp1->next = temp;
//     }
//     return head;
// };

// int main()
{
    struct Node *head = NULL;
    head = Insert(head, 2);
    head = Insert(head, 3);
    head = Insert(head, 4);
    head = Insert(head, 5);
    Print(head);
}

/*
main structure of the das is composed of
1. print function
2. insert function
3. main function
// just like the normal functions
*/
// list in programming is the array;

// doubly linked list, which means that it will have double link to the list or data;
/*
linked lists are of two kinds
1.single linked list called, singly linked list;
2.double linked list called, doubly linked list;-> we can do the forward and the reversed look up;
that means that, it will have one extra pointers, where it points to the previous node;
*/

// visual representation of the doubly linked list
// struct dsa
// {
//     // numbers of fields in the node(3);
//     int data;
//     struct dsa *next; // this will store the addess of the next node;
//     struct dsa *prev; // this will store the address of the previous node;
// };

// implementation of the doubly linked list
/*
insertion(begining, end and nth position)
traversal
deletion(begining, end and nth position)
*/
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head;
// Getting a newNode
struct node *newNode(int x)
{
    // will create the variable in the form of heap memory, so need to call the malloc.
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = x;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}
void InsertAtHead(int x)
{
    struct Node *temp = newNode(x);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
};

int main()
{
    InsertAtHead();
};

// introduction to stack-> way of arranging the datas. Also called as the "last in -first out"-> which means, the data have to removed in sequence manner from the first;
/*
stack Abstract Data Types(ADT); Where we only talk about the logical and features part, not the implementation;

stack-> in terms of data, we can define as A list with the restriction that insertion and deletion can be performed only from the one end, called top is called stack
*/

/*
operations in stack that we can perform -> all can be perform in O(1);
1. push(x)-> to insert into the top
2. pop()-> removing from the top
3. top()-> will return top element of the stack
4. IsEmpty()->to check whether the stack is empty or not;
*/

// Application of stack in real life scenarios;
/*
1.function call / recursion;
2.undo in editor;
3. balanced parenthesis;
*/

// got my first knowlegde on the video editing, having been focusing on it whole dayclass man
{
public:
    // defining the attributes, or the model of the class
    int age;
    std::string name;

    // defining the methods of the class
public:
    void output(int age, string name)
    {
        std::cout << 'he is' << age;
        std::cout << name << 'is from tashigang';
    }
};
int main()
{
    man apple;
    apple.output(12, 'tshewang');
    return 0;
}