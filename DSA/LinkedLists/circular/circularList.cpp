#include <iostream>

struct node
{
    int data{};
    node* next{nullptr};
};

class circList
{
    private:
        node* head{nullptr};            //using head is hella inefficient, increases time complexity so we use last
    public:
        bool empty() {return head == nullptr;}

        node* search(int val)
        {
            node* temp{head};
            do
            {
                if(temp->data == val)
                    return temp;
                temp = temp->next;
            }
            while(temp != head);
            return nullptr;
        }

        void insertAtHead(int val)          //sir ver better
        {
            node* newer{new node};
            newer->data = val;
            
            if(empty())
                newer->next = newer;    //point to itself if empty
            else
            {
                node* temp{head};

                while(temp->next != head)       //while temp isnt node before head(last)
                    temp = temp->next;

                temp->next = newer;
                newer->next = head;
            }
            head = newer;
        }

        void insertAtEnd(int val)       //sir ver better
        {
            node* newer{new node};
            newer->data = val;

            if(empty())
            {
                newer->next = newer;    //insertAtHead();
                head = newer;
            }
            else
            {
                node* temp{head};
                while(temp->next != head)
                    temp = temp->next;
                
                temp->next = newer;
                newer->next = head;
            }                           //only difference from atHead is exclusion of head = newer;
        }

        void insertAfter(int val, int key)
        {
            node* newer{new node};
            newer->data = val;

            if(empty())
            {
                newer->next = newer;    //insertAtHead();
                head = newer;
                return;
            }

            node* found{search(key)};
            if(found == nullptr)
            {
                std::cout << key  << " not found\n";
                delete newer;
                return;
            }

            /* if(found->next == head)      //no need,
                insertAtEnd(val); */

            newer->next = found->next;
            found->next = newer;
        }

        void insertBefore(int val, int key)
        {
            node* newer{new node};
            newer->data = val;

            if(empty())
            {
                newer->next = newer;    //insertAtHead();
                head = newer;
                return;
            }

            node* found{search(key)};
            if(found == nullptr)
            {
                std::cout << key  << " not found\n";
                delete newer;
                return;
            }

            if(found == head)
            {
                insertAtHead(val);
                return;
            }
            
            node* temp{head};
            while(temp->next != found)
                temp=temp->next;
            temp->next = newer;
            newer->next = found;
        }

        void deleteAtHead()
        {
            if(empty())
            {
                std::cout << "empty!" << '\n';
                return;
            }

            node* temp = head;

            if(head->next == head)      //for single node
            {
                std::cout << "deleted value: " << temp->data << '\n';
                delete temp;
                head = nullptr;
                return;
            }

            node* temp2{head};
            while(temp2->next != head)
                temp2=temp2->next;

            head = temp->next;
            temp2->next = head;
            std::cout << "deleted value: " << temp->data << '\n';
            delete temp;
        }

        void deleteAtEnd()
        {
            if(empty())
            {
                std::cout << "empty!" << '\n';
                return;
            }

            node* temp1{head};
            if(head->next == head)
            {
                std::cout << "deleted value: " << temp1->data << '\n';
                delete temp1;
                head = nullptr;
                return;
            }

            
            node* temp2{nullptr};
            while(temp1->next != head)
            {
                temp2 = temp1;
                temp1 = temp1->next;
            }

            temp2->next = head;
            std::cout << "deleted value: " << temp1->data << '\n';
            delete temp1;
        }

        void deleteAfter(int key)
        {
            if(empty())
            {
                std::cout << "empty!" << '\n';
                return;
            }

            node* found{search(key)};

            if(found == nullptr)
            {
                std::cout << key << " not found." << '\n';
                return;
            }
            else if(found->next == head)
            {
                deleteAtHead();
                return;
            }
        
            node* temp{found->next};
            found->next = temp->next;
            delete temp;
        }

        void deleteBefore(int key)
        {
            if(empty())
            {
                std::cout << "empty!" << '\n';
                return;
            }

            node* found{search(key)};

            if(found == nullptr)
            {
                std::cout << key << " not found." << '\n';
                return;
            }
            if(found == head)
            {
                deleteAtEnd();
                return;
            }
            if(found == head->next)
            {
                deleteAtHead();
                return;
            }

            node* temp{head};
            while(temp->next->next != found)
                temp = temp->next;

            node* temp2 = temp->next;
            temp->next = found;
            delete temp2;
        }

        void deleteParticular(int key)
        {
            if(empty())
            {
                std::cout << "empty!" << '\n';
                return;
            }

            node* found{search(key)};

            if(found == NULL)
            {
                std::cout << key << " not found." << '\n';
                return;
            }

            if(found == head)
                deleteAtHead();
            else if(found->next == head)
                deleteAtEnd();
            else
            {
                node* temp{head};
                while(temp->next != found)
                    temp = temp->next;

                temp->next = found->next;
                delete found;
            }
        }

        /* void deleteAll()
        {
            while(head->next != head)
            {
                node* temp{head->next};
                deleteParticular(temp->data);
            }
            deleteAtHead();
        } */

       void deleteAll()
        {
            node* temp{head};

            do
            {
                node* temp2{temp};
                temp = temp->next;

                delete temp2;
            }
            while(temp != head);

            head = nullptr;
        }

        void reverse()
        {
            node* prev{head};
            node* curr{head};
            node* next{head->next};
            while(prev->next != head)
                prev = prev->next;

            do
            {
                curr->next = prev;
                prev = curr;
                curr = next;
                next = next->next;
            }
            while(curr != head);
            head->next = prev;
            head = prev;
        }

        void show()
        {
            if(empty())
                return;

            node* temp{head};
            do
            {
                std::cout << temp->data << " ";
                temp = temp->next;
            }
            while(temp != head);
            std::cout << '\n';
        }

};

int main()
{
    circList l{};
    l.insertAtHead(2);
    l.insertAtHead(3);
    l.insertAtEnd(1);
    l.insertAfter(11, 1);
    l.insertBefore(7, 11);

    l.show();
    l.reverse();
    l.show();

    return 0;
}
