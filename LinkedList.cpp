#include<bits/stdc++.h>

using namespace std;
class Node
{
  public:
    int data;
    Node *next;
};
 /* function for insert an element at the begning of the linked list*/
void insertBegning(Node **head)
{
    cout << "Enter the value: ";
    int data;
    cin >> data;
    Node *temp=new Node();
    temp->data=data;
    temp->next=*head;
    *head=temp;
    
}

/* function for the insert an element atthe end of the linked list*/

void insertEnd(Node **head)
{
    cout <<"Enter the value: ";
    int data;
    cin >> data;
    Node *temp= new Node();
    temp->data=data;
    temp->next-NULL;
    Node *curr=*head;
    if(*head==NULL)
    {
        *head=temp;
        return;
    }
    while(curr->next!=NULL)
        curr=curr->next;
    curr->next=temp;
}
/* function for delete the element at begning of the linked list*/
void deleteBegning(Node **head)
{
    if(*head==NULL)
    {
        cout <<"List is  Empty\n";
        return;
    }
    Node *curr=*head;
    *head=curr->next;
    cout << curr->data << " is deleted\n";
    delete(curr);
}

/* function for delete the element at the end of the linked list */
void deleteEnd(Node **head)
{
    if(*head == NULL)
    {
        cout << "List is empty\n";
        return;
    }
    Node *curr=*head;
    Node *pre=NULL;
    if(curr->next==NULL)
    {
        cout <<curr->data << " is dleted\n";
        delete(curr);
        *head=NULL;
        return;
    }
    while(curr->next!=NULL)
    {
        pre=curr;
        curr=curr->next;
    }
    cout <<curr->data << " is dleted\n";
    delete(curr);
    pre->next=NULL;
}
/* function for print the linked list */
void printList(Node *head)
{
    if(head==NULL)
    {
        cout << "List is empty\n";
        return;
    }
    while(head!=NULL)
    {
        cout << head->data << " ";
        head=head->next;
    }
    cout << endl;
}
/* function for search an element in a linked list */
void search(Node *head)
{
    cout << "Enter which element you want to search:";
    int data;
    cin >> data;
    if(head==NULL)
    {
        cout << "Element not present in linked list\n";
        return;
    }
    Node *curr=head;
    while(curr!=NULL)
    {
        if(curr->data==data)
        {
            cout << data << " is present in list\n";
            return;
        }
        curr=curr->next;
    }
    cout << "Element is not present\n";
}
/* function for reverse the linked list */
void reverse(Node **head)
{
    Node *curr=*head;
    Node *pre=NULL;
    Node *next=NULL;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=pre;
        pre=curr;
        curr=next;
    }
    *head=pre;
}

int main()
{
    Node *head=NULL;
    while(true)
    {
        printf("1.Add Element begning in the linked list\n");
        printf("2.Add Element at the end of the linked list\n");
        printf("3.Delete element at the begning of the linked list\n");
        printf("4.Delete element at the end of the linked list\n");
        printf("5.Print the linked list\n");
        printf("6.Reverse Linked List\n");
        printf("7.Find an element of the linked list\n");
        printf("8.Exit\n");
        int c;
        cout << "Enter your choice:";
        cin >>c;
        switch(c)
        {
            case 1: insertBegning(&head);
                    break;
            case 2: insertEnd(&head);
                    break;
            case 3: deleteBegning(&head);
                    break;
            case 4:deleteEnd(&head);
                    break;
            case 5:
                    printList(head);
                    break;
            case 6:reverse(&head);
                    break;
            case 7:search(head);
                    break;
            case 8: exit(0);
            default :cout <<"Invalid Input\n";
        }
        
    }
   
    
    return 0;
}