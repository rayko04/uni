#include <iostream>

#define ADD 8                // object like macros with substitution text        macros or #defines
#define HELLO                // object like macros without subs text

int add(int x, int y);

int main()
{
    std::cout << "The sum of 3 and 4 is: " << ADD << '\n';
    
#if defined(HELLO)                        // conditional compilation: #ifdef
	std::cout << "Hello" << '\n';
#endif                                    // conditional compilation: #endif

#if defined(BYE)
	std::cout << "Bye" << '\n';
#endif

#if !defined(HELLO)                       // conditional compilation: #ifndef
	std::cout << "Hello" << '\n';
#endif

#if !defined(BYE)
	std::cout << "Bye" << '\n';
#endif

#if 0                                     // conditional compilation: #if 0 (acts like comment but at preprocessing lvl)
	std::cout << "The sum of 3 and 4 is: ";
	std::cout << "The sum is: ";
#endif

#if 1
	std::cout << "The sum of 3 and 4 is ded " << std::endl;
#endif
	
    return 0;
}