#include <MapPolygon.h>
#include <random>

namespace ck3E {

MapPolygon::MapPolygon(double area, int minVertices, int maxVertices) {
    //Generate a random polygon with area 'area'

}

void MapPolygon::generatePolygon(double area, int minVertices, int maxVertices) {
    //Generate a random number of vertices between a and b for our polygon
    int numberOfVertices = generateNumberOfVertices(minVertices, maxVertices);

    //Generate a random sequence of numbers with length (numberOfVertices * 2) that add up to 'area'
    std::vector<double> sequenceAddingToArea = getSequenceOfNumbersAddingToX(area);

    //Derive and set the points of this polygon based on this sequence

}

int MapPolygon::generateNumberOfVertices(int minVertices, int maxVertices) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(minVertices, maxVertices);

    return distr(gen);
}

std::vector<double> MapPolygon::getSequenceOfNumbersAddingToX(double x) {
    return std::vector<double>();
}
}


