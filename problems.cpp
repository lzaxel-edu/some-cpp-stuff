#include <iostream>

void problem1()
{
    std::cout << "Enter positive number: ";
    int num;
    std::cin >> num;
    if (num < 1)
    {
        std::cout << "Number should be positive";
        return;
    }

    int reversed = 0;
    while(reversed != num) {
        int num_copy = num;
        reversed = 0;
        while (num_copy > 0)
        {
            reversed = reversed * 10 + num_copy % 10;
            num_copy /= 10;
        }

        if (reversed == num) break;

        num += reversed;
    }

    std::cout << "result: " << reversed;
}

void problem3()
{
    std::cout << "Enter even positive number: ";
    int num;
    std::cin >> num;
    if (num % 2 != 0 || num < 1)
    {
        std::cout << "Number should even and positive" << std::endl;
        return;
    }
    for (int i = 2; i <= num/2; i++)
    {
        bool isPrime = true;
        for (int k = 2; k < i / 2; k++)
        {
            if (i % k == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (!isPrime) continue;
        
        int b = num - i;
        isPrime = true;
        for (int k = 2; k < b / 2; k++)
        {
            if (b % k == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (!isPrime) continue;

        std::cout << i << "+" << b << "=" << num << std::endl;
    }
}

int main()
{
    bool repeat = true;
    while(repeat)
    {
        problem3();
        std::cout << "Once more? (1-yes 0-no)" << std::endl;
        std::cin >> repeat;
        if (!repeat) break;
    }
}