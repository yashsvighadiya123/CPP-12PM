#include <iostream>
using namespace std;


class Rectangle {
private:
    double length;
    double width;

public:
    void setLength(double l) {
        if (l > 0) {
            length = l;
        } else {
            cout << "Length must be positive!" << endl;
        }
    }

    void setWidth(double w) {
        if (w > 0) {
            width = w;
        } else {
            cout << "Width must be positive!" << endl;
        }
    }

    // Getter for length
    double getLength() const {
        return length;
    }

    // Getter for width
    double getWidth() const {
        return width;
    }

    // Method to calculate area
    double calculateArea() const {
        return length * width;
    }
};

int main() {
    Rectangle rect;

    
    rect.setLength(10.5);
    rect.setWidth(4.2);

    
    cout << "Length: " << rect.getLength() << endl;
    cout << "Width: " << rect.getWidth() << endl;

    
    cout << "Area: " << rect.calculateArea() << endl;

   
}

