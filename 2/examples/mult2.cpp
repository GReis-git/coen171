# include <iostream>

using namespace std;

struct A {
    int x;
    void f() { cout << "x = " << x << endl; }
};

struct B : public A {
};

struct C : public A {
};

struct D : public B, C {
};

int main()
{
    D d;

    // d.x = 1;		// ambiguous reference
    // d.f();		// still ambiguous

    cout << "sizeof D = " << sizeof(D) << endl;

    d.B::x = 2;
    d.C::x = 3;
    d.B::f();
}
