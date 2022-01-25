# include <iostream>

using namespace std;

struct B {
    B() { cout << "B's default constructor called" << endl; }
    B(const B &b) { cout << "B's copy constructor called" << endl; }
};

struct A {
    B b;

    A() { cout << "A's default constructor called" << endl; }
    A(const A &a) { cout << "A's copy constructor called" << endl; }
};

void f(A param)
{
}

void g(A &param)
{
}

int main() {
    A a;

    cout << "calling f ..." << endl;
    f(a);
    cout << "calling g ..." << endl;
    g(a);
}
