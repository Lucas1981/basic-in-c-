#ifndef CIRCLES_LOADER_H
#define CIRCLES_LOADER_H

#include "../Circle/Circle.h"
#include <vector>
#include <fstream>
#include <string>

class CirclesLoader {
public:
    static std::vector<Circle> loadFromFile(const std::string& filename);
};

#endif // CIRCLES_LOADER_H
