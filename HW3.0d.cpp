#include<iostream>
using namespace std;

int main() // algorithm for 2nd picture
{
	string symb1 = "  ";
	string symb2 = "+ ";
	const int rows1{ 9 };
	const int cols1{ 11 };
	string arr1[rows1][cols1]{};
	const int rows2{ 6 };
	const int cols2{ 29 };
	string arr2[rows2][cols2]{};
	for (int i = 1, rows1 = 0; i <= 6; i++, rows1++) //top of figure
	{
		cout << "\t\t  ";
		for (int j = 1, cols1 = 0; j <= ((11 - (2 * i - 1)) / 2); j++, cols1++)
		{
			cout << symb1;
			arr1[rows1][cols1] = symb1;
		}
		for (int j = 1, cols1 = 6 - i; j <= (2 * i - 1); j++, cols1++)
		{
			cout << symb2;
			arr1[rows1][cols1] = symb2;
		}
		for (int j = 1, cols1 = 5 + i; j <= ((11 - (2 * i - 1)) / 2); j++, cols1++)
		{
			cout << symb1;
			if (cols1 == 11)
			{
				break;
			}
			arr1[rows1][cols1] = symb1;
		}
		cout << "\r\n";
	}
	for (int i = 1, rows1 = 6; i <= 3; i++, rows1++)
	{
		cout << "\t\t  ";
		for (int j = 1, cols1 = 0; j <= 2; j++, cols1++)
		{
			cout << symb1;
			arr1[rows1][cols1] = symb1;
		}
		for (int j = 1, cols1 = 2; j <= 7; j++, cols1++)
		{
			cout << symb2;
			arr1[rows1][cols1] = symb2;
		}
		for (int j = 1, cols1 = 9; j <= 2; j++, cols1++)
		{
			cout << symb1;
			arr1[rows1][cols1] = symb1;
		}
		cout << endl;
	}
	for (int i = 0, rows2 = 0; i <= 1; i++, rows2++) //begin of middle part
	{
		for (int j = 1, cols2 = 0; j <= 5 - i; j++, cols2++)
		{
			cout << symb1;
			arr2[rows2][cols2] = symb1;
		}
		for (int j = 1 - i, cols2 = 5 - i; j <= 1; j++, cols2++)
		{
			cout << symb2;
			arr2[rows2][cols2] = symb2;
		}
		for (int j = 1, cols2 = 6; j <= 5; j++, cols2++)
		{
			cout << symb1;
			arr2[rows2][cols2] = symb1;
		}
		for (int j = 1, cols2 = 11; j <= 7; j++, cols2++)
		{
			cout << symb2;
			arr2[rows2][cols2] = symb2;
		}
		for (int j = 1, cols2 = 18; j <= 5; j++, cols2++)
		{
			cout << symb1;
			arr2[rows2][cols2] = symb1;
		}
		for (int j = 1 - i, cols2 = 23; j <= 1; j++, cols2++)
		{
			cout << symb2;
			arr2[rows2][cols2] = symb2;
		}
		for (int j = 1 + i, cols2 = 24 + i; j <= 5; j++, cols2++)
		{
			cout << symb1;
			arr2[rows2][cols2] = symb1;
		}
		cout << endl;
	}
	for (int i = 4, rows2 = 2; i >= 1; i--, rows2++)
	{
		for (int j = 1, cols2 = 0; j < i; j++, cols2++)
		{
			cout << symb1;
			arr2[rows2][cols2] = symb1;
		}
		for (int j = 30 - (i * 2), cols2 = i - 1; j >= 0; j--, cols2++)
		{
			cout << symb2;
			arr2[rows2][cols2] = symb2;
		}
		for (int j = 1, cols2 = 29 - (i - 1); j < i; j++, cols2++)
		{
			cout << symb1;
			arr2[rows2][cols2] = symb1;
		}
		cout << endl;
	}
	for (int rows2 = 4; rows2 >= 0; rows2--)
	{
		for (int cols2 = 28; cols2 >= 0; cols2--)
		{
			cout << arr2[rows2][cols2];
		}
		cout << endl;
	}//end of mid part
	for (int rows1 = 8; rows1 >= 0; rows1--) //down part of figure
	{
		cout << "\t\t  ";
		for (int cols1 = 10; cols1 >= 0; cols1--)
		{
			cout << arr1[rows1][cols1];
		}
		cout << endl;
	}
	return 0;
}
