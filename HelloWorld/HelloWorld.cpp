// HelloWorld.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    float TF = 0.f;
    std::cin >> TF;

    const float TC = (TF - 32.f) * (5.f / 9.f);

    std::cout << TF;
    std::cout << " is equal to " << TC << " degrees" << std::endl;

}

