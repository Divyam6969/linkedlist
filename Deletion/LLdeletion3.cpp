//Deleting the last node
#include<iostream>
using namespace std;
struct Node 
{
    int data;
    struct Node* next;
};
void displayLL(struct Node* ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
struct Node* deletethelastnode(struct Node* head)
{
    struct Node* p = head;
    struct Node*q = head->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}
int main()
{
    struct Node* head;
    struct Node* val2;
    struct Node* val3;
    struct Node* val4;

    head= (struct Node*)malloc(sizeof(struct Node));
    val2= (struct Node*)malloc(sizeof(struct Node));
    val3= (struct Node*)malloc(sizeof(struct Node));
    val4= (struct Node*)malloc(sizeof(struct Node));

    head->data =1;
    head->next=val2;

    val2->data=2;
    val2->next=val3;
    
    val3->data=3;
    val3->next=val4;

    val4->data=4;
    val4->next=NULL;

    cout<<"Before deletion"<<endl;
    displayLL(head);

    head=deletethelastnode(head);
    cout<<"After deletion"<<endl;
    displayLL(head);



    return 0;
}