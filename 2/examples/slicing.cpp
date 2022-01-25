# include <iostream>

using namespace std;

struct parent {
    virtual void whoami() { cout << "I am the parent" << endl; }
};

struct child : public parent {
    virtual void whoami() { cout << "I am the child" << endl; }
};

void f(parent p) {
    p.whoami();
}

void g(parent &p) {
    p.whoami();
}

void h(parent *p) {
    p->whoami();
};

int main() {
    child c;

    c.whoami();

    cout << "calling f ..." << endl;
    f(c);
    cout << "calling g ..." << endl;
    g(c);
    cout << "calling h ..." << endl;
    h(&c);
}
