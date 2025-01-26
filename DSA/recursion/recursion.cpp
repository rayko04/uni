#include <iostream>
#include <climits>
#include <math.h>

template <typename T>
T fact(T x)
{
    if(x == 0)
        return 1;

    return x* fact(x-1);
}

template <typename T>
T mult(T x, T y)
{
    if(y == 0 || x == 0)
        return 0;

    if(y < 0)
        return -mult(x, -y);

    if(y == 1)
        return x;

    return x+ mult(x, y-1);
}

unsigned int fib(unsigned int x)
{
    if(x <= 1)
        return x;

    return fib(x-1) + fib(x-2);
}

template <typename T>
int binS(T arr[], int low, int high, T key)
{
    if(high < low)
        return -1;
    
    int mid {(high+low)/2};

    if(key == arr[mid])
        return mid;
    else if(key > arr[mid])
        return binS(arr, mid+1, high, key);
    else
        return binS(arr, low, mid-1, key);
}

bool isSorted(int arr[], std::size_t i, std::size_t size)
{
    if(i >= size-1)
        return true;

    if(arr[i] > arr[i+ 1])
        return false;

    return isSorted(arr, i+1, size);
}

void printAscend(int n)
{
    if(n < 0)
        return;

    printAscend(n-1);
    std::cout << n << ' ';
}

int power(int x, int y)
{
    if(y == 0)
        return 1;

    return x* power(x, y-1);
}

bool isPrime(int x, int i)
{
    if(i == 1)
        return true;
    if(x % i == 0)
        return false;

    return isPrime(x, i-1);
}

int gcd(int a, int b)
{
    if(b == 0)
        return a;

    return gcd(b, a%b);
}

int sum(int arr[], std::size_t i)
{
    if(i == 0)
        return arr[i];

    return arr[i] + sum(arr, i-1);
}

const int size{5};
int maxf(int arr[], std::size_t i)
{
    if(i == 0)
        return arr[i];

    int maxP{maxf(arr, i-1)};
    return ((arr[i] > maxP)? arr[i]: maxP);
}

int minf(int arr[], std::size_t i)
{
    if(i == 0)
        return arr[i];

    int minP{minf(arr, i-1)};
    return ((arr[i] < minP)? arr[i]: minP);
}


int secMaxf(int arr[], std::size_t i, int max, int secMax)
{
    if(i == size)
        return secMax;

    if(arr[i] > max)
    {
        secMax = max;
        max = arr[i];
    }
    else if(arr[i] > secMax && arr[i] != max)
    {
        secMax = arr[i];
    }

    return secMaxf(arr, i+1, max, secMax);
}

int secMinf(int arr[], std::size_t i, int min, int secMin)
{
    if(i == size)
        return secMin;

    if(arr[i] < min)
    {
        secMin = min;
        min = arr[i];
    }

    else if(arr[i] < secMin && arr[i] != min)
        secMin = arr[i];

    return secMinf(arr, i+1, min, secMin);
}

void revString(const char str[])
{
    if(*str != '\0')
    {
        revString(str+1);
        std::cout << *str;
    }
            //void returns implicitly
}

void revStdString(std::string& str, std::size_t begin, std::size_t end)
{
    if(begin >= end)
        return;

    std::swap(str[begin], str[end]);
    revStdString(str, begin+1, end-1);
}

int main()
{
  //  std::cout << fact<long double>(120);
   
   // std::cout << mult(-2, -2);
   
   // std::cout << fib(3);

   /* int arr[5] {12, 34, 56, 78, 89};
   int index {binS(arr, 0, 4, 1)};
   if(index == (-1))
        std::cout << "not found";
    else
    {
        std::cout << index;
    } */

  // std:: cout << std::boolalpha << isPrime(224, std::sqrt(224));

    //std::cout << gcd(4, 8);

    /* const int size{5};
    int arr[size] {2, 7, 3, 3, 1};
    std:: cout << sum(arr, size-1); */

    
    /* int arr[size] {19, 7, 3, -4, 1};
    int max{maxf(arr, size-1)};
    std::cout << max;

    int min{minf(arr, size-1)};
    std::cout << min;

    int secMax{};
    secMax = secMaxf(arr, 0, INT_MIN, secMax);
    std::cout << secMax;

     int secMin{};
    secMin = secMinf(arr, 0, INT_MAX, secMin);
    std::cout << secMin; */

    /* revString("hello");
    std::cout << '\n';

    std::string str{"hello"};
    revStdString(str, 0, str.size()-1);
    std::cout << str; */

    /* int arr[5] {1, 45, 78, 90, 567};
    std::cout << std::boolalpha << isSorted(arr, 0, 5); */

    //printAscend(10);

    std::cout << power(1, 4);

    return 0;
}
