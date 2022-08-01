//Статическое и динамическое выделение памяти, указатели, арифметика указателей, ссылки

#include <iostream>
using namespace std;
const char NEW_LINE = '\n';

void Foo(int *pa, int *pb);
void Foo2(int *pa, int *pb);

int main()
{
    //Базовое знакомство с указателями
    /*int a=10;
    cout << a << NEW_LINE;
    int *pa = &a;
    cout << pa << NEW_LINE;
    cout << *pa << NEW_LINE;
    int *pa2 = &a;
    cout << *pa2 << NEW_LINE;
    *pa2 = 2;
    cout << *pa << NEW_LINE;*/
    
    //Указатели массивов и арифметика указателей
    /*const int SIZE = 5;
    int arr[5]{1,2,3,4,5};
    
    for (int i=0; i<SIZE; i++)
    {
        cout<<arr[i]<<" \t";
    }
    cout<<NEW_LINE;
    cout<<"============================="<< NEW_LINE;
    int *pArr = arr;
    cout<<"arr:\t"<<arr<<NEW_LINE;
    cout<<"pArr:\t"<<pArr<<NEW_LINE;
    cout<<"=============================" << NEW_LINE;
    for (int i=0; i<SIZE; i++)
    {
        cout<<*(pArr+i)<<" \t";
    }
    cout<<NEW_LINE;*/
    
    //Параметры в функцию по указателю
    /*int a = 55;
    int b = 66;
    cout<<a<<NEW_LINE;
    cout<<b<<NEW_LINE;
    Foo(&a,&b);
    cout<<a<<NEW_LINE;
    cout<<b<<NEW_LINE;
    Foo2(&a,&b);
    cout<<a<<NEW_LINE;
    cout<<b<<NEW_LINE;*/
    
    //Ссылки
    /*int a = 5;
    int *pa = &a;
    int &aRef = a;
    
    cout << pa << "\t" << aRef << NEW_LINE;
    aRef = 66;
    cout << a << NEW_LINE;*/

    
    return 0;
}

//Параметры в функцию по указателю
void Foo(int *pa, int *pb)
{
    (*pa)++;
    (*pb)--;
}

//Функция для свапа переменных местами
void Foo2(int *pa, int *pb)
{
    int c = (*pa);
    (*pa) = (*pb);
    (*pb) = c;
}
