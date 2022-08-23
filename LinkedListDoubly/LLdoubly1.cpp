#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
    struct Node* previous;
};

int main()
{
    struct Node* n1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n3 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n4 = (struct Node*)malloc(sizeof(struct Node));

    n1->data=1;
    n2->data=2;
    n3->data=3;
    n4->data=4;

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=NULL;
    
    n4->previous=n3;
    n3->previous=n2;
    n2->previous=n1;
    n1->previous=NULL;

    //Traversal is same and we can traverse in reverse method using previous pointer lol

    //Insertion bhi hojaega dimaag lga kr :)

    

    return 0;
}