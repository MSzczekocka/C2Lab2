#ifndef LAB2_VECTOR2D_H
#define LAB2_VECTOR2D_H

#include <iostream>
#include "Point.h"

class Vector2D {
private:
    Point p1;
    Point p2;
public:
    Vector2D(const Point p1 = Point(0,0), const Point p2 = Point(0,0)): p1(p1), p2(p2) {};
    Vector2D(const int x1, const int y1, const int x2, const int y2): p1(Point(x1, y1)), p2(Point(x2, y2)) {};

    const Point &getP1() const {
        return p1;
    }
    void setP1(const Point &p1) {
        Vector2D::p1 = p1;
    }

    const Point &getP2() const {
        return p2;
    }
    void setP2(const Point &p2) {
        Vector2D::p2 = p2;
    }

    Vector2D& operator-() {
        p1.x = -p1.x;
        p1.y = -p1.y;
        p2.x = -p2.x;
        p2.y = -p2.y;
        return *this;
    }
    Vector2D operator-(const Vector2D v2) const noexcept {
        return Vector2D(p1 - v2.p1, p2 - v2.p2);
    }

    void Show(const Vector2D v) const noexcept {
        std::cout <<
    }
};


#endif //LAB2_VECTOR2D_H
