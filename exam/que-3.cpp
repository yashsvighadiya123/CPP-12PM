#include <iostream>
using namespace std;

class Shape {
private:
    string color;
    double area;

protected:
    void setArea(double a) {
        area = a;
    }

public:
    void setColor(const string& c) {
        color = c;
    }

    string getColor() const {
        return color;
    }

    double getArea() const {
        return area;
    }

    
    virtual void calculateArea() = 0;

    virtual ~Shape() {}
};


class Circle : public Shape {
private:
    double radius;

public:
    void setRadius(double r) {
        if (r > 0)
            radius = r;
        else
            cout << "Radius must be positive!" << endl;
    }

    void calculateArea() override {
        const double PI = 3.14159;
        double a = PI * radius * radius;
        setArea(a);
    }

    void display() const {
        cout << "Circle - Color: " << getColor()
             << ", Radius: " << radius
             << ", Area: " << getArea() << endl;
    }
};


class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    void setLength(double l) {
        if (l > 0)
            length = l;
        else
            cout << "Length must be positive!" << endl;
    }

    void setWidth(double w) {
        if (w > 0)
            width = w;
        else
            cout << "Width must be positive!" << endl;
    }

    void calculateArea() override {
        double a = length * width;
        setArea(a);
    }

    void display() const {
        cout << "Rectangle - Color: " << getColor()
             << ", Length: " << length
             << ", Width: " << width
             << ", Area: " << getArea() << endl;
    }
};
main() {
    Circle c;
    c.setColor("Red");
    c.setRadius(5);
    c.calculateArea();
    c.display();

    Rectangle r;
    r.setColor("Blue");
    r.setLength(4);
    r.setWidth(6);
    r.calculateArea();
    r.display();
    
    

}

