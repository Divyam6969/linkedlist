//Creation and traversal

#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;

};

void displaylinkedlist(struct Node *ptr)
{
    cout<<"Values are" <<endl;
    while(ptr != NULL)
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
    //making space in heap for the linked list
    //linked list works like a chain lol
    head = (struct Node*)malloc(sizeof(struct Node));
    val1 = (struct Node*)malloc(sizeof(struct Node));
    val2 = (struct Node*)malloc(sizeof(struct Node));
    
    //Assigning value to first node
    head->data=7;
    head->next=val1;

    //Assigning value to second node
    val1->data=8;
    val1->next=val2;

    //Assigning value to second node
    val2->data=9;
    val2->next=NULL;


    displaylinkedlist(head);



}