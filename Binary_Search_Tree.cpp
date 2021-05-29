#include <iostream>
using namespace std;

class BST
{
    int data;
    BST *left, *right;

public:
    // Default constructor.
    BST();

    // Parameterized constructor.
    BST(int);

    // Insert function.
    BST *Insert(BST *, int);

    // Inorder traversal.
    void Inorder(BST *);

    // Searching a given value
    bool search(BST *, int);
};

// Default Constructor definition.
BST ::BST()
    : data(0), left(NULL), right(NULL)
{
}

// Parameterized Constructor definition.
BST ::BST(int value)
{
    data = value;
    left = right = NULL;
}

// Insert function definition.
BST *BST ::Insert(BST *root, int value)
{
    if (!root)
    {
        // Insert the first node, if root is NULL.
        return new BST(value);
    }

    // Insert data.
    if (value > root->data)
    {
        // Insert right node data, if the 'value'
        // to be inserted is greater than 'root' node data.
        root->right = Insert(root->right, value);
    }
    else
    {
        // Insert left node data, if the 'value'
        // to be inserted is greater than 'root' node data.
        root->left = Insert(root->left, value);
    }

    // Return 'root' node, after insertion.
    return root;
}

// Inorder traversal function.
// This gives data in sorted order.
void BST ::Inorder(BST *root)
{
    if (!root)
    {
        return;
    }
    Inorder(root->left);
    cout << root->data << " -> ";
    Inorder(root->right);
}

// binary search on Binary Search Tree
bool BST::search(BST *node, int val)
{

    if (node == NULL)
    {
        return false;
    }
    else if (node->data == val)
    {
        return true;
    }

    else if (val < node->data)
    {
        return search(node->left, val);
    }
    else if (val > node->data)
    {
        return search(node->right, val);
    }

    return false;
}

int main()
{
    cout << "\n\n-----------------------------------------\n\n";

    BST b, *root = NULL;
    root = b.Insert(root, 50);
    b.Insert(root, 30);
    b.Insert(root, 20);
    b.Insert(root, 40);
    b.Insert(root, 70);
    b.Insert(root, 60);
    b.Insert(root, 80);

    b.Inorder(root);

    cout << endl;

    if (b.search(root, 70))
    {
        cout << "Found 70" << endl;
    }
    else
    {
        cout << "70 cannot be found" << endl;
    }

    if (b.search(root, 10))
    {
        cout << "Found 10" << endl;
    }
    else
    {
        cout << "10 cannot be found" << endl;
    }

    cout << "\n\n-----------------------------------------\n\n";
    return 0;
}