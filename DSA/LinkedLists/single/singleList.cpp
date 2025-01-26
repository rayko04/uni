#include <iostream>

struct node 
{
    int data{};
    node* next{NULL};
};

class singleList
{
    private:
        node* head{NULL};
        bool empty() {return head == NULL;}

    public:

        node* search(int val)
        {
            node* temp{head};
            while(temp != NULL)
            {
                if(temp->data == val)
                    return temp;
                temp = temp->next;
            }
            return NULL;
        }

        void insertAtHead(int val)
        {
            node* newer = new node;
            newer->data = val;
            newer->next = head;
            head = newer;
        }

        void insertAtEnd(int val)
        {
            if(empty())
            {
                insertAtHead(val);
                return;
            }

            node* temp{head};
            while(temp->next != NULL)
            {
                temp = temp->next;
            }

            node* newer{new node};
            newer->data = val;
            newer->next = NULL;
            temp->next = newer;
        }

        void insertAfter(int val, int key)
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
            /* else if(found->next == NULL)     //no need
                insertAtEnd(val); */
            else
            {
                node* newer{new node};
                newer->data = val;
                newer->next = found->next;
                found->next = newer;
            }
        }

        void insertBefore(int val, int key)
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
            else if(found == head)
                insertAtHead(val);
            else
            {
                node* newer{new node};
                newer->data = val;
                newer->next = found;

                node* temp{head};
                while(temp->next != found)
                {
                    temp = temp->next;
                }
                temp->next = newer;
            }
        }

        void deleteAtHead()
        {
            if(empty())
            {
                std::cout << "empty!" << '\n';
                return;
            }

            node* temp = head;
            head = temp->next;
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

            if(head->next == NULL)
            {
                deleteAtHead();
                return;
            }

            node* temp1{head};
            node* temp2{NULL};
            while(temp1->next != NULL)
            {
                temp2 = temp1;
                temp1 = temp1->next;
            }

            temp2->next = NULL;
            std::cout << "deleted value: "<< temp1->data << '\n';
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

            if(found == NULL)
            {
                std::cout << key << " not found." << '\n';
                return;
            }
            else if(found->next == NULL)
            {
                std::cout << "nothing to del\n";
                return;
            }
            /* else if(found->next->next == NULL)       //no need
                deleteAtEnd(); */
        
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

            if(found == NULL)
            {
                std::cout << key << " not found." << '\n';
                return;
            }
            if(found == head)
            {
                std::cout << "Nothing to del\n";
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
            else if(found->next == NULL)
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

        void deleteAllBefore(int key)
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
            {
                std::cout << "nothing to del\n";
                return;
            }

            /* node* temp{head};
            while(temp != found)
            {
                int data{temp->data};
                temp = temp->next;
                deleteParticular(data);
            } */

            /* node* temp{head};
            while(temp != found)
            {
                temp = temp->next;
                deleteAtHead();
            }  */

            
            while(head != found)
            {
                node* toDel{head};
                head = head->next;
                delete toDel;
            }
        }

        void deleteAllAfter(int key)
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

            node* temp{found->next};
            while(temp != NULL)
            {
                node* temp2{temp};
                temp = temp->next;
                delete temp2;
            }
            found->next = NULL;
        }

        void delAllOccur(int val)
        {
            if(empty())
            {
                std::cout << "empty!" << '\n';
                return;
            }

            node* temp{head};
            node* prev{NULL};

            while(temp!=NULL)
            {
                if(temp->data == val)
                {
                    if(temp == head)
                    {
                        deleteAtHead();
                        temp = head;
                    }
                    else
                    {
                        prev->next = temp->next;
                        delete temp;
                        temp = prev->next;
                    }
                }
                else
                {
                    prev = temp;
                    temp = temp->next;
                }
            }
        }

        void show()
        {
            if(empty())
                return;
            
            node* temp{head};
            while(temp != NULL)
            {
                std::cout << temp->data << '\n';
                temp = temp->next;
            }
            std::cout << '\n';
        }

        void showR(node* temp)
        {
            if(temp == nullptr)
                return;

            std::cout << temp->data << " ";
            showR(temp->next);
        }

        void showR() {showR(head);}

        int sum()
        {
            node* temp{head};
            int sum{0};

            while(temp != NULL)
            {
                sum += temp->data;
                temp = temp->next;
            }

            return sum;
        }

        singleList sum(const singleList& l)
        {
            node* temp{head};
            node* temp2{l.head};

            singleList list{};
            while(temp != NULL && temp2 != NULL)
            {
                list.insertAtEnd(temp->data + temp2->data);
                temp = temp->next;
                temp2 = temp2->next;
            }

            while(temp != NULL)
            {
                list.insertAtEnd(temp->data);
                temp = temp->next;
            }
            while(temp2 != NULL)
            {
                list.insertAtEnd(temp2->data);
                temp2 = temp2->next;
            }

            return list;
        }

        singleList merge(const singleList& l)
        {
            node* temp{head};
            node* temp2{l.head};

            singleList list{};
            while(temp != NULL && temp2 != NULL)
            {
                if(temp->data <= temp2->data)
                {
                    list.insertAtEnd(temp->data);
                    temp = temp->next;
                }
                else
                {
                    list.insertAtEnd(temp2->data);
                    temp2 = temp2->next;
                }
            }

            while(temp != NULL)
            {
                list.insertAtEnd(temp->data);
                temp = temp->next;
            }
            while(temp2 != NULL)
            {
                list.insertAtEnd(temp2->data);
                temp2 = temp2->next;
            }

            return list;
        }

        singleList partition()
        {
            node* pivot{head};

            singleList list1{};

            while(pivot != NULL)
            {
                if(pivot->data % 2 == 0)        //pivot->data % 2 is true when there is a remainder
                    list1.insertAtHead(pivot->data);
                else
                    list1.insertAtEnd(pivot->data);

                pivot = pivot->next;
            }

            return list1;
        }

        void reverseData()
        {
            node* start{head};
            node* end{head};
            while(end->next != nullptr)
                end = end->next;

            while(start != end)
            {
                std::swap(start->data, end->data);

                start = start->next;
                node* temp{head};
                while(temp->next != end)
                    temp = temp->next;
                end = temp;
            }
        }

        void reverse()
        {
            node* temp1{nullptr}, * temp2{head}, * temp3{head->next};
            while(temp2 != nullptr)
            {
                temp2->next = temp1;
                temp1 = temp2;
                temp2 = temp3;
                if(temp3 != nullptr)
                    temp3 = temp3->next;
            }
            head = temp1;
        }

        void reverseRecursion(node* temp, node* temp2)
        {
            if(temp2 == nullptr)
            {
                head = temp;
                return;
            }
            
            node* temp3{temp2->next};
            temp2->next = temp;

            reverseRecursion(temp2, temp3);
        }
};

int main()
{
    singleList l1{};
    l1.insertAtHead(1);
    l1.insertAtEnd(51);
    l1.insertAtHead(67);

    l1.showR();

   /*  singleList l2{};

    l2.insertAtEnd(34);
    l2.insertAtEnd(89);

    singleList l3{l1.merge(l2)};
    l3.show(); */
    return 0;
}


