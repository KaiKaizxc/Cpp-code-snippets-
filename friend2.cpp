//
// Created by admin on 10/9/2023.
//
using namespace std;
class class1 {
private:
    int a;
    float b;
public:
    void setA(int c) {
        a = c;

    }
};

int main() {

    class1 one;
    one.setA(2);
    cout << one.a << '\n';


    return 0;
}