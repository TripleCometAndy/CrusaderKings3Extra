#pragma once

namespace ck3E {
class Point {
  private:
    double x;
    double y;

  public:
    Point(double x, double y);
    double getX();
    double getY();
};
}