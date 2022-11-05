#include <iostream>
using namespace std;

class shape {
    int l, b, h;

  public:
    shape(int l, int b, int h) : l(l), b(b), h(h) {}
    float volume() { return l * b * h; }
};

class cuboid : public shape {
  public:
    cuboid(int l, int b, int h) : shape(l, b, h) {}
    float volume() { return shape::volume(); }
};

class cylinder : public shape {
    int r;

  public:
    cylinder(int r, int h) : shape(r, r, h), r(r) {}
    float volume() { return 3.14 * r * r * shape::volume(); }
};

class cube : public shape {
  public:
    cube(int l) : shape(l, l, l) {}
    float volume() { return shape::volume(); }
};

int main(void) {
    cuboid c1(2, 3, 4);
    cylinder c2(2, 3);
    cube c3(2);

    shape *s1 = &c2;

    cout << "Volume of cuboid : " << c1.volume() << endl;
    cout << "Volume of cylinder : " << c2.volume() << endl;
    cout << "Volume of cube : " << c3.volume() << endl;
    cout << "\nVolume of cylinder : " << s1->volume() << " (wrong output)\n";
    return 0;
}
