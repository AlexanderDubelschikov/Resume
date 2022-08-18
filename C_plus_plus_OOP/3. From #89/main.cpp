//Дружественные функции и классы. Определение методов вне класса. Дружественный метод класса.

#include <iostream>
using namespace std;


class MyPos
{
private:
    int x;
    int y;
    
public:
    
    MyPos(int x, int y)
    {
        this->x=x;
        this->y=y;
        cout << "Вызывался конструктор: " << this << endl;
    }
    
    MyPos()
    {
        x=0;
        y=0;
        cout << "Вызывался конструктор: " << this << endl;
    }

    bool operator == (MyPos &other)
    {
        return this->x==other.x  && this->y==other.y;
        
    }
    
    bool operator != (MyPos &other)
    {
        return this->x!=other.x || this->y!=other.y;
    }
    
    MyPos & operator = (const MyPos &other)
    {
        this->x = other.x;
        this->y = other.y;
        
        return *this;
    }
    
    MyPos operator + (const MyPos & other)
    {
        MyPos temp;
        temp.x = this -> x + other.x;
        temp.y = this -> y + other.y;
        
        return temp;

    }
    
    MyPos & operator ++ ()
    {
        this->x+=1;
        this->y+=1;
        
        return *this;
    }
    
    MyPos & operator -- ()
    {
        this->x-=1;
        this->y-=1;
        
        return *this;
    }
    
    MyPos & operator ++ (int value)
    {
        MyPos temp(*this);
        
        this->x++;
        this->y++;
        
        return temp;

    }
    
    MyPos & operator -- (int value)
    {
        MyPos temp(*this);
        
        this->x--;
        this->y--;
        
        return temp;

    }
    
    ~MyPos()
    {
        cout << "Вызывался деструктор: " << this << endl;
    }
    
    void PrintPos()
    {
        cout << x << " and " << y << endl;
    }
    
    //Блок дружественных функций
    friend void ChangeX(MyPos &value);
  
};

//Для определения методв вне класса
class MyClass
{
public:
    MyClass();
    ~MyClass();
    void PrintMSG();
    

};


int main() {
    
    //Дружественные функции и классы
    /*MyPos a;
    a.PrintPos();
    ChangeX(a);
    a.PrintPos();*/
    
    //Определение методов вне класса
    /*MyClass a;
    a.PrintMSG();*/
    
    //Дружественный метод класса
    
    
    
    
    return 0;
}

//Конструктор вне класса;
MyClass::MyClass()
{
    cout << "Конструктор" << endl;
}

//Деструктор вне класса;
MyClass::~MyClass()
{
    cout << "Деструктор" << endl;
}

//Вне класса
void MyClass::PrintMSG()
{
    cout << this << endl;
}

//Дружественная функция
void ChangeX(MyPos &value)
{
    value.x=10;
}


