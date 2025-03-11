#include <iostream>
#include <unordered_map>		//it is a bultin chaining/probing hash example(O(1) to O(n))
                                //map on other hand is ordered non-hash(uses tree traversal) O(logn)

int main() {
    std::unordered_map<int, std::string> myMap;

    myMap[1] = "Alice";
    myMap[11] = "Bob"; // Likely collision with key 1 (if size is 10)

    for (auto& pair : myMap) {
        std::cout << "Key: " << pair.first << " -> Value: " << pair.second << std::endl;
    }
}
