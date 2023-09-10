//
// Created by admin on 9/9/2023.
//

// run time polymorphism
using namespace std;


class myClass {
public:
    myClass(){}

    void makeSound() {
        cout << "SOUND!" << '\n';
    }

private:

};

class myClass {
public:
    myClass(){}

    virtual void makeSound() = 0;

private:

};


class myClass2: myClass {
public:
    myClass2() {};
};

int main() {

    myClass class1;
    class1.makeSound();


    return 0;
}