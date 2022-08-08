//Нуль треминал. Char массив. Строки. ASCII.
#include <clocale>
#include <string>
#include <iostream>
using namespace std;

const char NEW_LINE = '\n';
const char TAB = '\t';

void Foo(char *str);
void Strlen_my(char *str);

int main()
{
    setlocale(LC_ALL,"ru") ;
    
    //Знакомство с символами и строками
    /*char symbol = 'a';
    cout << symbol << NEW_LINE;
    char string [] = "string";
    cout << string << NEW_LINE;
    char string2 [] = {'H','e','l','l','o','\0'};
    cout << string2 << NEW_LINE;
    cout << strlen(string2) << NEW_LINE;*/
    
    //Преведение типов (C)
    /*double a = 33.3;
    cout << a << NEW_LINE;
    cout << (int)a << NEW_LINE;
    cout << (bool)a << NEW_LINE;
    cout << (char)a << NEW_LINE;
    int b = 34.333;
    cout << b << NEW_LINE;*/
    
    //ASCII (из-за работы в xCode проблемы с ру сиволами, несмотря на setlocale);
    /*cout << sizeof(char) << NEW_LINE;
    for (int i=0; i <= 255; i++)
    {
        cout << "Code = " << i << " Char = " << (unsigned char)i << NEW_LINE;
    }*/
    
    //Строки и указатели. Реализация strlen своими руками.
    /*char *str = "Hellow world!";
    cout << str << NEW_LINE;
    char *strArr[] = {"Hello", "World", "!"};
    for (int i = 0; i<3; i++)
    {
    cout << strArr[i] << NEW_LINE;
    }
    Foo(str);
    Strlen_my(str);*/
    
    
}

//Вывод количества элементов строки
void Foo(char *str)
{
    cout << strlen(str) << NEW_LINE;
}

//Реализация strlen своими руками
void Strlen_my(char *str)
{
    int i=0;
    int k=0;
    while (str[i]!='\0')
    {
        k++;
        i++;
    }
    
    cout << k << NEW_LINE;
}

