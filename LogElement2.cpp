#include <iostream>

class LogicElement {
public:
    bool A;
    bool B;
    bool C;
};

int main() {
    LogicElement element;
    element.A = true;
    element.B = false;
    element.C = true;

    std::cout << "A = " << element.A << std::endl;
    std::cout << "B = " << element.B << std::endl;
    std::cout << "C = " << element.C << std::endl;

    return 0;
}



