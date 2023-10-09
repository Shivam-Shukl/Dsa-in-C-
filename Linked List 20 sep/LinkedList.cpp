#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *Rev(Node *head)
{
    Node *prev = NULL;
    Node *temp;
    while (head)
    {
        temp = head->next;
        head->next = prev;
        prev = head;
        head = temp;
    }
    return prev;
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid number of elements. Exiting." << endl;
        return 0;
    }

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Node *head = new Node;
    head->data = arr[0];
    Node *temp = head;
    for (int i = 1; i < n; i++)
    {
        temp->next = new Node;
        temp = temp->next;
        temp->data = arr[i];
    }

    Node *reversedHead = Rev(head);
    print(reversedHead);

    // Clean up dynamically allocated memory
    while (reversedHead)
    {
        Node *temp = reversedHead;
        reversedHead = reversedHead->next;
        delete temp;
    }

    return 0;
}
