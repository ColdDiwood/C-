#include <iostream>

class Square {
private:
    double side;
    double area;

public:
    void set_side(double s) {
        if (s >= 0) {
            side = s;
            area = s * s;
        }
    }

    void print() {
        std::cout << "Side: " << side << ", Area: " << area << std::endl;
    }
};

int main() {
    Square square;
    square.set_side(5.0);
    square.print();

    return 0;
}

