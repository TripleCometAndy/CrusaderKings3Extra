#include <MapStructure.h>
#include <iostream>

namespace ck3E {
MapStructure::MapStructure() {
    
}

void MapStructure::create(double area) {
    //Create a random polygon and add it to the vector of polygons
    MapPolygon *polygon = new MapPolygon(area, 3, 10);

    polygons.push_back(std::move(std::unique_ptr<MapPolygon>(polygon)));
}

void MapStructure::modifyEdgesToBeLandOrWater() {
}

std::vector<MapEdge> MapStructure::getModifiedEdges() {
    return std::vector<MapEdge>();
}

void MapStructure::append(const std::vector<MapEdge> &modifiedEdges, double area) {
}

}