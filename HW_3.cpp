#include <iostream>

void main() {

    //Create arrow top
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= ((44 - (2 * i - 1)) / 2); j++)
            std::cout << ".";

        for (int j = 1; j <= (2 * i - 1); j++)
            std::cout << "X";

        for (int j = 1; j <= ((44 - (2 * i - 1)) / 2) + 1; j++)
            std::cout << ".";

        std::cout << "\r\n";
    }

    //Create column upper
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 20; j++)
            std::cout << ".";

        for (int j = 1; j < 6; j++)
            std::cout << "X";

        for (int j = 1; j < 21; j++)
            std::cout << ".";

        std::cout << "\r\n";
    }


    //FIRST LINE
    for (int i = 3; i >= 3; i--)
    {
        for (int j = 1; j <= i * 2; j++)
            std::cout << ".";

        for (int j = 1; j <= (7 - i * 2); j++)
            std::cout << "X";

        for (int i = 1; i <= 12; i++)

            std::cout << ".";

        for (int j = 1; j <= ((7 - ((i * 2) - 4))); j++)
            std::cout << "X";

        for (int i = 1; i <= 13; i++)

            std::cout << ".";

        for (int j = 1; j <= (7 - i * 2); j++)
            std::cout << "X";

        for (int j = 1; j <= i * 2; j++)
            std::cout << ".";

        std::cout << "\r\n";
    }

    //SECOND LINE
    for (int i = 2; i >= 2; i--)
    {
        for (int j = 1; j <= i * 2; j++)
            std::cout << ".";

        for (int j = 1; j <= (7 - (i * 2)); j++)
            std::cout << "X";

        for (int i = 1; i <= 12; i++)

            std::cout << ".";

        for (int j = 1; j <= 7 - i; j++)
            std::cout << "X";

        for (int i = 1; i <= 13; i++)

            std::cout << ".";

        for (int j = 1; j <= ((7 - i * 2)); j++)
            std::cout << "X";

        for (int j = 1; j <= i * 2; j++)
            std::cout << ".";

        std::cout << "\r\n";
    }


    //THIRD LINE
    for (int i = 1; i >= 1; i--)
    {
        for (int j = 1; j <= i * 2; j++)
            std::cout << ".";

        for (int j = 1; j <= (7 - i * 2); j++)
            std::cout << "X";

        for (int i = 1; i <= 30; i++)

            std::cout << "X";

        for (int j = 1; j <= (7 - i * 2); j++)
            std::cout << "X";

        for (int j = 1; j <= i * 2; j++)
            std::cout << ".";

        std::cout << "\r\n";
    }


    //CENTRAL LINE
    for (int i = 1; i <= 44; i++)
    {
        std::cout << "X";
    }
    std::cout << "\r\n";


    //FIFTH LINE
    for (int i = 1; i >= 1; i--)
    {
        for (int j = 1; j <= (i * 2); j++)
            std::cout << ".";

        for (int j = 1; j <= (7 - i * 2); j++)
            std::cout << "X";

        for (int i = 1; i <= 30; i++)

            std::cout << "X";

        for (int j = 1; j <= (7 - i * 2); j++)
            std::cout << "X";

        for (int j = 1; j <= (i * 2); j++)
            std::cout << ".";

        std::cout << "\r\n";
    }



    //SIXTH LINE
    for (int i = 2; i >= 2; i--)
    {
        for (int j = 1; j <= ((abs(i) * 2)); j++)
            std::cout << ".";

        for (int j = 1; j <= ((7 - abs(i) * 2)); j++)
            std::cout << "X";

        for (int i = 1; i <= 12; i++)

            std::cout << ".";

        for (int j = 1; j <= 7 - i; j++)
            std::cout << "X";

        for (int i = 1; i <= 13; i++)

            std::cout << ".";

        for (int j = 1; j <= ((7 - abs(i) * 2)); j++)
            std::cout << "X";

        for (int j = 1; j <= ((abs(i) * 2)); j++)
            std::cout << ".";

        std::cout << "\r\n";
    }



    //SEVENTH LINE
    for (int i = 3; i >= 3; i--)
    {
        for (int j = 1; j <= i * 2; j++)
            std::cout << ".";

        for (int j = 1; j <= (7 - i * 2); j++)
            std::cout << "X";

        for (int i = 1; i <= 12; i++)

            std::cout << ".";

        for (int j = 1; j <= ((7 - ((i * 2) - 4))); j++)
            std::cout << "X";

        for (int i = 1; i <= 13; i++)

            std::cout << ".";

        for (int j = 1; j <= (7 - i * 2); j++)
            std::cout << "X";

        for (int j = 1; j <= i * 2; j++)
            std::cout << ".";

        std::cout << "\r\n";
    }

    //Create Column bottom
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 20; j++)
            std::cout << ".";

        for (int j = 1; j < 6; j++)
            std::cout << "X";

        for (int j = 1; j < 21; j++)
            std::cout << ".";

        std::cout << "\r\n";
    }

    //Create arrow down
    for (int i = 4; i >= 1; i--)
    {
        for (int j = 1; j <= ((44 - (2 * i - 1)) / 2); j++)
            std::cout << ".";

        for (int j = 1; j <= (2 * i - 1); j++)
            std::cout << "X";

        for (int j = 1; j <= ((44 - (2 * i - 1)) / 2) + 1; j++)
            std::cout << ".";

        std::cout << "\r\n";
    }
};
