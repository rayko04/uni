#include <iostream>
#include <stack>

struct node
{
    int data{};
    node *right{nullptr}, *left{nullptr};

    node(int val) : data{val}, right{nullptr}, left{nullptr} {};
};

class bst
{
    private:
        node* root{nullptr};
    public:

        bool empty() {return root == nullptr;}
        node* getRoot() {return root;}

        bool isLeft(int val)
        {
            node* par{getParent(val)};
            if(par == nullptr)
                return false;
            
            return (par->left != nullptr && par->left->data == val);
        }

        bool isRight(int val)
        {
            node* par{getParent(val)};
            if(par == nullptr)
                return false;
            
            return (par->right != nullptr && par->right->data == val);   //if right is null right->data will give exception if null isnt checked

        }

        node* getParent(int val)
        {

            node* cur{root}, *par{nullptr};

            while(cur != nullptr)
            {
                if(val < cur->data)
                {
                    par = cur;
                    cur = cur->left;
                }
                else if(val > cur->data)
                {
                    par = cur;
                    cur = cur->right;
                }
                else
                    return par;
            }

            std::cout << val << " not found\n";
            return nullptr;
        }

        node* search(int val)
        {
            node* temp{root};

            while(temp != nullptr)
            {
                if(val < temp->data)
                    temp = temp->left;
                else if(val > temp->data)
                    temp = temp->right;
                else
                    return temp;
            }

            return nullptr;
        }

        void insert(int val)
        {
            if(empty())
            {
                root = new node(val);
                return;
            }

            node* cur{root}, *par{nullptr};

            while(cur != nullptr)
            {
                par = cur;
                if(val < cur->data)
                    cur = cur->left;
                else if(val > cur->data)
                    cur = cur->right;
                else
                {
                    std::cout << "duplicate val\n";
                    return;
                }
            }

            if(val < par->data)
                par->left = new node(val);
            else
                par->right = new node(val);
        }

        void del(int val)
        {
            node* cur{search(val)};
            node* par{getParent(val)};

            if(cur->left == nullptr && cur->right == nullptr)   //if leaf
            {
                if(isLeft(val))
                    par->left = nullptr;
                else
                    par->right = nullptr;
                delete cur;
            }
            
            else if(cur->left == nullptr) //if one child
            {
                node* child{cur->right};

                if(isLeft(val))
                    par->left = child;
                else
                    par->right = child;
                delete cur;
                return;
            }

            else if(cur->right == nullptr) //if one child
            {
                node* child{cur->left};

                if(isLeft(val))
                    par->left = child;
                else
                    par->right = child;
                delete cur;
                return;
            }

            else                //if two child
            {
                node* temp{cur->right};
                while(temp->left != nullptr)
                    temp = temp->left;
                
                int dTemp = temp->data;
                del(temp->data);
                cur->data = dTemp;
            }

        }

        void preOrder(node* temp)
        {
            if(temp == nullptr)
                return;

            std::cout << temp->data << ' ';
            preOrder(temp->left);
            preOrder(temp->right);
        }

        void preOrderStack()
        {
            if(root == nullptr)     //empty
                return;

            std::stack<node*> s{};
            s.push(root);

            while(!s.empty())
            {
                node* temp{s.top()};            //we take the top at each iteration as temp
                s.pop();                        //
                std::cout << temp->data << ' ';

                if(temp->right)
                    s.push(temp->right);        //push right first 
                if(temp->left)                  //then left
                    s.push(temp->left);         //so top will have left
            }
        }

        void inOrder(node* temp)
        {
            if(temp == nullptr)
                return;

            inOrder(temp->left);
            std::cout << temp->data << ' ';
            inOrder(temp->right);
        }

        void inOrder() { inOrder(root); }           //PUBLIC WRAPPER FUNCTION
        void inOrderStack()
        {
            if(root == nullptr)
                return;

            std::stack<node*> s{};
            node* temp{root};

            while(!s.empty() || temp != nullptr)    //till s is empty && temp == nullptr
            {
                while(temp != nullptr)
                {
                    s.push(temp);
                    temp = temp->left;
                }

                temp = s.top();
                s.pop();
                std::cout << temp->data << ' ';
                temp = temp->right;
            }
        }

        void postOrder(node* temp)
        {
            if(temp == nullptr)
                return;

            postOrder(temp->left);
            postOrder(temp->right);
            std::cout << temp->data << ' ';
        }

        void postOrderStack() 
        {
            if (root == nullptr) 
                return;

            std::stack<node*> s1, s2;
            s1.push(root);

            // Create a reversed post-order traversal using two stacks
            while (!s1.empty()) 
            {
                node* temp = s1.top();
                s1.pop();
                s2.push(temp);

                if (temp->left) s1.push(temp->left);
                if (temp->right) s1.push(temp->right);
            }

            // Print nodes in correct post-order
            while (!s2.empty()) 
            {
                std::cout << s2.top()->data << " ";
                s2.pop();
            }
        }

        int count(node* temp)
        {
            if(temp == nullptr)
                return 0;

            return 1 + count(temp->left) + count(temp->right);
        }

        int sum(node* temp)
        {
            if(temp == nullptr)
                return 0;

            return temp->data + sum(temp->left) + sum(temp->right);
        }
};

int main()
{
    bst t{};
    t.insert(5);
    t.insert(2);
    t.insert(7);
    t.insert(1);
    t.insert(10);
    t.insert(3);
    t.insert(11);

    t.inorder();

    std::cout << std::endl;
    t.del(5);
    t.preOrder(t.getRoot());

    return 0;
}
