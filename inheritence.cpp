//
// Created by admin on 2023-07-19.
//

class Kai {
private:
    string name;
    int age = 10;
    int height;
protected:
    string name; // makes derived classes accessible as well

public:
    Kai(int age): age(age) {}
    int getAge() {
        return age;
    }

};

class Laila: public Kai {
public:
    Laila(int age): Kai(age) {}
};



int main() {
    Kai me = Kai(5);
    cout << me.getAge() << "\n";
    Laila baby = Laila(10);
    cout << baby.getAge() << "\n";
    Laila* baby2 = &baby;
    cout << "number 2 " << baby2->getAge() << "\n";
    return 0;
}
