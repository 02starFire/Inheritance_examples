#include <iostream>
#include <string>

class Father {
public:

    void displayEyes() {
        std::cout << "Father gives his blue eyes. " << std::endl;
    }
};

class Mother {
public:
    void displayHair() {
        std::cout << "Mother gives her brown hair." << std::endl;
    }
};

class Child : public Father, public Mother {};

int main() {
    Child myChild;
    
    myChild.displayEyes();
    myChild.displayHair();
    return 0;
}

