﻿// LetterDedMoroz.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include "windows.h"


using namespace std;

int main()
{
    Sleep(1000);

    setlocale(LC_ALL, "Russian");

    string example_str = "Дорогой дед мороз, в этом году я себя вёл...хотя кому это я, тебя не существует. Но если бы ты был, то слушай. В новом году мне нужно в сутках 32 часа, сон отмени, многое нужно успеть. И всем кто желает, дай это, все добра!";

    for (int i = 0; i < example_str.length(); ++i) 
    {
        Sleep(100);
        cout << example_str[i];
        if (i == 50)
            cout << endl;
    }

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
