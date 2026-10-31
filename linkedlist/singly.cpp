#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

// traversal
void display(Node *head)
{
    if (head == nullptr)
    {
        cout << "List is empty\n";
        return;
    }
    Node *ptr = head;
    while (ptr != nullptr)
    {
        cout << ptr->data << " -> ";
        ptr = ptr->next;
    }
    cout << "NULL\n";
}

// insert value at head
void insertHead(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}

// insert value at tail
void insertTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node *ptr = head;
    while (ptr->next != nullptr)
    {
        ptr = ptr->next;
    }
    ptr->next = newNode;
}

// insert multiple value together
void insertMultiple(Node *&head, int num)
{
    int val;
    for (int i = 1; i <= num; i++)
    {
        cout << "Enter the value " << i << ": ";
        cin >> val;

        Node *newNode = new Node(val);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node *ptr = head;
            while (ptr->next != nullptr)
            {
                ptr = ptr->next;
            }
            ptr->next = newNode;
        }
    }
}

// insert at kth position
void insertkthPosition(Node *&head, int k, int val)
{
    if (k < 1)
    {
        cout << "Invalid Position\n";
        return;
    }
    if (k == 1)
    {
        insertHead(head, val);
        return;
    }

    Node *ptr = head;
    for (int i = 1; ptr != nullptr && i < k - 1; i++)
    {
        ptr = ptr->next;
    }
    if (ptr == nullptr)
    {
        cout << "Invalid Position\n";
        return;
    }
    Node *newNode = new Node(val);
    newNode->next = ptr->next;
    ptr->next = newNode;
}

// insert after kth position
void insertAfterKthPosition(Node *&head, int k, int val)
{
    if (k < 1)
    {
        cout << "Invalid Position";
        return;
    }
    Node *ptr = head;
    for (int i = 1; ptr != nullptr && i < k; i++)
    {
        ptr = ptr->next;
    }

    if (ptr == nullptr)
    {
        cout << "Invalid position\n";
        return;
    }

    Node *newNode = new Node(val);
    newNode->next = ptr->next;
    ptr->next = newNode;
}

// insert before kth position
void insertBeforeKthPosition(Node *&head, int k, int val)
{
    if (k < 1)
    {
        cout << "Invalid Position";
        return;
    }

    if (k == 1)
    {
        insertHead(head, val);
        return;
    }

    Node *ptr = head;
    for (int i = 1; ptr != nullptr && i < k - 1; i++)
    {
        ptr = ptr->next;
    }
    if (ptr == nullptr || ptr->next == nullptr)
    {
        cout << "Invalid position\n";
        return;
    }

    Node *newNode = new Node(val);
    newNode->next = ptr->next;
    ptr->next = newNode;
}

// find kth value
void findkthValue(Node *&head, int k)
{
    if (k < 1)
    {
        cout << "Invalid Position";
        return;
    }
    Node *ptr = head;
    for (int i = 1; ptr != nullptr && i < k; i++)
    {
        ptr = ptr->next;
    }
    if (ptr == nullptr)
    {
        cout << "Invalid Position";
    }
    else
    {
        cout << "Kth Value :: " << ptr->data << endl;
    }
}

// search by value
void searchByValue(Node *&head, int val)
{
    int pos = 1;
    Node *ptr = head;

    while (ptr != nullptr)
    {
        if (ptr->data == val)
        {
            cout << "Position :: " << pos;
            return;
        }
        ptr = ptr->next;
        pos++;
    }
    cout << "Value is not found";
}

// delete head
void deleteHead(Node *&head)
{
    if (head == nullptr)
    {
        cout << "List is Empty\n";
        return;
    }

    Node *ptr = head;
    head = ptr->next;
    delete ptr;
}

// delete tail
void deleteTail(Node *&head)
{
    if (head == nullptr)
    {
        cout << "List is Empty\n";
        return;
    }

    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return;
    }

    Node *ptr = head;
    while (ptr->next->next != nullptr)
    {
        ptr = ptr->next;
    }

    delete ptr->next;
    ptr->next = nullptr;
}

// delete kth node
void deletekthNode(Node *&head, int k)
{
    if (k < 1 || head == nullptr)
    {
        cout << "Invalid Position or Empty";
        return;
    }
    if (k == 1)
    {
        deleteHead(head);
        return;
    }
    Node *ptr = head;
    for (int i = 1; ptr != nullptr && i < k - 1; i++)
    {
        ptr = ptr->next;
    }
    if (ptr->next == nullptr || ptr == nullptr)
    {
        cout << "Invalid Position";
        return;
    }

    Node *temp = ptr->next;
    ptr->next = temp->next;
    delete temp;
}

int main()
{

    Node *head = nullptr;
    int choice, val, k;

    do
    {
        cout << "\n===== SINGLY LINKED LIST =====\n";
        cout << "1.  Display / Traversal\n";
        cout << "2.  Insert at Head\n";
        cout << "3.  Insert at Tail\n";
        cout << "4.  Insert at Kth Position\n";
        cout << "5.  Insert After Kth Position\n";
        cout << "6.  Insert Before Kth Position\n";
        cout << "7.  Find Kth Value\n";
        cout << "8.  Search by Value\n";
        cout << "9.  Delete Head\n";
        cout << "10. Delete Tail\n";
        cout << "11. Delete Kth Node\n";
        cout << "12. Delete After Kth Position\n";
        cout << "13. Delete Before Kth Position\n";
        cout << "14. Delete by Value\n";
        cout << "15. Insert Multiple Value\n";
        cout << "0.  Exit\n";

        cout << "Enter Choice:: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            display(head);
            break;

        case 2:
            cout << "Enter the Value:: ";
            cin >> val;
            insertHead(head, val);
            break;
        case 3:
            cout << "Enter the Value:: ";
            cin >> val;
            insertTail(head, val);
            break;
        case 4:
            cout << "Enter the position:: ";
            cin >> k;
            cout << "Enter the Value:: ";
            cin >> val;
            insertkthPosition(head, k, val);
            break;
        case 5:
            cout << "Enter the position:: ";
            cin >> k;
            cout << "Enter the Value:: ";
            cin >> val;
            insertAfterKthPosition(head, k, val);
            break;
        case 6:
            cout << "Enter the position:: ";
            cin >> k;
            cout << "Enter the Value:: ";
            cin >> val;
            insertBeforeKthPosition(head, k, val);
            break;
        case 7:
            cout << "Enter the position:: ";
            cin >> k;
            findkthValue(head, k);
            break;
        case 8:
            cout << "Enter searching Value:: ";
            cin >> val;
            searchByValue(head, val);
            break;
        case 9:
            deleteHead(head);
            break;
        case 10:
            deleteTail(head);
            break;
        case 11:
            cout<<"Enter the position:: ";
            cin>>k;
            deletekthNode(head, k);
            break;
        case 15:
            cout << "How many nodes? ";
            cin >> val;
            insertMultiple(head,val);
            break;

        default:
            break;
        }

    } while (choice != 0);

    return 0;
}