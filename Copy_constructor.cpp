//
// Created by admin on 2023-07-26.
//
class Book {
public:
    string Title;
    string Author;
    float* rates;
    int ratesCounter;

    Book (string Title, string Author) {
        Title = Title;
        Author = Author;
        ratesCounter=  2;
        rates = new float[ratesCounter];
        rates[0] = 5;
        rates[1] = 4;
    }
    Book(cosnt Book& original)
    ~Book() {
        delete[]rates;
        rates = nullptr;
    }

};

void doSomething(Widget b);
class Widget {
public:
    explicit Widget(int x = 0, bool boolean = True);
};



int main() {
    // baseically when I want to create a new object based on an already existing object
    doSomething(27);
}