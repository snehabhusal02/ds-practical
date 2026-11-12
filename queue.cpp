
#include <iostream>
using namespace std;

class solution
{
public:
    int size;
    int a[100];
    int rear = -1, front = -1;

    solution()
    {
        cout << "Enter the Number of Elements in Queue: ";
        cin >> size;

        if(size < 1 || size > 100)
        {
            cout << "Invalid queue size!" << endl;
            size = 0;
        }
    }

    // Enqueue operation
    void enqueue(int n)
    {
        if(rear == size - 1)
        {
            cout << "Queue is in OVERFLOW!" << endl;
        }
        else
        {
            if(front == -1)
            {
                front++;
            }

            rear++;
            a[rear] = n;

            cout << n << " inserted into queue" << endl;
        }
    }

    // Dequeue operation
    void dequeue()
    {
        if(front == -1 || front > rear)
        {
            cout << "Queue is in UNDERFLOW!" << endl;
        }
        else
        {
            cout << "Deleted element: " << a[front] << endl;
            front++;

            if(front > rear)
            {
                front = -1;
                rear = -1;
            }
        }
    }

    // Display operation
    void display()
    {
        if(front == -1)
        {
            cout << "Queue is empty!" << endl;
        }
        else
        {
            cout << "Queue elements are:" << endl;

            for(int i = front; i <= rear; i++)
            {
                cout << a[i] << " ";
            }

            cout << endl;
        }
    }
};

int main()
{
    solution s;
    int choice, n;

    if(s.size == 0)
        return 0;

    do
    {
        cout << "\n--- Menu ---" << endl;
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
