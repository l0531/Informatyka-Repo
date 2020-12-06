#include <iostream>
#include<fstream>
#include<string>
void zad1()
{
    std::cout << "zad1" << std::endl;
    std::fstream plikin("liczby.txt",std::ios::in);
    std::string input;
    int count = 0;
    while (plikin >> input)
    {
        int tmp = 0;
        for (int i = 0; i < input.size(); i++)
        {
            if (input[i] == '0')
            {
                tmp++;
            }
        }
        if (2 * tmp > input.size())
        {
            count++;
        }
    }
    std::cout << count<<std::endl;
}
bool zad2helper(std::string str,int last)
{
    bool ret = true;
    for (int i = str.size() - last; i >= 0 && i < str.size(); i++)
    {
        if (str[i] == '1')
        {
            ret = false;
        }
    }
    return ret;
}
void zad2()
{
    std::cout << "zad2" << std::endl;
    std::fstream plikin("liczby.txt", std::ios::in);
    std::string input;
    int div2=0, div8=0;
    while (plikin >> input)
    {
        if (zad2helper(input, 1))
        {
            div2++;
        }
        if (zad2helper(input, 3))
        {
            div8++;
        }
    }
    std::cout << "Div 2:" << div2 << " div 8:" << div8 << std::endl;
}
void zad3()
{
    std::cout << "zad3" << std::endl;
    std::fstream plikin("liczby.txt", std::ios::in);
    std::string input;
    int smallestsize = 251,smallestrow=0,largestrow=0, largestsize = 0,row=1;
    while (plikin >> input)
    {
        if (input.size() < smallestsize)
        {
            smallestsize = input.size();
            smallestrow = row;
        }
        if (input.size() > largestsize)
        {
            largestsize = input.size();
            largestrow = row;
        }
        row++;
    }
    std::cout << "Largest at:" << largestrow << " Smallest at:" << smallestrow<<std::endl;
}
int main()
{
    zad1();
    zad2();
    zad3();
}
