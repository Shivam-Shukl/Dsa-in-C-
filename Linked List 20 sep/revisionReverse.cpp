// Of course! Let's go through the code step by step and identify where the issue occurred and how it can be corrected.

// ### Original Code:

// ```cpp
// #include <iostream>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node *next;
// };

// int main(){
//     int n;  // The variable n is uninitialized at this point

//     int arr[n];  // Using uninitialized variable n to define an array

//     cout << "enter the size of the array :";
//     cin >> n;
//     cout << "enter the array :";
//     for(int i = 0; i < n; i++)
//         cin >> arr[i];

//     Node *head = new Node();
//     Node *first = head;
//     int i = 0;
//     while(i < n){
//         first->data = arr[i];
//         i++;
//         cout << first->data << " ";
//         first->next = new Node();  // Creating a new node in each iteration, including the last one
//         first = first->next;
//     }

//     Node *prev = NULL;
//     Node *temp = new Node();
//     while(head){
//         temp = head->next;
//         head->next = prev;
//         prev = head;
//         head = temp;
//     }

//     cout << endl;
//     while(prev){
//         cout << prev->data << " ";
//         prev = prev->next;  
//     }

//     return 0;
// }
// ```

// ### Explanation of the Issue:

// 1. The variable `n` is uninitialized when used to define the array `arr[n]`. This can lead to unpredictable behavior and potentially cause a segmentation fault.

// 2. In the loop where you are constructing the linked list from the array, you are creating a new node in each iteration, even for the last element of the array. This results in an extra node with uninitialized data being added to the linked list.

// 3. The reversal of the linked list seems correct, but the issue in the creation of the linked list affects the reversal as well, resulting in unexpected output.

// ### Correction Steps:

// 1. **Initialize `n` after taking user input:**
//    ```cpp
//    int n;
//    cout << "Enter the size of the array: ";
//    cin >> n;
//    ```

// 2. **Allocate memory for the array `arr` after initializing `n`:**
//    ```cpp
//    int arr[n]; // Now n is properly initialized
//    ```

// 3. **Modify the loop to create nodes only for valid array elements:**
//    ```cpp
//    while(i < n){
//        first->data = arr[i];
//        i++;
//        cout << first->data << " ";
//        if (i < n) {  // Create a new node only if there are more elements in the array
//            first->next = new Node();
//            first = first->next;
//        }
//    }
//    ```

// With these corrections, the linked list will be constructed correctly from the array, and the reversal will produce the desired output "5 4 3 2 1" for the given input "Enter the size of the array: 5" and "Enter the array: 1 2 3 4 5".
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    Node *head = new Node();
    Node *first = head;
    int i = 0;
    while (i < n)
    {
        first->data = arr[i];
        i++;
        if (i < n)
        {
            first->next = new Node(); // Create a new node only if there are more elements in the array
            first = first->next;
        }
    }

    // Reversing the linked list
    Node *prev = NULL;
    Node *temp;
    while (head)
    {
        temp = head->next;
        head->next = prev;
        prev = head;
        head = temp;
    }

    cout << endl;
    Node *current = prev;  // Assigning 'prev' to 'current' for clarity
    while (current)
    {
        cout << current->data << " ";
        current = current->next;
    }

    return 0;
}
