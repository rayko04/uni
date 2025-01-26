#include <iostream>

template <typename T>
struct node
{
    T data{};
    node* next{NULL};
};

template <typename T>
class stack
{
    private:
        node<T>* head{NULL};
    public:
        bool empty() {return head == NULL;}

        void push(T val)
        {
            node<T>* newer{new node<T>};
            newer->data = val;
            newer->next = head;
            head = newer;
        }

        void pop()
        {
            if(empty())
            {
                std::cout << "empty!\n";
                return;
            }
            node<T>* temp{head};
            head = head->next;
            delete temp;
        }

        void show()
        {
            if(empty())
                return;
            
            node<T>* temp{head};
            while(temp != NULL)
            {
                std::cout << temp->data << '\n';
                temp = temp->next;
            }
            std::cout << '\n';
        }

        T top()
        {
            return head->data;
        }

        std::size_t size()
        {
            std::size_t size{};
            node<T>* temp{head};

            while(temp != NULL)
            {
                size++;
                temp = temp->next;
            }

            return size;
        }
};

int main()
{
    stack<int> s{};
    s.push(5);
    s.push(3);
    s.pop();
    s.push(56);
    s.push(9);
    std::cout << s.top();
    std::cout << s.size();

    return 0;
}
