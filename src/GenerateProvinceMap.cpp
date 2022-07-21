#include <GenerateProvinceMap.h>
#include <MapStructure.h>
#include <MapEdge.h>

#include <vector>

namespace ck3E {
void generateProvinceMap() {
    // Generate a random polygon with area X
    double area = 50;

    MapStructure structure;
    
    structure.create(area);


    while (doesMapStructureSatisfyTheConditionsWeWant(structure)) {
        // Given the structure, choose a random number of adjacent edges to be
        // land or water
        structure.modifyEdgesToBeLandOrWater();

        std::vector<MapEdge> modifiedEdges = structure.getModifiedEdges();

        // If land, take the points of these edges and compute a new polygon
        // that does not intersect with the existing structure
        if (areModifiedEdgesLand(modifiedEdges)) {
            structure.append(modifiedEdges, area);
        }
    }
}

bool doesMapStructureSatisfyTheConditionsWeWant(const MapStructure &structure) {
    return false;
}

bool areModifiedEdgesLand(const std::vector<MapEdge> &modifiedEdges) {
    return false;
}
}

