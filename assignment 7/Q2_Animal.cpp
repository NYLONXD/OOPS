#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks: Woof Woof" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() {
        cout << "Cat meows: Meow Meow" << endl;
    }
};

int main() {
    Animal* ptr;

    Dog dog;
    Cat cat;

    ptr = &dog;
    ptr->sound();

    ptr = &cat;
    ptr->sound();

    return 0;
}
