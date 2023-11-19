class Solution {
public:
    Node* findIntersection(Node* head1, Node* head2) {
        Node* intersectionHead = nullptr;
        Node* intersectionTail = nullptr;

        while (head1 && head2) {
            if (head1->data == head2->data) {
                // Found an intersection, add it to the new list
                if (intersectionHead == nullptr) {
                    intersectionHead = intersectionTail = new Node(head1->data);
                } else {
                    intersectionTail->next = new Node(head1->data);
                    intersectionTail = intersectionTail->next;
                }
                head1 = head1->next;
                head2 = head2->next;
            } else if (head1->data < head2->data) {
                head1 = head1->next;
            } else {
                head2 = head2->next;
            }
        }

        return intersectionHead;
    }
};
