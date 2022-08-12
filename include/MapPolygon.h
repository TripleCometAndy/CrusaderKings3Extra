#pragma once

#include <vector>
#include "Point.h"

namespace ck3E {
class MapPolygon {
  private:
    std::vector<Point> points;

    void generatePolygon(double area, int minVertices, int maxVertices);
    int generateNumberOfVertices(int minVertices, int maxVertices);
    std::vector<double> getSequenceOfNumbersAddingToX(double x);
  public:
    MapPolygon(double area, int minVertices, int maxVertices);
};
}