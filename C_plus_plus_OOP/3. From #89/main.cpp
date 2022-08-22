//Дружественные функции и классы. Определение методов вне класса. Дружественный метод класса.
//Дружественный класс. Static. Id generator. Статичкские методы.

#include <iostream>
#include <string>
using namespace std;

//Основной класс для работы
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

//Для темы дружественные методы класса
class Human;
class Apple;

class Human
{
public:
    void TakeApple(Apple &apple);
    void EatApple(Apple &apple);
    
};

//Friend. Static. Id generator.
class Apple
{
public:
    
    static int count;
    
    Apple(int weight, string color)
    {
        this->weight=weight;
        this->color=color;
        this->id=count;
        Apple::count=Apple::count+1;
        
    }
    
    void PrintInfo()
    {
        cout << "Человек взял яблоко!" << endl;
        cout << "Вес: " << weight << '\t' << "Цвет: " << color << endl;
        cout << "ID: " << this->id <<endl;
    }
    
    void Kolovo()
    {
        cout << "Количество яблок равно: " << Apple::count << endl;
    }
    
    //friend void Human::TakeApple(Apple &apple);
    friend Human;
    
private:
    int weight;
    string color;
    int id;
    
};

int Apple::count = 0;


int main() {
    
    //Дружественные функции и классы
    /*MyPos a;
    a.PrintPos();
    ChangeX(a);
    a.PrintPos();*/
    
    //Определение методов вне класса
    /*MyClass a;
    a.PrintMSG();*/
    
    //Дружественный метод класса (требуется также раскомментировать строчку friend в Apple)
    /*Apple apple(2,"red");
    Human odin;
    odin.TakeApple(apple);*/
    
    //Дружественный класс
    /*Apple apple(2,"red");
    Human odin;
    odin.TakeApple(apple);
    odin.EatApple(apple);*/
    
    //Static. Id generator.
    Apple apple(20, "red");
    apple.PrintInfo();
    apple.Kolovo();
    Apple apple2(30, "red-yellow");
    apple2.PrintInfo();
    apple2.Kolovo();

    
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

//Вне класса
void Human::TakeApple(Apple &apple)
{
    apple.PrintInfo();
}

void Human::EatApple(Apple &apple)
{
    cout << "Человек съел яблоко"<<endl;
    apple.PrintInfo();
}

