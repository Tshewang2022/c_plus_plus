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

struct Node *head;
void Print() {
    // this is the functions
};

void Insert() {
    // this is where all the dynamic memory allocations happens
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
        Insert(x);
        Print();
    }
}
