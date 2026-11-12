
#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *top = NULL;

// Push operation
void push(int n)
{
    node *newnode = new node;

    newnode->data = n;
    newnode->next = top;
    top = newnode;

    cout << n << " pushed into stack" << endl;
}

// Pop operation
void pop()
{
    if(top == NULL)
    {
        cout << "Stack underflow" << endl;
    }
    else
    {
        node *temp = top;

        cout << temp->data << " popped from stack" << endl;

        top = top->next;
        delete temp;
    }
}

// Peek operation
void peek()
{
    if(top == NULL)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Top element: " << top->data << endl;
    }
}

// Display operation
void display()
{
    if(top == NULL)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        node *temp = top;

        cout << "Stack elements are:" << endl;

        while(temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
}

int main()
{
    int choice, n;

    do
    {
        cout << "\n--- Stack Menu ---" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter element: ";
                cin >> n;
                push(n);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice" << endl;
        }

    } while(choice != 5);

    return 0;
}
