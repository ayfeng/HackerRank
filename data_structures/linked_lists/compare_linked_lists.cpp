int CompareLists(Node* headA, Node* headB) {
    for (Node *first = headA, *second = headB; first != nullptr || second != nullptr; first = first->next, second = second->next) {
        if (first == nullptr || second == nullptr || first->data != second->data)
            return 0;
    }
    return 1;
}
