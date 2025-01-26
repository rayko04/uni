#include <iostream>

constexpr int SIZE{5};

class Queue
{
    private:
        int arr[SIZE];
        std::size_t rear{0}, front{0}, count{0};

        public:

            bool isFull()
            {
                return count == SIZE;
            }

            bool isEmpty()
            {
                return count == 0;
            }

            void enqueue(int val)
            {
                if(isFull())
                {
                    std::cout << "Queue full!";
                    return;
                }

                arr[rear++] = val;
                count++;
            }

            void dequeue()
            {
                if(isEmpty())
                {
                    std::cout << "Queue empty!" << '\n';
                    return;
                }
                
                std::cout << arr[front] << "dequeued" << '\n';
                front++;
                count--;
            }

            int peek()
            {
                if(isEmpty())
                {
                    std::cout << "Queue empty!" << '\n';
                    return -1;      //////
                }

                return(arr[front]);
            }

            void display()
            {
                if(isEmpty())
                {
                    std::cout << "Queue empty!" << '\n';
                    return;
                }

                for(std::size_t i{0}; i < count; i++)
                {
                    std::cout << arr[front+i] << " ";
                }

                std::cout << '\n';
            }
};

int main()
{
    Queue q;

    q.enqueue(54);
    q.enqueue(2);
    q.enqueue(12);
    q.enqueue(33);
    q.enqueue(23);

    q.display();

    q.dequeue();
    q.display();

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    q.display();

    /* q.enqueue(2);   //once linear queue is full, it wont work as intented afte next dequeue cos rear is maxed 
    q.enqueue(12);
    q.enqueue(33);
    q.enqueue(23);
    q.display();         */

    return 0;
}
