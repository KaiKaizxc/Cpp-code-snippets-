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
    virtual void talk() {cout << "I am Kai!" << "\n";}

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
