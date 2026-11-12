
#include <iostream>
using namespace std;

class solution
{
    struct node
    {
        int data;
        node *next;
    };

    node *front, *rear;

public:

    solution()
    {
        front = NULL;
        rear = NULL;
    }

    // Enqueue operation
    void enqueue(int n)
    {
        node *newnode = new node;

        newnode->data = n;
        newnode->next = NULL;

        if(front == NULL)
        {
            front = newnode;
            rear = newnode;
        }
        else
        {
            rear->next = newnode;
            rear = newnode;
        }

        cout << n << " inserted into queue" << endl;
    }

    // Dequeue operation
    void dequeue()
    {
        if(front == NULL)
        {
            cout << "Queue is in UNDERFLOW!" << endl;
        }
        else
        {
            node *temp = front;

            cout << "Deleted element: " << temp->data << endl;

            front = front->next;

            if(front == NULL)
            {
                rear = NULL;
            }

            delete temp;
        }
    }

    // Display operation
    void display()
    {
        if(front == NULL)
        {
            cout << "Queue is empty!" << endl;
        }
        else
        {
            node *temp = front;

            cout << "Queue elements are:" << endl;

            while(temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }

            cout << endl;
        }
    }

    // Destructor to free remaining nodes
    ~solution()
    {
        while(front != NULL)
        {
            node *temp = front;
            front = front->next;
            delete temp;
        }

        rear = NULL;
    }
};

int main()
{
    solution s;
    int choice, n;

    do
    {
        cout << "\n--- Queue Menu ---" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter element to insert: ";
                cin >> n;
                s.enqueue(n);
                break;

            case 2:
                s.dequeue();
                break;

            case 3:
                s.display();
                break;

            case 4:
                cout << "Program ended." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while(choice != 4);

    return 0;
}
