// polymorphism essentially is saying that ancestor classes can be pointed to child classes too

class Kai {
private:
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


class LailaBaby: public Kai {
public:
    LailaBaby(int age): Kai(age) {}

    void talk(){ cout << "I am Laila!" << "\n";}
};

int main() {
    LailaBaby laila(5);
    laila.talk();
    Kai* ptr = &laila;
    ptr->talk();

    return 0;
}