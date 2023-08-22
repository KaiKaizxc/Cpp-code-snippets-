//
// Created by admin on 2023-07-24.
//

class Triangle {

private:
    float a;
    float circum;
    float area;
public:
    void setA(float length) {
        a = length;
        circum = a + a + a;
        area = (1.73 * a * a)/4;


    }
    friend class square;

};

class square {

public:
    void printResults(Triangle t) {
        cout << t.a << '\n';
    }

};


int main() {
    std::cout << "Hello World!\n";
    Triangle t;
    t.setA(3);
    square s;
    std::cout << s.printResults(t) << '\n';
}