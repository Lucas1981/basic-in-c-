#include "CirclesLoader.h"

std::vector<Circle> CirclesLoader::loadFromFile(const std::string& filename) {
    std::vector<Circle> circles;
    std::ifstream file(filename);
    float x, y;

    while (file >> x >> y) {
        circles.emplace_back(x, y);
    }

    return circles;
}
