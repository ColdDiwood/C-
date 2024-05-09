#include <iostream>

class AdHocSquare {
public:

    AdHocSquare(double side) : side(side) {}

    void set_side(double side) {
        if (side >= 0)
            this->side = side;
    }

    double get_area() {
        return side * side;
    }

private:
    double side;
};

class LazySquare {
public:

    LazySquare(double side) : side(side), area(side * side), side_changed(false) {}
    
    void set_side(double side) {
        if (side >= 0) {
            this->side = side;
            side_changed = true;
        }
    }
    

    double get_area() {
        if (side_changed) {
            area = side * side;
            side_changed = false;
        }
        return area;
    }

private:
    double side;
    double area;
    bool side_changed;
};

int main() {
    AdHocSquare square1(5.0);
    std::cout << "AdHocSquare area: " << square1.get_area() << std::endl;

    square1.set_side(3.0);
    std::cout << "AdHocSquare area after side change: " << square1.get_area() << std::endl;

    LazySquare square2(5.0);
    std::cout << "LazySquare area: " << square2.get_area() << std::endl;

    square2.set_side(3.0);
    std::cout << "LazySquare area after side change: " << square2.get_area() << std::endl;

    return 0;
}

