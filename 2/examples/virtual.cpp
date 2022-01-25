# include <iostream>
# include <vector>

using namespace std;

struct shape {
    void draw() { cout << "draw a shape" << endl; }
    virtual void vdraw() { cout << "draw a shape" << endl; }
};

struct polygon : public shape {
    void draw() { cout << "draw a polygon" << endl; }
    virtual void vdraw() { cout << "draw a polygon" << endl; }
};

struct quadrilateral : public polygon {
    void draw() { cout << "draw a quadrilateral" << endl; }
    virtual void vdraw() { cout << "draw a quadrilateral" << endl; }
};

void drawme(shape &s) {
    s.draw();
}

void vdrawme(shape &s) {
    s.vdraw();
}

int main() {
    quadrilateral q;
    drawme(q);			// thinks it's a shape
    vdrawme(q);			// thinks it's a quadrilateral

    vector<shape> v1;
    v1.push_back(q);

    for (auto s : v1)
	s.vdraw();		// oops, object slicing

    vector<shape *> v2;		// use pointers to avoid object slicing
    v2.push_back(&q);

    for (auto s : v2)
	s->vdraw();		// works correctly

    // vector<shape &> v3;		// can't have vector of references
}
