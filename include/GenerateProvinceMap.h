#pragma once

#include <MapStructure.h>
#include <MapEdge.h>
#include <vector>

namespace ck3E {
void generateProvinceMap();
bool doesMapStructureSatisfyTheConditionsWeWant(const MapStructure &structure);
bool areModifiedEdgesLand(const std::vector<MapEdge> &modifiedEdges);

}