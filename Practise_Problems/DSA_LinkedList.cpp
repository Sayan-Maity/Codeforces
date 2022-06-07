// #include <bits/stdc++.h>
// using namespace std;

// class ListNode
// {
// public: // Classes are private, to use it, make it public
//     int value;
//     ListNode *next;
// };
// // void returnList(ListNode *n)
// // {
// //     while (n != NULL)
// //     {
// //         cout << n->value << endl;
// //         n = n->next;
// //     }
// // }
// int main()
// {
//     ListNode *head = new ListNode(); // empty nodes are initialized
//     ListNode *first = new ListNode();
//     ListNode *second = new ListNode();

//     head->value = 1;    // value is initialized
//     head->next = first; // element pointed to next, using pointer(->)

//     first->value = 4;
//     first->next = second;

//     second->value = 7;
//     second->next = NULL;

//     // returnList(head);
//     while (head != NULL)
//     {
//         cout << head->value << endl;
//         head = head->next;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
};
void insertNode(ListNode **head, int valnew)
{
    // Preparing a 'headnew'
    // Put it in the front  of the current head
    // Move head of the list to point to the 'headnew'
    ListNode *headnew = new ListNode();
    headnew->val = valnew;
    headnew->next = *head;
    *head = headnew;
}
int main()
{
    ListNode *head = new ListNode();
    ListNode *first = new ListNode();
    ListNode *second = new ListNode();

    head->val = 3;
    head->next = first;

    first->val = 6;
    first->next = second;

    second->val = 8;
    second->next = NULL;

    insertNode(&head, 40);
    insertNode(&head, 39);

    while (head != NULL)
    {
        cout << head->val << endl;
        head = head->next;
    }
};