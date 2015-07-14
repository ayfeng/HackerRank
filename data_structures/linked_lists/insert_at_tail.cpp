Node* Insert(Node* head, int data) {
    Node* newNode = new Node{data, nullptr};

    if (head==nullptr)
        head = newNode;
    else {
        Node* node = head;
        for(;node->next != nullptr; node = node->next);
        node->next = newNode;
    }
    return head;
}
