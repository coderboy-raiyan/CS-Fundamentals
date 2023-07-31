/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *removeDuplicates(Node *&head)
{
    if (head == NULL)
    {
        return head;
    }
    Node *temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        if (temp->data == temp->next->data)
        {
            Node *deleteNode = temp->next;
            temp->next = temp->next->next;
            if (temp->next)
            {
                temp->next->prev = temp;
            }
            delete deleteNode;
        };
        if (temp->next == NULL)
        {
            break;
        }
        if (temp->data != temp->next->data)
        {
            temp = temp->next;
        }
    };
    return head;
}
