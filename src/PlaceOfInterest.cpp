#include "PlaceOfInterest.hpp"

PlaceOfInterest::PlaceOfInterest(const std::string& n, const std::string& desc, const std::string& coords)
    : name(n), description(desc), coordinates(coords) {}

std::string PlaceOfInterest::getName() const {
    return name;
}

std::string PlaceOfInterest::getDescription() const {
    return description;
}
