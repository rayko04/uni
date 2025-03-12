#include <iostream>
#include <vector>

std::size_t Partition(std::vector<int>& vec, auto l, auto h) {
	auto pivot{vec[l]};	
	auto i{l}, j{h};

	while(i < j) {
		do{
			i++;
		}
		while(i < h && vec[i] >= pivot);	//doing in descending

		do{
			j--;
		}
		while(j > l && vec[j] < pivot);

		if(i < j)
			std::swap(vec[i], vec[j]);
	}

	std::swap(vec[l], vec[j]);
	return j;
}

auto rPartition(std::vector<int>& vec, std::size_t l, std::size_t h) {

	std::size_t rIndex{l + static_cast<std::size_t>(rand()) % (h - l)};
	std::swap(vec[rIndex], vec[l]);
	return Partition(vec, l, h);
}

void rQuickSort(std::vector<int>& vec, std::size_t l, std::size_t h) {

	if(l < h-1) {			//to prevent recursion when only 1 element(since h is exclusive)
		auto pivot{rPartition(vec, l, h)};

		rQuickSort(vec, l, pivot);
		if(pivot + 1 < h)				//so that pivot doesnt get randomly assigned with h(which is exclusive)
			rQuickSort(vec, pivot+1, h);
	}
}

int main() {

	std::vector<int> vec{12, 78, 54, 1, 9};

	rQuickSort(vec, 0, vec.size());

	for(auto val: vec)
	{
		std::cout << val << ' ';
	}
}
