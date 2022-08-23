//Traversal of circular linked list

#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};

void printLL(struct Node* head)
{
    struct Node* p = head;
    do
    {
      cout<<p->data<<endl;
      p=p->next;  
    } while ((p->next)!=head);
    
}
int main()
{

    struct Node* head = (struct Node*)(malloc(sizeof(struct Node)));
    struct Node* val1 = (struct Node*)(malloc(sizeof(struct Node)));
    struct Node* val2 = (struct Node*)(malloc(sizeof(struct Node)));
    struct Node* val3 = (struct Node*)(malloc(sizeof(struct Node)));
    struct Node* val4 = (struct Node*)(malloc(sizeof(struct Node)));
    struct Node* val5 = (struct Node*)(malloc(sizeof(struct Node)));

    head->data=1;
    head->next=val1;

    val1->data=2;
    val1->next=val2;

    val2->data=3;
    val2->next=val3;

    val3->data=4;
    val3->next=val4;

    val4->data=5;
    val4->next=val5;

    val5->data=6;
    val5->next=head;

    printLL(head);
    return 0;
}