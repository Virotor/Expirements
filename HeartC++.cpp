#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std; 

void ilovesdt();

int main()
{
    ilovesdt();
}

void ilovesdt()
{
    system("mode con cols=100 lines=60");
    system("title HEART FOR ILYA ШКЛЯРИК!!!");
    system("color 04");

    int height = 100, width = 100;
    char** buffer = new char* [height];
    for (int i = 0; i < height; i++)
    {
        buffer[i] = new char[width];
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int x = (j - width / 2) / 2;
            int y = -1 * (i - height / 2);

            int firstPart = x * x;
            int secondPart = (int)((y - sqrt(abs(x))) * (y - abs(x)));

            int heartSize = 500;

            if ((firstPart + secondPart) <= heartSize)
            {
                buffer[i][j] = '/';
            }
            else
            {
                buffer[i][j] = ' ';
            }
        }
    }

    for (int i = 20; i < 75; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << buffer[i][j];
        }
        cout << endl;
    }
    cin.get();
}