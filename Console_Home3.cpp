#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

int main()
{
    bool showallfugures = false;
    if (showallfugures)
    {
        for (int i = 1; i < 17; i++)
        {
            std::string file = "E:\\Perforce\\My_Work\\ConsoleApplication3\\ConsoleApplication3\\Models\\crop";
            file += std::to_string(i) + ".txt";
            std::cout << file << std::endl;
            std::ifstream myfile(file);
            if (myfile.is_open())
            {
                while (!myfile.eof())
                {
                    std::string line;
                    std::getline(myfile, line);
                    replace(line.begin(), line.end(), '0', ' ');
                    std::cout << line << '\n';
                }
                myfile.close();
            }
        }
    }
    else
    {

        for (int i = 1; i < 10; i++)
        {
            for (int j = 0; j < i - 1; j++)
                std::cout << " ";
            for (int j = 1; j < i; j++)
                std::cout << "#";

            int shift = 27 - (i * 2) - ((i - 1) * 2);
            for (int j = 1; j < shift + 1; j++)
                std::cout << " ";

            if (shift > 0)
            {
                for (int j = 1; j < i; j++)
                    std::cout << "#";
            }
            else
            {
                int d = 27 - ((i - 1) * 2) - i;
                for (int j = 1; j < d; j++)
                    std::cout << "#";
            }
            std::cout << "\r\n";
        }

        for (int i = 9; i > 0; i--)
        {
            for (int j = 0; j < i - 1; j++)
                std::cout << " ";
            for (int j = 1; j < i; j++)
                std::cout << "#";

            int shift = 27 - (i * 2) - ((i - 1) * 2);
            for (int j = 1; j < shift + 1; j++)
                std::cout << " ";
            if (shift > 0)
            {
                for (int j = 1; j < i; j++)
                    std::cout << "#";
            }
            else
            {
                int d = 27 - ((i - 1) * 2) - i;
                for (int j = 1; j < d; j++)
                    std::cout << "#";
            }
            std::cout << "\r\n";
        }
    }
    
}

