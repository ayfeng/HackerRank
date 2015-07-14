void Print(Node* head) {
    if (head != nullptr) {
        for (Node* node = head; node != nullptr; node = node->next) {
            cout << node->data << endl;
        }
    }
}
