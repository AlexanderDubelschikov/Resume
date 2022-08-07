//Динамическая память. Операторы выделения new и delete. Null pointer.Динамические массивы. Двумерный динамический массив. Операции с динамическими массивами. Копирование массивов с одинаковым и разным количеством элементов. Свап массивов с одинаковым количеством элементов.

#include <iostream>
#include <ctime>

using namespace std;
const char NEW_LINE = '\n';
const char TAB = '\t';
int arr_sup, value;

void NumArray(int *size);
void FillArray(int* const arr, const int size);
void ShowArray(const int* const arr, const int size);
void CopyArray(int* const arr, int* const arr2, const int size);
void SwapArray(int* const arr, int* const arr2, const int size);
void CopyDifArray(int* arr, int* arr2, const int size);

int main()
{
    srand(time(NULL));
    
    //new и delete на примере переменных. Null pointer.
    /*int *pa = new int;
    cout << pa << NEW_LINE;
    *pa = 10;
    cout << *pa << NEW_LINE;
    delete pa;
    pa = nullptr;
    cout << pa << NEW_LINE;*/
    
    //Динамические массивы
    /*int size;
    cout << "Введите дилну массивы: " << NEW_LINE;
    cin >> size;
    int *arr=new int[size];
    cout << "Рандомно - 1. Ручками - 2" << NEW_LINE;
    cin >> arr_sup;
    switch(arr_sup)
    {
        case (1):
            for (int i = 0; i<size; i++)
            {
                arr[i] = rand()%10;
            }
            
            for (int i = 0; i<size; i++)
            {
                cout << arr[i] << TAB;
            }
            break;
        
        case(2):
            for (int i = 0; i<size; i++)
            {
                cout << "Введи член массива" << NEW_LINE;
                cin >> arr[i];
            }
            
            for (int i = 0; i<size; i++)
            {
                cout << arr[i] << TAB;
            }
            break;
            
        default:
            cout << "Ты втираешь мне какую-то дичь!" <<NEW_LINE;
        
        
    }
    
    delete [] arr;
    cout<<NEW_LINE;*/

    //Двумерный динамический массив
    /*int rows, cols;
    cin >> rows;
    cin >> cols;
    
    //Создание массива указателей
    int **arr = new int* [rows];
    for (int i=0; i<rows; i++)
    {
        arr[i]=new int [cols];
    }
    
    //Заполнение массива
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            arr[i][j] = j;
        }
    }
    
    //Вывод массива
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            cout << arr[i][j] << TAB;
        }
        cout << NEW_LINE;
    }
    
    
    //Отчистка массива
    for (int i=0; i<rows; i++)
    {
        delete [] arr[i];
    }
    delete [] arr;*/
    
    //Через функции, копирование и свап массивов с одинаковой длиной
    /*int size;
    int *psize = &size;
    NumArray(psize);
    int size2;
    int *psize2 = &size2;
    NumArray(psize2);
    
    int *arr = new int[size];
    int *arr2 = new int[size2];
    cout << "Изначальное заполнение масивов:" << NEW_LINE;
    FillArray(arr,size);
    ShowArray(arr, size);
    FillArray(arr2,size2);
    ShowArray(arr2, size2);
    cout << "Копирование массивов одинакового размера" << NEW_LINE;
    CopyArray(arr,arr2,size);
    ShowArray(arr, size);
    ShowArray(arr2, size2);
    cout << "Новые массивы: " << NEW_LINE;
    FillArray(arr,size);
    ShowArray(arr, size);
    FillArray(arr2,size2);
    ShowArray(arr2, size2);
    cout << "Перемена их местами: " << NEW_LINE;
    SwapArray(arr, arr2, size);
    ShowArray(arr, size);
    ShowArray(arr2, size2);
    delete [] arr;
    delete [] arr2;*/
    
    //Свап и копирование массивов разной длины
    /*int size, size2;
    cout << "Введи длину массива: " << NEW_LINE;
    cin >> size;
    cout << "Введи длину массива: " << NEW_LINE;
    cin >> size2;
    int *arr = new int [size];
    int *arr2 = new int [size2];
    cout << "Изначальные массивы" << NEW_LINE;
    FillArray(arr, size);
    ShowArray(arr, size);
    FillArray(arr2, size2);
    ShowArray(arr2, size2);
    cout << "Копирование массивов" << NEW_LINE;
    CopyDifArray(arr, arr2, size2);
    ShowArray(arr, size2);
    ShowArray(arr2, size2);
    cout << "Новые массивы" << NEW_LINE;
    FillArray(arr, size);
    ShowArray(arr, size);
    FillArray(arr2, size2);
    ShowArray(arr2, size2);
    cout << "Свап" << NEW_LINE;
    int *arr3 = new int [size];
    CopyArray(arr3, arr, size);
    delete [] arr;
    arr = new int [size2];
    CopyArray(arr, arr2, size2);
    delete [] arr2;
    arr2 = new int [size];
    CopyArray(arr2, arr3, size);
    delete [] arr3;
    ShowArray(arr, size2);
    ShowArray(arr2, size);*/
    
    //Добовление эелемента в конце (без функции) и начале
    /*int size;
    int *pSize = &size;
    NumArray(pSize);
    int *arr = new int [size];
    FillArray(arr, size);
    ShowArray(arr, size);
    int value;
    //Добавление в конец
    cout << "Какое число добавить в конце? " << NEW_LINE;
    cin >> value;
    int *arr2 = new int [size];
    CopyArray(arr2, arr, size);
    int size2=size+1;
    delete [] arr;
    arr = new int [size2];
    CopyArray(arr,arr2, size);
    arr[size]=value;
    size=size2;
    delete [] arr2;
    ShowArray(arr, size);
    //Добавление в начаоло
    cout << "Какое число добавить в начало? " << NEW_LINE;
    cin >> value;
    arr2 = new int [size];
    CopyArray(arr2, arr, size);
    size2=size+1;
    delete [] arr;
    arr = new int [size2];
    arr [0] = value;
    for (int i=1; i<size2; i++)
    {
        arr[i]=arr2[i-1];
    }
    size=size2;
    delete [] arr2;
    ShowArray(arr, size);
     
     delete [] arr;*/
    
    //Добавление элементов через функции
     

    return 0;

}

//Определение количества переменных
void NumArray(int* const size)
{
    cout << "Введи количество переменных: " << TAB;
    cin >> *size;
}

//Заполнение массива
void FillArray(int* const arr, const int size)
{
    for (int i = 0; i<size; i++)
    {
        arr[i]=rand()%20;
    }
}

//Вывод массива
void ShowArray(const int* const arr, const int size)
{
    for (int i = 0; i<size; i++)
    {
        cout << arr[i] << TAB;
    }
    
    cout << NEW_LINE;
}

//Копирование массивов c одинаковым размером (первый сделать вторым)
void CopyArray(int* const arr, int* const arr2, const int size)
{
    for (int i=0; i<size; i++)
    {
        arr[i]=arr2[i];
    }
}

//Смена местами двух одинаковых массивов
void SwapArray(int* const arr, int* const arr2, const int size)
{
    int *arr3 = new int [size];
    CopyArray(arr3, arr, size);
    CopyArray(arr, arr2, size);
    CopyArray(arr2, arr3, size);
    delete [] arr3;
    
}

//Копирование двух массивов с разлияным размером
void CopyDifArray(int* arr, int* arr2, const int size)
{
    delete [] arr2;
    arr2 = new int [size];
    CopyArray(arr, arr2, size);
}

