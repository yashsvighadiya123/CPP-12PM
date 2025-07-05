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
    virtual ~Shape() {}  

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
    virtual void display() const = 0;
};


class Circle : public Shape {
private:
    double radius;

public:
    void setRadius(double r) {
        if (r > 0)
            radius = r;
        else
            cout << "Invalid radius!" << endl;
    }

    void calculateArea() override {
        const double PI = 3.14159; // Defined locally instead of using <cmath>
        double a = PI * radius * radius;
        setArea(a);
    }

    void display() const override {
        cout << "Circle:\n";
        cout << "  Color: " << getColor() << endl;
        cout << "  Radius: " << radius << endl;
        cout << "  Area: " << getArea() << endl;
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
            cout << "Invalid length!" << endl;
    }

    void setWidth(double w) {
        if (w > 0)
            width = w;
        else
            cout << "Invalid width!" << endl;
    }

    void calculateArea() override {
        double a = length * width;
        setArea(a);
    }

    void display() const override {
        cout << "Rectangle:\n";
        cout << "  Color: " << getColor() << endl;
        cout << "  Length: " << length << endl;
        cout << "  Width: " << width << endl;
        cout << "  Area: " << getArea() << endl;
    }
};


int main() {
    
    Circle* circle = new Circle();
    circle->setColor("Green");
    circle->setRadius(7);
    circle->calculateArea();

    Rectangle* rectangle = new Rectangle();
    rectangle->setColor("Orange");
    rectangle->setLength(5);
    rectangle->setWidth(3);
    rectangle->calculateArea();

    Shape* shapes[2];
    shapes[0] = circle;
    shapes[1] = rectangle;

    cout << "Displaying all shapes:\n\n";
    for (int i = 0; i < 2; ++i) {
        shapes[i]->display();
        cout << endl;
    }

    
    delete circle;
    delete rectangle;

}

