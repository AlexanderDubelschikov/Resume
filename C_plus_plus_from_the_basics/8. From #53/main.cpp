//Динамическая память. Операторы выделения new и delete. Null pointer.Динамические массивы. Действия над
//динамическим массивом.

#include <iostream>
#include <ctime>

using namespace std;
const char NEW_LINE = '\n';
const char TAB = '\t';
int arr_sup;


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
    

}



void FillArray()
{
    
}

void ShowArray()
{
    
}
