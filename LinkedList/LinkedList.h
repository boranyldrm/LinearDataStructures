class LinkedList {
public:
    LinkedList();
    LinkedList(const LinkedList &input);
    void insert(int data);
    void remove(int data);
    void display();
private:
    struct Node {
        int data;
        Node *next;
    };
    Node *head;
};
