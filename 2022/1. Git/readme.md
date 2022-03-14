# Git
**Сорс-контрол**. Системи за управление на версиите и екипно взаимодействие.

## 1. Клониране на хранилището
1. Стартирайте интегрираната среда за разработка: **Microsoft Visual Comunity 2022**
2. Изберете: **Clone Repository**
3. Използвайте следния Интернет адрес:
```
https://github.com/dimitarminchev/CS104
```
4. Натиснете: Clone

## 2. Създаване на първи проект на C++
1. Стартирайте интегрираната среда за разработка: **Microsoft Visual Comunity 2019**
2. Изпълнете: **File > New > Project**
3. Изберете последователността: **C++ > Windows > Console > Console App**
4. Име на проекта (Project name): **FAKNO**
5. Мeстоположение (Location): **C:\\Users\\mitko\\Desktop\\CS104\\2022\\1. Git\\**
6. Отворете файл
7. Изтрийте следният шаблонен програмен код:
```
// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
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
```
Напишете следният програмен код на Вашата първа програма на езика C++
```
#include <iostream>
using namespace std;
int main()
{
    cout << "Hello World!" << endl;
}
```
8. Тествайте като стартирате проекта използвайки съкратена клавишна комбинация **Ctrl + F5**
9. Публикувайте в хранилището промените: **Git > Push**