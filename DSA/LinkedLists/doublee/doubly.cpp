#include <iostream>

struct node
{
    int data{};
    node* right{nullptr};
    node* left{nullptr};
};

class doublee
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

        void insertAtHead(int val)
        {
            node* newer{new node};
            newer->data = val;
            
            if(!empty())            //if empty right and left of newer should be nulled which is handled by default initialization
            {
                newer->right = head;
                head->left = newer;
            }
            head = newer;
        }

        void insertAtEnd(int val)
        {
            node* newer{new node};
            newer->data = val;

            if(empty())
            {
                head = newer;
                return;
            }

            node* temp{head};
            while(temp->right != nullptr)
                temp = temp->right;

            temp->right = newer;    //newer right is nullptr by default
            newer->left = temp;
        }

        void insertAfter(int key, int val)
        {
            node* newer{new node};
            newer->data = val;

            if(empty())
            {
                head = newer;
                return;
            }

            node* found{search(key)};
            if(found == nullptr)
            {
                std::cout << key << " not found\n";
                delete newer;       //if key not found remove the node we created
                return;             // then return
            }

            newer->left = found;
            newer->right = found->right;
            if(found->right != nullptr)         //if found isnt at end 
                found->right->left = newer;     //update the left addr of found->right
            found->right = newer;               //then update found->right
        }

        void insertBefore(int key, int val)
        {
            node* newer{new node};
            newer->data = val;

            if(empty())
            {
                head = newer;
                return;
            }

            node* found{search(key)};
            if(found == nullptr)
            {
                std::cout << key << " not found\n";
                delete newer;
                return;
            }

            newer->left = found->left;
            newer->right = found;
            if(found == head)                    //if inserting at head
                head = newer;                    //update head
            else                                 //if not
                found->left->right = newer;      //update the prev node
            found->left = newer;
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

            head = temp;                    //update head(incase of single node temp would be null)
        }

        void delAtEnd()
        {
            if(empty())
            {
                std::cout << "empty!\n";
                return;
            }

            if(head->right == nullptr)      //if single node
            {
                delete head;
                head = nullptr;
                return;
            }

            node* temp{head};
            while(temp->right != nullptr)
                temp = temp->right;

            temp->left->right = nullptr;
            delete temp;
        }

        /* void delAtEnd()
        {
            if(empty())
                return;

            node* temp{head};
            while(temp->right != nullptr)
                temp = temp->right;

            if(temp == head)
                head = nullptr;
            else
                temp->left->right = nullptr;
            delete temp;
        } */

        void delAfter(int key)
        {
            if(empty())
            {
                std::cout << "empty!\n";
                return;
            }

            node* found{search(key)};
            if(found == nullptr)
            {
                std::cout << key << " not found\n";
                return;
            }

            if(found->right == nullptr)                 //if found is last node
                std::cout << "nothing to del\n";
            else
            {
                node* temp{found->right};           
                found->right = temp->right;

                if(temp->right != nullptr)          //if temp(to del) isnt last node
                    temp->right->left = found;      //update the left of node after temp

                delete temp;
            }
        }

        void delBefore(int key)
        {
            if(empty())
            {
                std::cout << "empty!\n";
                return;
            }

            node* found{search(key)};
            if(found == nullptr)
            {
                std::cout << key << " not found\n";
                return;
            }

            if(found == head)
            {
                std::cout << "nothing to del\n";
                return;
            }

            node* temp{found->left};
            if(temp == head)
                head = found;
            else
                temp->left->right = found;

            found->left = temp->left;
            delete temp;
        }

        void delParticular(int key)
        {
            if(empty())
            {
                std::cout << "empty!\n";
                return;
            }

            node* found{search(key)};
            if(found == nullptr)
            {
                std::cout << key << " not found\n";
                return;
            }

            if(found == head)
                delAtHead();
            else if(found->right == nullptr)
                delAtEnd();
            else
            {
                found->left->right = found->right;
                found->right->left = found->left;
                delete found;
            }
        }

        /* void deleteParticular(int key)
        {
            node* found{search(key)};
            if(found == nullptr)
            {
                std::cout << key << " not found\n";
                return;
            }

            if(found == head)
                head = found->right;
            else
                found->left->right = found->right;

            if(found->right != nullptr)
                found->right->left = found->left;

            delete found;
        } */

        void reverse()
        {
            node* prev{nullptr}, * curr{head};
            while(curr != nullptr)
            {
                curr->left = curr->right;
                curr->right = prev;

                prev = curr;
                curr = curr->left;
            }
            head = prev;
        }

        /* void reverse()
        {
            node* temp{nullptr};
            node* temp2{head};

            while(temp2 != nullptr)
            {
                temp = temp2->left;
                temp2->left = temp2->right;
                temp2->right = temp;

                temp2 = temp2->left;
            }

            if(temp != nullptr)
                head = temp;
        } */

       void reverseRecursion(node* temp2)
        {
            if(temp2 == nullptr)        //if empty list(nullptr temp2 is passed)
                return;

            node* temp{temp2->left};
            temp2->left = temp2->right;
            temp2->right = temp;

            if(temp2->left == nullptr)      //base case: if this is last, make it new head.
            {
                head = temp2;
                return;
            }

            reverseRecursion(temp2->left);
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
    doublee l{};
    l.insertAtHead(2);
    l.insertAtHead(1);
    l.insertAtEnd(4);
    l.insertAtEnd(5);
    l.insertAfter(4, 8);

    l.display();
    l.reverse();
    l.display();

    return 0;
}
