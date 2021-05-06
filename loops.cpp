#include <iostream>

int main()
{
    //while loop:
    // int i = 0;
    // int square = 0;
    // int result;

    // while (i < 10)
    // {
    //     result = i * square;
    //     std::cout << i << "  " << result << "\n";
    //     i++;
    //     square++;
    // }

    for (int i = 99; i>0; i--)
    {
        std::cout << i << " bottles of pop on the wall.\n" <<
        "Take one down and pass it around.\n" <<
        i-1 << " bottles of pop on the wall.\n\n";
    }
}