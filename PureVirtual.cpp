// pure virtual functions force every inherited class to make their own function
// virtual void MakeSound() = 0;
// an abstract class is a class that has at least 1 pure vitual function


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
    virtual void talk() = 0;

};


class KaiAndLaila: public Kai {
public:
    KaiAndLaila(int age): Kai(age) {}

    void talk(){ cout << "I am Laila! I love cake" << "\n";}
};

int main() {
    Kai* ptr = new KaiAndLaila(10);
    ptr->talk();

    return 0;
}