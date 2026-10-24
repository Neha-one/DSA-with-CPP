#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
class List
{
public:
    Node *head;
    Node *tail;
    Node *evenHead;
    Node *evenTail;
    Node *oddHead;
    Node *oddTail;

    List()
    {
        head = tail = evenHead = evenTail = oddHead = oddTail = NULL;
    }
    // void OddEvenLL()
    // {
    //     Node *odd = head;
    //     Node *even = head;
    //     while (odd != NULL && even != NULL && odd->next != NULL && even->next != NULL)
    //     {
    //         if (even->next->data % 2 == 0)
    //         {
    //             even = even->next;
    //             odd = odd->next;
    //         }
    //         else if (odd->next->data % 2 != 0)
    //         {
    //             odd = odd->next;
    //         }
    //         else if (odd->next->data % 2 == 0)
    //         {
    //             int temp = even->next->data;
    //             even->next->data = odd->next->data;
    //             odd->next->data = temp;
    //             even = even->next;
    //             odd = odd->next;
    //         }
    //     }
    // }

    void OddEvenLL()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            Node *next = temp->next;
            temp->next = NULL;
            if (temp->data % 2 == 0)
            {
                if (evenHead == NULL)
                {
                    evenHead = evenTail = temp;
                }
                else
                {
                    evenTail->next = temp;
                    evenTail = temp;
                }
            }
            else if (temp->data % 2 != 0)
            {
                if (oddHead == NULL)
                {
                    oddHead = oddTail = temp;
                }
                else
                {
                    oddTail->next = temp;
                    oddTail = temp;
                }
            }
            temp = next;
        }
        if (evenHead == NULL)
            head = oddHead;
        else
        {
            evenTail->next = oddHead;
            head = evenHead;
        }
        tail = (oddTail != NULL) ? oddTail : evenTail;
        printList(head);
    }
    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
            tail->next = NULL;
        }
    }
    void printList(Node *temp)
    {
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
int main()
{
    List ll;
    ll.push_back(8);
    ll.push_back(12);
    ll.push_back(10);
    ll.push_back(5);
    ll.push_back(4);
    ll.push_back(1);
    ll.push_back(6);
    ll.OddEvenLL();
    return 0;
}