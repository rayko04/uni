#include <iostream>

struct node
{
    int data{};
    node* next{nullptr};
};

class cirList
{
private:
    node* head{nullptr};
public:
    bool empty() { return head == nullptr; }

    node* search(int val)
    {
        node* temp{head};
        do
        {
            if (temp->data == val)
                return temp;
            temp = temp->next;
        }
        while (temp != head);
        return nullptr;
    }

    void insertAtEnd(int val)
    {
        node* newer{new node};
        newer->data = val;

        if (empty())
        {
            newer->next = newer;
            head = newer;
        }
        else
        {
            node* temp{head};
            while (temp->next != head)
                temp = temp->next;

            temp->next = newer;
            newer->next = head;
        }
    }

    void delParticular(int key)
    {
        if (empty())
        {
            std::cout << "empty!" << '\n';
            return;
        }

        node* found{search(key)};
        if (found == nullptr)
        {
            std::cout << key << " not found." << '\n';
            return;
        }

        if (found == head && singleNode())
        {
            std::cout << head->data << " deleted\n";
            delete head;
            head = nullptr;
            return;
        }

        if (found == head)
        {
            head = found->next;
        }

        node* temp{head};
        while (temp->next != found)
            temp = temp->next;

        temp->next = found->next;

        std::cout << found->data << " deleted\n";
        delete found;
    }

    void show()
    {
        if (empty())
            return;

        node* temp{head};
        do
        {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        while (temp != head);
        std::cout << '\n';
    }

    bool singleNode() { return head->next == head; }
};

void makeList(cirList& l, int n)
{
    for (int i{1}; i <= n; i++)
        l.insertAtEnd(i);
}

// Non-member function to solve Josephus problem
void josephusWin(cirList& l, int n, int k)
{
    int remaining = n;  // To keep track of the number of remaining players
    node* current = l.search(1);  // Start from the first player (node with data 1)

    while (remaining > 1)  // Continue until only one player remains
    {
        // Find the k-th player to be eliminated
        for (int i = 1; i < k; i++)  // Move k-1 steps
        {
            current = current->next;
        }

        // Delete the k-th player
        node* toDelete = current;
        current = current->next;  // Move to the next player
        l.delParticular(toDelete->data);  // Delete the node
        remaining--;  // Decrease the remaining players count
    }
}

int main()
{
    std::cout << "Enter number of players: ";
    int n{};
    std::cin >> n;

    cirList l{};
    makeList(l, n);

    std::cout << "Enter number of players to skip before a kill: ";
    int k{};
    std::cin >> k;

    l.show();
    josephusWin(l, n, k);
    l.show();

    return 0;
}
