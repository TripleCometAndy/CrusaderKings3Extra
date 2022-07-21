#pragma once

#include <vector>
#include <MapEdge.h>

namespace ck3E {
class MapStructure {
  private:

  public:
    MapStructure();
    void create(double area);
    void modifyEdgesToBeLandOrWater();
    std::vector<MapEdge> getModifiedEdges();
    void append(const std::vector<MapEdge> &modifiedEdges, double area);
};
}