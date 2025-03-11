#include <iostream>
#include <list>

class hashTable
{
	private:
		static constexpr int SIZE{10};
		std::list<int> table[SIZE];

		int hashFunc(int key) {return key%SIZE;}
	
	public:
		void insert(int key)
		{
			auto index{hashFunc(key)};
			table[index].push_back(key);
		}

		bool search(int key)
		{
			auto index{hashFunc(key)};
			
			for(auto val: table[index])
			{
				 if (val == key)
				 	return true;
			}
			return false;
		}

		void remove(int key)
		{
			auto index{hashFunc(key)};
			table[index].remove(key);
		}

		void display()
		{
			for(int i{0}; i < SIZE; i++)
			{
				std::cout << "Bucket " << i << ": ";
				if(table[i].empty())
					std::cout << "empty";
				else
				{
					for(auto val : table[i])
					{
						std::cout << val << " ";
					}
				}
					std::cout << std::endl;
			}
			std::cout << std::endl;
		}

};

int main()
{
	hashTable hh{};
	hh.insert(45);
	hh.insert(50);
	hh.insert(12);
	hh.insert(52);

	hh.display();

	std::cout << "Searching for 52: " << (hh.search(52) ? "Found" : "Not Found") << std::endl;
    hh.remove(52);
	hh.display();

	return 0;
}
