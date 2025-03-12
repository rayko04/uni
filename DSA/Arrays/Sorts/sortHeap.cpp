#include <iostream>
#include <vector>

auto lc(auto i) {return 2*i+1;}	//2*1 if index starts from 1
auto rc(auto i) {return 2*i+2;}	//2*i+1 if index starts from 1

void heapify(std::vector<int>& vec, std::size_t n, std::size_t i)
{
	auto max{i};
	auto left{lc(i)};
	auto right{rc(i)};

	if(left < n && vec[left] > vec[max])
		max = left;
	if(right < n && vec[right] > vec[max])
		max = right;

	if(max != i)
	{
		std::swap(vec[i], vec[max]);
		heapify(vec, n, max);
	}
}

void heapSort(std::vector<int>& vec)
{
	//build heap(insertion through heapify)
	for(std::size_t i{vec.size()/2 -1}; static_cast<int>(i) >= 0; i--)	//size/2 if index starts from 1
	{
		heapify(vec, vec.size(), i);
	}

	//sort heap(deletion from heap)
	for(std::size_t i{vec.size()-1}; i >= 1; i--)
	{
		std::swap(vec[0], vec[i]);
		heapify(vec, i, 0);
	}

}

void print(std::vector<int>& vec)
{
	for(auto val: vec)
	{
		std::cout << val << " ";
	}
}

int main()
{
	std::vector<int> vec{12, 11, 56, 9, 98};

	heapSort(vec);
	print(vec);

	return 0;
}
