#include <iostream>
#include <string>
using namespace std;

struct Kai {
    string Name;
    int height;
    Kai(string name, int height): Name(name), height(height){}
};


ostream& operator<<(ostream& COUT , Kai& KAI) {
    COUT<<"Name: " << KAI.Name << '\n';
    COUT<<"Height: " <<KAI.height << '\n';

    return COUT;
}

struct Laila {
    int love = 0 ;
    void operator+=(Kai& kai) {
        this->love += kai.height;
        love += kai.height;
        cout << love << '\n';
    }
    Laila(int love): love(love){}
};

int main() {

    Kai kaii = Kai("kai", 175);
    Kai kaii2 = Kai("kaii", 180);
    Laila l(0);
    l += kaii;
    cout << l.love << '\n';

    return 0;
}