#include <iostream>
#include<stack>
int main()
{
    char op_array[] = { '+','-','*', '/' ,'^' };
    std::stack<char> mystack;
    std::string in_str;
    int a;
    std::cin >> a;
    for (int i = 0; i < a; i++)
    {
        std::cin >> in_str;
        for (int str_index = 0; str_index < in_str.length(); str_index++)
        {
            if (in_str[str_index] >= 'a' && in_str[str_index] <= 'z' || in_str[str_index] >= 'A' && in_str[str_index] <= 'Z')
            {
                std::cout << in_str[str_index];
            }
            else if (in_str[str_index] == ')')
            {
                std::cout << mystack.top();
                mystack.pop();
            }
            else
            {
                for (int j = 0; j < sizeof(op_array) / sizeof(*op_array); j++)
                {
                    if (in_str[str_index] == op_array[j])
                    {
                        mystack.push(in_str[str_index]);
                        break;
                    }
                }
            }
        }
        std::cout << std::endl;
    }
}