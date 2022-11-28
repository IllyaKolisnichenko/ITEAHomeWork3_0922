#include <iostream>
using namespace std;

int main()
{
for (int i=1; i<=5; i++)
{
    for(int j=1;j<=5-i;j++)
    {
        cout << " ";
    }
   
   for(int m=1;m<=2*i-1;m++)
    {
        cout << "X";
    }
   
   for(int n=1; n<=2*(5-i);n++)
    {
        cout << " ";
    }
    
    for(int k=1;k<=2*i;k++)
    {
        cout << "X";
    }
     cout << endl;

    
}

for (int i=2*5-1;i>=1;i--)
{
    for(int j=1; j<=2*5-1-i;j++)
    {
        cout << " ";
    }
    for(int m=1; m<=2*i;m++)
    {
        cout << "X";
    }
    cout << endl;
}
}
