# include <string>
# include <iostream>

using namespace std;

struct person {
    person(const string &name) { cout << "my name is " << name << endl; }
};

int main() {
    // person p;		// doesn't work
    string s;

    cout << "What's your name?" << endl;
    cin >> s;

    person p(s);
}
