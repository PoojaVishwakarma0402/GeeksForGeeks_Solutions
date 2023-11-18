class Solution
{
public:
    Node* reverseDLL(Node * head)
    {
        if (head == nullptr || head->next == nullptr) {
            return head; // If the list is empty or has only one node, return as is
        }
        
        Node *prev = nullptr;
        Node *current = head;
        
        while (current != nullptr) {
            // Swap prev and next pointers
            Node *nextNode = current->next;
            current->next = prev;
            current->prev = nextNode; // Update the prev pointer
            
            // Move pointers one step ahead
            prev = current;
            current = nextNode;
        }
        
        // 'prev' will be the new head after reversal
        return prev;
    }
};

