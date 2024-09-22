#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

class BST {
private:
    Node* root;

    Node* insert(Node* node, int value) {
        if (node == nullptr)
            return new Node(value);
        
        if (value < node->data)
            node->left = insert(node->left, value);
        else if (value > node->data)
            node->right = insert(node->right, value);

        return node;
    }

    void inorder(Node* node) {
        if (node == nullptr)
            return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

    void preorder(Node* node) {
        if (node == nullptr)
            return;
        cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }

    void postorder(Node* node) {
        if (node == nullptr)
            return;
        postorder(node->left);
        postorder(node->right);
        cout << node->data << " ";
    }

    void levelOrder(Node* node) {
        if (node == nullptr)
            return;

        queue<Node*> q;
        q.push(node);

        while (!q.empty()) {
            Node* current = q.front();
            cout << current->data << " ";
            q.pop();

            if (current->left != nullptr)
                q.push(current->left);
            if (current->right != nullptr)
                q.push(current->right);
        }
    }

    Node* search(Node* node, int value) {
        if (node == nullptr || node->data == value)
            return node;

        if (value < node->data)
            return search(node->left, value);

        return search(node->right, value);
    }

    Node* findMin(Node* node) {
        while (node->left != nullptr)
            node = node->left;
        return node;
    }

    Node* remove(Node* node, int value) {
        if (node == nullptr)
            return node;

        if (value < node->data)
            node->left = remove(node->left, value);
        else if (value > node->data)
            node->right = remove(node->right, value);
        else {
            if (node->left == nullptr) {
                Node* temp = node->right;
                delete node;
                return temp;
            }
            else if (node->right == nullptr) {
                Node* temp = node->left;
                delete node;
                return temp;
            }

            Node* temp = findMin(node->right);
            node->data = temp->data;
            node->right = remove(node->right, temp->data);
        }
        return node;
    }

public:
    BST() { root = nullptr; }

    void insert(int value) {
        root = insert(root, value);
    }

    void inorder() {
        inorder(root);
        cout << endl;
    }

    void preorder() {
        preorder(root);
        cout << endl;
    }

    void postorder() {
        postorder(root);
        cout << endl;
    }

    void levelOrder() {
        levelOrder(root);
        cout << endl;
    }

    void search(int value) {
        Node* result = search(root, value);
        if (result != nullptr)
            cout << "Node " << value << " found in the tree." << endl;
        else
            cout << "Node " << value << " not found in the tree." << endl;
    }

    void remove(int value) {
        root = remove(root, value);
    }
};

int main() {
    BST bst;
    int choice, value;

    do {
        cout << "\nBinary Search Tree Menu:\n";
        cout << "1. Insert a node\n";
        cout << "2. Inorder Traversal\n";
        cout << "3. Preorder Traversal\n";
        cout << "4. Postorder Traversal\n";
        cout << "5. Level Order Traversal\n";
        cout << "6. Search for a node\n";
        cout << "7. Delete a node\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to insert: ";
                cin >> value;
                bst.insert(value);
                break;
            case 2:
                cout << "Inorder traversal: ";
                bst.inorder();
                break;
            case 3:
                cout << "Preorder traversal: ";
                bst.preorder();
                break;
            case 4:
                cout << "Postorder traversal: ";
                bst.postorder();
                break;
            case 5:
                cout << "Level order traversal: ";
                bst.levelOrder();
                break;
            case 6:
                cout << "Enter the value to search: ";
                cin >> value;
                bst.search(value);
                break;
            case 7:
                cout << "Enter the value to delete: ";
                cin >> value;
                bst.remove(value);
                break;
            case 8:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 8);

    return 0;
}