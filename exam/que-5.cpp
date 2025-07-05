#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0; 
    virtual void move() = 0;  

    virtual ~Animal() {} 
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog says: Woof!" << endl;
    }

    void move() override {
        cout << "Dog runs on four legs." << endl;
    }
};

// Derived class: Bird
class Bird : public Animal {
public:
    void sound() override {
        cout << "Bird says: Chirp!" << endl;
    }

    void move() override {
        cout << "Bird flies in the sky." << endl;
    }
};

int main() {
    Dog* dog = new Dog();
    Bird* bird = new Bird();

    Animal* animals[2];
    animals[0] = dog;
    animals[1] = bird;

    cout << "Animal Actions:\n" << endl;
    for (int i = 0; i < 2; ++i) {
        animals[i]->sound();
        animals[i]->move();
        cout << endl;
    }

    delete dog;
    delete bird;

    return 0;
}

