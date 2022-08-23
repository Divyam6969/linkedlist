//Deletion of an element in circular linked list

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

struct Node* deleteinLL(struct Node* head,int s)
{

    struct Node* pbefore = head;
    struct Node* p = head->next;
    
    int count=0;
    int check=0;
    do
    {
        pbefore=pbefore->next;
        p=p->next;

        count++;
        if((p->data)==s)
        {
            check=1;
        }

    } while (((p->data)!=s)&&((p->next)!=head));

    if(check==1)
    {
        struct Node* pnext = p->next;
        pbefore->next=pnext;

    }
    else
    {
        cout<<"Element is not present in our linked list"<<endl;
        
    }


    
    return head;
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


    cout<<"Before deletion the linked list was"<<endl;
    printLL(head);

    int s;
    cout<<"Enter the element you want to delete: ";
    cin>>s;

    head=deleteinLL(head,s);

    cout<<"After the deletion of the element our linked list is"<<endl;
    printLL(head);

    return 0;
}