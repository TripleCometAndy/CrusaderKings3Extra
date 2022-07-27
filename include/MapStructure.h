#pragma once

#include <vector>
#include <MapEdge.h>
#include <MapPolygon.h>
#include <memory>

namespace ck3E {
class MapStructure {
  private:
    std::vector<std::unique_ptr<MapPolygon>> polygons;

  public:
    MapStructure();
    void create(double area);
    void modifyEdgesToBeLandOrWater();
    std::vector<MapEdge> getModifiedEdges();
    void append(const std::vector<MapEdge> &modifiedEdges, double area);
};
}