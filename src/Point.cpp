#include "Point.h"

namespace ck3E {
Point::Point(double x, double y) {
    this->x = x;
    this->y = y;
}

double Point::getX() {
    return x;
}

double Point::getY() {
    return y;
}
}

