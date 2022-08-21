//insertion at the end 
#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node * next;
};
struct Node* insertionattheend(struct Node* head, int s)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data=s;
    ptr->next=NULL;
    struct Node*end = head;
    while(end->next!=NULL)
    {
        end=end->next;
    }
    end->next=ptr;
    
    return head;
    

}

void traverseLL(struct Node* ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

int main()
{
    struct Node* head;
    struct Node* val1;
    struct Node* val2;
    struct Node* val3;
    head= (struct Node*)malloc(sizeof(struct Node));
    val1= (struct Node*)malloc(sizeof(struct Node));
    val2= (struct Node*)malloc(sizeof(struct Node));
    val3= (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next=val1;

    val1->data=2;
    val1->next=val2;

    val2->data=3;
    val2->next=val3;

    val3->data=4;
    val3->next=NULL;
    cout<<"Linked list before insertion"<<endl;
    traverseLL(head);
    cout<<"Enter the element you want to insert at the end: ";
    int s;
    cin>>s;
    head=insertionattheend(head,s);
    cout<<"Linked list after insertion"<<endl;
    traverseLL(head);


    return 0;
}
