//For example, let’s say you’re writing a program
// that needs to keep track of whether an apple is red, 
//yellow, or green, or what color a shirt is (from a preset list of colors).
// If only fundamental types were available, how might you do this?

using Color = int; // define a type alias named Color

// The following color values should be used for a Color
constexpr Color red{ 0 };
constexpr Color green{ 1 };
constexpr Color blue{ 2 };

int main()
{
    Color appleColor{ red };
    Color shirtColor{ green };

    return 0;
}
