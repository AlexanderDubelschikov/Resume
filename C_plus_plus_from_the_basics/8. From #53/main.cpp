//Динамическая память. Операторы выделения new и delete. Null pointer.Динамические массивы. Двумерный динамический массив.

#include <iostream>
#include <ctime>

using namespace std;
const char NEW_LINE = '\n';
const char TAB = '\t';
int arr_sup;

void NumArray(int *size);
void FillArray(int* const arr, const int size);
void ShowArray(const int* const arr, const int size);

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
    
    //Через функции
    int size;
    int *psize = &size;
    NumArray(psize);
    //cout << "Введи количество элементов в массиве: " << NEW_LINE;
    //cin >> size;
    int *arr = new int[size];
    FillArray(arr,size);
    ShowArray(arr, size);
    delete [] arr;
    
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
