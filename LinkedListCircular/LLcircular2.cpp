//Insertion circular linked list

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

struct Node* valueinsert(struct Node* head,int s,int x)
{
    struct Node* p = head;
    int count=1;
    struct Node* p2= head->next;

    if(x!=0)
    {
        while(count!=x)
        {
            p=p->next;
            p2=p2->next;
            count++;
        }
        struct Node* ptr= (struct Node*)malloc(sizeof(struct Node));
        ptr->data=s;

        p->next=ptr;
        ptr->next=p2;
    }

    else if(x==0)
    {
        struct Node* nhead = (struct Node*)malloc(sizeof(struct Node));
        nhead->data=s;

        p=head;
        do
        {
        p=p->next;  
        } while ((p->next)!=head);

        p->next=nhead;

        nhead->next=head;
        head=nhead;


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

    cout<<"Previous linked list is"<<endl;
    printLL(head);

    int s;
    cout<<"Enter the value you want to insert: ";
    cin>>s;

    int x;
    cout<<"Enter the index where you want to insert that value: ";
    cin>>x;

    head = valueinsert(head,s,x);

    cout<<"After insertion the new linked list is"<<endl;
    printLL(head);

    return 0;
}