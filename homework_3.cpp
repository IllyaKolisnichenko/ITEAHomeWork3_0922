#include <iostream>

void arrowWithFiller(const int height, const int width, const int filler_length)
{
    int min = (height - width) / 2;
    int max = height - min;

    // just arrow with filler
    for (int i = 1; i <= height; ++i) {
        for (int j = 0; j < filler_length; ++j) std::cout << "  ";

        for (int j = 1; j <= height; ++j) {
            if ((i > min && i <= max) || (j > min && j <= max))
                std::cout << " *";
            else
                std::cout << "  ";
        }
        for (int j = 0; j < filler_length; ++j) std::cout << "  ";
        std::cout << "\n";
    }
}

void arrowsWithCube(const int height, const int width, const int sizeOfCube)
{
    int min = (height - width) / 2;
    int max = height - min;

    // Start of cube
    std::cout << "       * * * * *" << std::endl;

    // Left arrow
    for (int i = 1; i <= height; ++i)
    {
        for (int j = 1; j <= height; ++j)
        {
            if ((i > min && i <= max) || (j > min && j <= max))
                std::cout << " *";
            else
                std::cout << "  ";
        }

        // Cube
        for (int j = 0; j < sizeOfCube; ++j) std::cout << " *";


        // Right arrow
        for (int j = 1; j <= height; ++j)
        {
            if ((i > min && i <= max) || (j > min && j <= max))
                std::cout << " *";
            else
                std::cout << "  ";
        }

        std::cout << "\n";
    }
    // End of cube
    std::cout << "       * * * * *" << std::endl;
}

int main()
{
    arrowWithFiller(3,1,4);
    arrowsWithCube(3,1,5);
    arrowWithFiller(3,1,4);
    return 0;
}

