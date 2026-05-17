#include "NaturalResource.hpp"

NaturalResource::NaturalResource(const std::string& n, const std::string& desc, const std::string& coords,
                                 const std::string& formation, bool protectedArea)
    : PlaceOfInterest(n, desc, coords), naturalFormation(formation), isProtectedArea(protectedArea) {}

void NaturalResource::displayInfo() const {
    std::cout << "[Природен Ресурс] " << name << "\n"
              << "  Формирование: " << naturalFormation 
              << (isProtectedArea ? " (Защитена територия)" : " (Не е защитена)") << "\n"
              << "  Локация: " << coordinates << "\n"
              << "  Описание: " << description << "\n";
}
