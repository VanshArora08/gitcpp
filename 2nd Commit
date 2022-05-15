#include <iostream>  
using namespace std;  
class base  
{  
    public:  
    void show()  
    {  
        std::cout << "Base class" << std::endl;  
    }  
};  
class derived1 : public base  
{  
    public:  
    void show()  
    {  
        std::cout << "Derived class 1" << std::endl;  
    }  
};  
class derived2 : public base  
{  
    public:  
    void show()  
    {  
        std::cout << "Derived class 2" << std::endl;  
    }  
};  
int main()  
{  
    base *b;  
    derived1 d1;  
    derived2 d2;  
    b=&d1;  
    b->show();  
    b=&d2;  
    b->show();  
    return 0;  
}  
