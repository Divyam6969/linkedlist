// insertion in between 
//won't work at index 0 and last index
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

struct Node*  insertinbetween(struct Node *head, int s,int x)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node*p = head;
    struct Node*q = head;
    int count=0;
    while(count!=x-1)
    {
        p=p->next;
        count++;
    }
    int i=0;
    while(i!=x)
    {
        q=q->next;
        i++;
    }
    //made by divyam
    p->next = ptr;
    ptr->data = s;
    ptr->next = q;

    // or could have done like
    // ptr->next=p->next;
    // ptr->data=s;
    // p->next=ptr;

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
    cout<<"Enter the place where you want to insert an element"<<endl;
    int x;
    cin>>x;
    // insertion in between
    head = insertinbetween(head, s,x);
    linkedListTraversal(head);
    return 0;
}
