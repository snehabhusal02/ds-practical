
#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head = NULL, *temp, *newnode;

void insert(int a)
{
    newnode = new node;

    newnode->data = a;
    newnode->next = NULL;

    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newnode;
    }

    cout << "Element inserted" << endl;
}

void display()
{
    cout << "Linked list is:" << endl;

    temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

void del()
{
    int v, f = 0;
    node *prev = NULL;

    cout << "Enter the value to delete: ";
    cin >> v;

    temp = head;

    while(temp != NULL)
    {
        if(temp->data == v)
        {
            f = 1;
            break;
        }

        prev = temp;
        temp = temp->next;
    }

    if(f == 1)
    {
        if(temp == head)
        {
            head = head->next;
        }
        else
        {
            prev->next = temp->next;
        }

        delete temp;
        cout << "Element deleted" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
}

void search()
{
    int v, f = 0;

    cout << "Enter the value to search: ";
    cin >> v;

    temp = head;

    while(temp != NULL)
    {
        if(temp->data == v)
        {
            f = 1;
            break;
        }

        temp = temp->next;
    }

    if(f == 1)
        cout << "Element found" << endl;
    else
        cout << "Element not found" << endl;
}

int main()
{
    int n, x;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:" << endl;

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        insert(x);
    }

    display();

    del();

    display();

    search();

    return 0;
}
