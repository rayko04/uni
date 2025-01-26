#include <iostream>
#include <vector>

constexpr std::size_t SIZE{100};

template <typename T>
class MyArray
{
private:
    T m_arr[SIZE]{};
    std::size_t m_length{0};

    void Merge(auto l, auto mid, auto h)
    {

        std::vector<T> vec(h - l + 1); // c style array doesnot support dynamc/runtime memory allocation

        std::size_t i{l}, j{mid + 1}, length{0};

        while (i <= mid && j <= h)
        {
            if (m_arr[i] <= m_arr[j])
            {
                vec[length++] = m_arr[i++];
            }
            else
            {
                vec[length++] = m_arr[j++];
            }
        }

        while (i <= mid)
        {
            vec[length++] = m_arr[i++];
        }
        while (j <= h)
        {
            vec[length++] = m_arr[j++];
        }

        for (std::size_t index{0}; index < length; index++)
        {
            m_arr[l + index] = vec[index];
        }
    }

    std::size_t Partition(auto l, auto h)
    {
        T pivot{m_arr[l]};
        auto i{l}, j{h};

        while (i < j)
        {
            do
            {
                i++;
            } while (i < h && m_arr[i] <= pivot);

            do
            {
                j--;
            } while (j > l && m_arr[j] > pivot);

            if (i < j)
                std::swap(m_arr[i], m_arr[j]);
        }

        std::swap(m_arr[l], m_arr[j]);
        return j;
    }

public:
    std::size_t Length() const { return m_length; }
    std::size_t Capacity() const { return SIZE; }

    void showArray()
    {
        std::cout << "The Array is: \n";
        for (std::size_t i{0}; i < m_length; i++)
        {
            std::cout << m_arr[i] << '\n';
        }
    }

    void input(T val)
    {
        if (m_length >= SIZE)
        {
            std::cout << "ARRAY ALREADY AT MAX CAPACITY!";
            return;
        }

        m_arr[m_length++] = val;
    }

    void inputVector(const std::vector<T> &vec)
    {
        if (vec.size() > SIZE - m_length)
        {
            std::cout << "Vector too big!\n";
            return;
        }

        for (T val : vec)
        {
            m_arr[m_length++] = val;
        }
    }

    void insert(T val)
    {
        if (m_length >= SIZE)
        {
            std::cout << "ARRAY ALREADY AT MAX CAPACITY!";
            return;
        }

        if (m_length == 0)
        {
            m_arr[m_length++] = val;
            return;
        }

        std::size_t i{m_length};
        while(i > 0 && m_arr[i-1] > val)
        {
            m_arr[i] = m_arr[i-1];
            i--;
        }
        m_arr[i] = val;
        ++m_length; 
    }

    void bubbleSort()
    {
        
        for (std::size_t i{0}; i < m_length - 1; i++)
        {
            bool flag{false};
            for (std::size_t j{0}; j < m_length - 1 - i; j++)
            {
                if (m_arr[j + 1] < m_arr[j])
                {
                    std::swap(m_arr[j + 1], m_arr[j]);
                    flag = true;
                }
            }

            if (!flag)
            {
                std::cout << "Array Alr Sorted!\n";
                return;
            }
        }
    }

    void selectionSort()
    {
        for (std::size_t i{0}; i < m_length - 1; i++)
        {
            auto min{i};
            for (auto j{i + 1}; j < m_length; j++)
            {
                if (m_arr[j] < m_arr[min])
                    min = j;
            }
            std::swap(m_arr[min], m_arr[i]);
        }
    }

    void insertionSort()
    {
        for(std::size_t i{1}; i < m_length; i++)
        {
            T key{m_arr[i]};

            std::size_t j{i};
            while(j > 0 && m_arr[j-1] > key)
            {
                m_arr[j] = m_arr[j-1];
                j--;
            }
            m_arr[j] = key;
        }
    }

    void mergeSort(std::size_t l = 0, std::size_t h = SIZE - 1) // default values can only be compile time const
    {
        if (h == SIZE - 1)
            h = m_length - 1;

        if (l < h)
        {
            auto mid{(h + l) / 2};
            mergeSort(l, mid);
            mergeSort(mid + 1, h);
            Merge(l, mid, h);
        }
    }

    void quickSort(std::size_t l = 0, std::size_t h = SIZE)
    {
        if (h == SIZE)
            h = m_length; // since h is exclusive(h should be infinity)

        if (l < h)
        {
            auto pivot{Partition(l, h)};        //returns index of next pivot
            quickSort(l, pivot);
            quickSort(pivot + 1, h);
        }
    }
};

int main()
{
    MyArray<int> a{};

    a.input(12);
    a.input(5);

    a.inputVector({68, 14, 27, 9, 34, 100, 1, 54});
    a.insertionSort();
    a.insert(18);
    a.insert(-2);
    a.showArray();

    return 0;
}
