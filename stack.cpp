
#include <iostream>
using namespace std;

const int size = 6;
int a[size];
int top = -1;

// Push operation
void push(int n)
{
    if(top == size - 1)
    {
        cout << "Stack overflow" << endl;
    }
    else
    {
        top++;
        a[top] = n;
        cout << n << " pushed" << endl;
    }
}

// Pop operation
void pop()
{
    if(top == -1)
    {
        cout << "Stack empty" << endl;
    }
    else
    {
        cout << a[top] << " popped" << endl;
        top--;
    }
}

// Peek operation
void peek()
{
    if(top == -1)
    {
        cout << "Stack empty" << endl;
    }
    else
    {
        cout << "Top element: " << a[top] << endl;
    }
}

// Display operation
void display()
{
    if(top == -1)
    {
        cout << "Stack empty" << endl;
    }
    else
    {
        cout << "Stack elements are:" << endl;

        for(int i = top; i >= 0; i--)
        {
            cout << a[i] << endl;
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

        cout << "Enter choice: ";
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
