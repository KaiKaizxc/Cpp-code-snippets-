#include <iostream>
#include <string>

//void Print(int val) {
//    std::cout << val << std::endl;
//}
//void Print(string& val) {
//    std::cout << val << std::endl;
//}

template<typename T, int N>
class Array {
private:
    T m_Array[N];
public:
    int getSize() const {return N;}
};



//void Print(T val) {
//    std::cout << valu << std::endl;
//}
int main() {
    Array<int, 5> array;

    // but the print function doesnt exist because it is just a template. Unless we call it. Thats why we still compile

    std::cout << array.getSize()<< std::endl;
    return 0;
}
