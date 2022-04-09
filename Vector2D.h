#ifndef LAB2_VECTOR2D_H
#define LAB2_VECTOR2D_H

#include <iostream>
#include <cmath>

class Vector2D {
private:
    double x;
    double y;
public:
    Vector2D(const double x = 0, const double y = 0): x(x), y(y) {};

    double getX() const {
        return x;
    }
    void setX(double x) {
        Vector2D::x = x;
    }

    double getY() const {
        return y;
    }
    void setY(double y) {
        Vector2D::y = y;
    }


    Vector2D& operator-() noexcept{
        x = -x;
        y = -y;
        return *this;
    }
    Vector2D operator-(const Vector2D v2) const noexcept {
        return Vector2D(x - v2.x, y - v2.y);
    }

    Vector2D& operator+=(const Vector2D v2) noexcept{
        x += v2.x;
        y += v2.y;
        return *this;
    }

    Vector2D operator*(const double value) const noexcept{
        return Vector2D(x * value, y * value);
    }

    double vLength() const noexcept {
        return sqrt(pow(x,2) + pow(y, 2));
    }

    void Show() const noexcept {
        std::cout << "x: " << x << " y: " << y << std::endl;
    }

    Vector2D normalize() const noexcept {
        return Vector2D(x / this->vLength(), y / this->vLength());
    }

    double dist(const Vector2D v2) const noexcept {
        return (*this - v2).vLength();
    }
};



#endif //LAB2_VECTOR2D_H
