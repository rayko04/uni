#include <iostream>

struct node
{
    int data{};
    node* right{nullptr};
    node* left{nullptr};
    node* tail{nullptr};
};

class queue
{
    private:
        node* head{nullptr};
    public:
        bool empty() {return head == nullptr;}
        node* search(int key)
        {
            node* temp{head};
            while(temp != nullptr)
            {
                if(temp->data == key)
                    return temp;
                temp = temp->right;
            }
            return nullptr;
        }

        void insertAtEnd(int val)
        {
            node* newer{new node};
            newer->data = val;

            if(empty())
            {
                head = tail = newer;
                return;
            }

            tail->right = newer;    //newer right is nullptr by default
            newer->left = tail;
            tail = newer;
        }


        void delAtHead()
        {
            if(empty())
            {
                std::cout << "empty!\n";
                return;
            }

            node* temp{head->right};
            delete head;

            if(temp != nullptr)             //if multi nodes,
                temp->left = nullptr;       //update left of next node(new head)
            else
                tail = nullptr;

            head = temp;                    //update head(incase of single node temp would be null)
        }

        void display()
        {
            node* temp = head;
            while (temp != nullptr)
            {
                std::cout << temp->data << " ";
                temp = temp->right;
            }
            std::cout << std::endl;
        }
};

int main()
{
    queue l{};

    l.insertAtEnd(4);
    l.insertAtEnd(7);
    l.insertAtEnd(98);
    l.display();
    l.delAtHead();
    l.delAtHead();
    l.insertAtEnd(3);
    l.display();

    l.display();

    return 0;
}
