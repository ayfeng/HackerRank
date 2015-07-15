#include <stack>
void ReversePrint(Node* head) {
    stack<int> s;

    for (Node* curr = head; curr != nullptr; curr = curr->next)
        s.push(curr->data);

    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
}
