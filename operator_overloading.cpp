#include <iostream>
#include <vector>
#include <iostream>
#include <string>

Traffic_light& operator++(Traffic_light& t)
{
    using enum Traffic_light;
    switch(t) {
        case green: return t= yellow;
        case yellow: return t= red;

    }
}



int main() {
    Vector v(6);
    for (int i = 0 ; i < v.size(); i++) {
        std::cin >> v[i];

    }
    std::cout << "I am Kai!" << "\n";
    double sum = 0;
    for (int i =0; i < v.size(); i++) {
        sum += v[i];
    }

    return 0;
}
