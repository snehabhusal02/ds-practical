
#include <iostream>
#include <stack>
#include <string>
using namespace std;

struct Node
{
    char data;
    Node *left, *right;

    Node(char ch)
    {
        data = ch;
        left = right = NULL;
    }
};

// Function to create Expression Tree
Node* createTree(string prefix)
{
    stack<Node*> s;

    for(int i = prefix.length() - 1; i >= 0; i--)
    {
        Node* node = new Node(prefix[i]);

        if(prefix[i] == '+' || prefix[i] == '-' ||
           prefix[i] == '*' || prefix[i] == '/')
        {
            node->left = s.top();
            s.pop();

            node->right = s.top();
            s.pop();
        }

        s.push(node);
    }

    return s.top();
}

// Recursive Post-order Traversal
void postorder(Node* root)
{
    if(root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);

    cout << root->data << " ";
}

// Function to delete Expression Tree
void deleteTree(Node* root)
{
    if(root == NULL)
        return;

    deleteTree(root->left);
    deleteTree(root->right);

    delete root;
}

int main()
{
    string prefix = "*+AB-CD";

    Node* root = createTree(prefix);

    cout << "Prefix Expression: " << prefix << endl;

    cout << "Postfix Expression: ";
    postorder(root);

    deleteTree(root);
    root = NULL;

    cout << "\nTree deleted successfully.";

    return 0;
}
