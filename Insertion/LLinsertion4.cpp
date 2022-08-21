//insertion after a node(whose address is given)
//Let suppose third element here
#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    int count = 1;
    while (ptr != NULL)
    {
        printf("Element %d: %d\n", count, ptr->data);
        ptr = ptr->next;
        count++;
    }
}

struct Node*  insertafter(struct Node *head,struct Node *after, int s)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data=s;
    ptr->next=after->next;
    after->next=ptr;


    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;

    linkedListTraversal(head);

    cout << "Enter the element you want to insert: ";
    int s;
    cin >> s;
    cout<<endl;
    //Let suppose we want to enter value after third node so we will pass the third node

    // insertion after
    head = insertafter(head,third, s);
    linkedListTraversal(head);
    return 0;
}
