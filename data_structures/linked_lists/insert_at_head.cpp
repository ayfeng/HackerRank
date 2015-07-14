Node* Insert(Node *head, int data) {
    Node* newNode = new Node{data, head};
    head = newNode;
    return head;
}
