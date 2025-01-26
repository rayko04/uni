#include <iostream>

struct node
{
    int data{};
    node* next{nullptr};
};

class stack
{
    private:
        node* last{nullptr};            //since it is circular, we consider the first node as last, and the next one as first(which is head normally)
    public:                             //so insert at head here is insert at last(first node), insertAtEnd at last node which loops back to last again    
        bool empty() {return last == nullptr;}
        void insert(int val)                //at head
        {
            node* newer{new node};
            newer->data = val;
                                                            //1 4 3 2 stack insert(at head)(can be read as 4 3 2 1 where 4 can be taken as head and 1 is last)
            if(empty())
                last = newer;                               //1 2 3 4 queue insert(at end)
            else
                newer->next = last->next;

            last->next = newer;
            // last = newer;     //add this for queue(at end)
        }

        void pop()      //at head
        {
            if(empty())
                return;

            node* temp{last->next};

            if(last == temp)
                last = nullptr;
            else
                last->next = temp->next;
            std::cout << "del val: " << temp->data << '\n';
            delete temp;
        }

        void show()
        {
            if(empty())
                return;

            node* temp{last->next};
            do
            {
                std::cout << temp->data << " ";
                temp = temp->next;
            }
            while(temp != last->next);
            std::cout << '\n';
        }
};

int main()
{
    stack s{};
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.show();
    s.pop();
    s.show();

}
