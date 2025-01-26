#include <iostream>

struct node
{
    int data{};
    node* left{nullptr};
    node* right{nullptr};
    bool rthread{true};

    node(int val) : data{val}, next{nullptr}, right{nullptr}, rthread{true} {}
};

class bst
{
    private:
        node* root{nullptr};
    public:
        bool empty() {return root == nullptr;}

        node* search(int val)
        {
            
            node* temp{root};
            while(temp != nullptr)
            {
                if(val < temp->data)
                    temp = temp->left;
                else if(val > temp->data)
                {
                    if(!temp->rthread)
                        temp = temp->right;
                    else
                        break;
                }
                    
                else
                    return temp;
            }
            return nullptr;
        }

        void insert(int val)
        {
            if(empty())
                root = new node(val);
            
            node* cur{root}, * par{nullptr};
            while(cur != nullptr)
            {
                par = cur;
                if(val < cur->data)
                    cur = cur->left;
                else if(val > cur->data)
                {
                    if(!cur->rthread)
                        cur = cur->right;
                    else
                        break;
                }
                    
                else
                    return;
            }

            node* newer{new node(val)};

            if(val < par)
            {
                par->left = newer;
                newer->right = par;
            }
            else
            {
                newer->right = par->right;
                par->rthread = false;
                par->right = newer;
            }
        }

      void traversal()
      {
        node* temp{root};
        while(temp->left != nullptr)
            temp = temp->left;

        while(temp != nullptr)
        {
             std::cout << temp->data << " ";
             if(temp->rthread)
                temp = temp->right;
             else
            {
                temp = temp->right;
                while(temp->left != nullptr)
                    temp = temp->left;
            }
        }
      }
};


