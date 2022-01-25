# include <iostream>

using namespace std;

struct A {
    int x;
    void f() { cout << "x = " << x << endl; }
};

struct B : virtual public A {
};

struct C : virtual public A {
};

struct D : public B, C {
};

int main()
{
    D d;

    d.x = 1;		// no longer ambiguous
    d.f();		// ditto

    cout << "sizeof D = " << sizeof(D) << endl;

    // d.B::x = 2;
    d.C::x = 3;
    d.B::f();		// all print 3
    d.C::f();
    d.f();
}
