#include <iostream>

void menu()
{
	std::cout << "1) Show array."     << std::endl;
	std::cout << "2) Sum of array."   << std::endl;
	std::cout << "3) Bubble sort."    << std::endl;
	std::cout << "4) Selection sort." << std::endl;
	std::cout << "5) Linear search."  << std::endl;
	std::cout << "6) Binary search."  << std::endl;
	std::cout << "7) Max No."         << std::endl;
	std::cout << "8) Min No."         << std::endl;
	std::cout << "9) Second Max No."  << std::endl;
	std::cout << "10) Second Min No." << std::endl;
	std::cout << "11) Exit"           << std::endl;
	
	std::cout << std::endl;
}

void showArray(int ar[], int size)
{
	for(int i = 0; i < size; i++)
	{
		std::cout << "value at index " << i << " is " << ar[i] << std::endl;
	}
}

int sumOfArray(int ar[], int size)
{
	int sum1 = 0;
	for(int i = 0; i < size; i++)
	{
		sum1 += ar[i];
	}
	
	return sum1;
}

void bubbleSort(int ar[], int size)
{
	for(int i = 0; i < size-1; i++)
	{
		for(int j = i+1; j < size; j++)
		{
			if(ar[i] > ar[j])                                       //wrong 
				std::swap(ar[i], ar[j]);
		}
	}
	std::cout << "Array sorted using bubble sort!" << std::endl;
}

void selectionSort(int ar[], int size)
{
	int min;
	for(int i = 0; i < size-1; i++)
	{
		min = i;
		for(int j = i+1; j < size; j++)
		{
			if(ar[j] < ar[min])
				min = j;
		}
			std::swap(ar[i], ar[min]);
	}
	std::cout << "Array sorted using selection sort!" << std::endl;
}

int linSearch(int ar[], int size, int key)
{
	int found1 = -1;
	for(int i = 0; i < size; i++)
	{
		if(ar[i] == key)
		{
			found1 = i;
			break;
		}
	}
		
	return found1;
} 

int binSearch(int ar[], int size, int key)
{
	int found1 = -1;
	int low = 0;
	int high = size-1;
	
	while(low <= high)
	{
		int mid = (high + low)/2;
		
		if(ar[key] < ar[mid])
			high = mid - 1;
		if(ar[key] > ar[mid])
			low = mid + 1;
		if(ar[key] == ar[mid])
			{
				found1 = mid;	
				break;
			}
	}
	
	return found1;
}

int maxNum(int ar[], int size)
{
	int max1 = ar[0];
	for(int i = 0; i < size; i++)
	{
		if(ar[i] > max1)
			max1 = ar[i];
	}	
	
	return max1;
}

int minNum(int ar[], int size)
{
	int min1 = ar[0];
	for(int i = 0; i < size; i++)
	{
		if(ar[i] < min1)
			min1 = ar[i];
	}	
	
	return min1;
}

int secondMaxNum(int ar[], int size)
{
	int max = maxNum(ar, size);
	int min = minNum(ar, size);
	
	int k = 0;
	int ar2[size];
	for(int i = 0; i < size; i++)
	{
		if(ar[i] != max && ar[i] != min)
		{
			ar2[k++] = ar[i];
		}
	} 
	int secondMax1 = ar2[0];
	for(int i = 0; i < k; i++)
	{
		if(ar2[i] > secondMax1)
			secondMax1 = ar2[i];
	}
	
	return secondMax1;
}

int secondMinNum(int ar[], int size)
{
	int max = maxNum(ar, size);
	int min = minNum(ar, size);
	
	int k = 0;
	int ar2[size];
	for(int i = 0; i < size; i++)
	{
		if(ar[i] != max && ar[i] != min)
		{
			ar2[k++] = ar[i];
		}
	} 
	int secondMin1 = ar2[0];
	for(int i = 0; i < k; i++)
	{
		if(ar2[i] < secondMin1)
			secondMin1 = ar2[i];
	}
	
	return secondMin1;
}

int main()
{
	const int SIZE = 5;
	int arr[SIZE];
	
	for(int i = 0; i < SIZE; i++)
	{
		std::cout << "Enter Value at " << i << " index: ";
		std::cin >> arr[i]; 
	}
	
	std::cout << std::endl;
	
	menu();
	
	char choice = 'y';
	int option;
	
	while(choice == 'y' || choice == 'Y')
	{
		std::cout << "Enter Option: ";
		std::cin >> option;
		std::cout << std::endl;
		
		if(option == 1)
			showArray(arr, SIZE);
		
		else if(option == 2)
		{
			int sum = sumOfArray(arr, SIZE);
			std::cout << "Sum is " << sum << std::endl;	
		}
		
		else if(option == 3)
			bubbleSort(arr, SIZE);
		
		else if(option == 4)
			selectionSort(arr, SIZE);
		
		else if(option == 5)
		{
			int key;
			std::cout << "Input Searchig No: ";
			std::cin >> key;
			
			int found = linSearch(arr, SIZE, key);
			
			if(found != -1)
				std::cout << key << " found at index " << found << std::endl;
			else
				std::cout << key << " not found." << std::endl;
		}		
		
		else if(option == 6)
		{	
		    selectionSort(arr, SIZE);
		    std::cout << "Array after sort" << std::endl;
		    showArray(arr, SIZE);
		    
			int key;
			std::cout << "Input Searchig No: ";
			std::cin >> key;
			
			int found = binSearch(arr, SIZE, key);
			
			if(found != -1)
				std::cout << key << " found at index " << found << std::endl;
			else
				std::cout << key << " not found." << std::endl;
		}	
		
		else if(option == 7)
		{
			int max = maxNum(arr, SIZE);
			std::cout << "Max no is " << max << std::endl;
		}
		
		else if(option == 8)
		{
			int min = minNum(arr, SIZE);
			std::cout << "Min no is " << min << std::endl;
		}
		
		else if(option == 9)
		{
			int secondMax = secondMaxNum(arr, SIZE);
			std::cout << "Second Max no is " << secondMax << std::endl;	
		}	
		
		else if(option == 10)
		{
			int secondMin = secondMinNum(arr, SIZE);
			std::cout << "Second Min no is " << secondMin << std::endl;	
		}
		
		else if(option == 11)
			exit (0);	
		
		else
			std::cout << "Invalid Option!" << std::endl;
	
		std::cout << "\nContinue? (y/n): ";
		std::cin >> choice;
			 
	}
	
	return 0;
}