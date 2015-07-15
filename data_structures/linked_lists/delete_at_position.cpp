Node* delete(Node* head, int position) {
    if (position == 0) {
        head = head->next;
    } else {
        Node* prev;
        Node* curr = head;

        for (int i = 0; i != position; ++i) {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
    }
    return head;
}
