# include <iostream>

using namespace std;

struct A {
    void f() {cout << "I am in A" << endl;}
};

struct B : public A {
    void f() {cout << "I am in B" << endl;}
};

struct C : public A {
};

struct D : public B, C {
};

int main()
{
    D d;

    // d.f();		// ambiguous reference

    d.B::f();
    d.C::f();
}
