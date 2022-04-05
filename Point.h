//
// Created by marty on 4/5/2022.
//

#ifndef LAB2_POINT_H
#define LAB2_POINT_H


class Point {
public:
    int x;
    int y;

    Point(const int x = 0, const int y = 0): x(x), y(y){}

    Point operator-(const Point p2) const noexcept {
        return Point{x - p2.x, y - p2.y};
    }
    Point operator+(const Point p2) const noexcept {
        return Point{x + p2.x, y + p2.y};
    }

};


#endif //LAB2_POINT_H
