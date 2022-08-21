//Deleting the node in with given value
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
struct Node* deleteLL(struct Node* head, int x)
{

    struct Node* ptr = head;
    struct Node* ptr2 = head->next;
    
    while(ptr2->data!=x && ptr2->next!=NULL)
    {
        ptr=ptr->next;
        ptr2=ptr2->next;
    }
  
    if(ptr2->data==x)
    {
        ptr->next=ptr2->next;
        free(ptr2);
    }
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
    cout<<"Enterthe value you want to delete"<<endl;
    int x;
    cin>>x;

    head=deleteLL(head,x);
    
    cout<<"After deletion"<<endl;
    displayLL(head);

    return 0;
}