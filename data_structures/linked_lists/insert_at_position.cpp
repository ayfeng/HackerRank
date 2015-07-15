//https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list
Node* InsertNth(Node* head, int data, int position) {
    if (position == 0) {
        Node* newNode = new Node{data, head};
        head = newNode;
    } else {
        Node* prev;
        Node* curr = head;
        for (int i = 0; i != position; ++i) {
            prev = curr;
            curr=  curr->next;
        }
        Node* newNode = new Node{data, curr};
        prev->next = newNode;
    }
    return head;
}
