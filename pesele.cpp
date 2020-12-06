// pesele.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>

void zad1()
{
    std::fstream pliki;
    pliki.open("pesel.txt", std::ios::in);
    std::string buf;
    int k=0, m=0;
    while (pliki >> buf)
    {
        if (buf.length() == 11)
        {
            if (buf[9] % 2 == 0)
            {
                k++;
            }
            else
            {
                m++;
            }
        }
    }
    std::cout << "k=" << k << " m=" << m << std::endl;
}
void zad2()
{
    std::fstream pliki;
    pliki.open("pesel.txt", std::ios::in);
    std::string buf;
    int count = 0;
    while (pliki >> buf)
    {
        if (buf.length() == 11)
        {
            if ((buf[2] == '1' || buf[2] == '3') && (buf[3] == '1'))
            {
                count++;
            }
        }
    }
    std::cout << "c="<< count << std::endl;
}
void zad3()
{
    std::fstream pliki;
    pliki.open("pesel.txt", std::ios::in);
    std::string buf;
    int count=0;
    while (pliki >> buf)
    {
        if (buf.length() == 11)
        {
            int sum= buf[0] - '0' + 3 * (buf[1] - '0') + 7 * (buf[2] - '0') + 9 * (buf[3] - '0') + buf[4] - '0' + 3 * (buf[5] - '0') + 7 * (buf[6] - '0') + 9 * (buf[7] - '0') + buf[8] - '0' + 3 * (buf[9] - '0') + buf[10] - '0';
            if (sum % 10 == 0)
            {

            }
            else
            {
                std::cout << buf<<std::endl;;
                count++;
            }
        }
    }
    std::cout << "c=" << count << std::endl;
}
int main()
{
    zad3();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
