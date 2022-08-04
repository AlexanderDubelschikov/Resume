//Динамическая память. Операторы выделения new и delete. Null pointer

#include <iostream>
using namespace std;
const char NEW_LINE = '\n';
const char TAB = '\t';

int main()
{
    
    //new и delete на примере переменных. Null pointer.
    int *pa = new int;
    cout << pa << NEW_LINE;
    *pa = 10;
    cout << *pa << NEW_LINE;
    delete pa;
    pa = nullptr;
    cout << pa << NEW_LINE;
    

}
