#include <iostream>
#include <limits>
#include <typeinfo>
using  std::cin;
using  std::cout;

struct dot{
    int x;
    int y;
};

struct car{
    dot initial_dot;
    int price;
    int quantity;
};

int main() {
    int num;
    float float_num = 3.14;
    car first_car;
    cout << typeid(first_car).name() << '\n';
    cout << sizeof(first_car);
    cout << "be";
}