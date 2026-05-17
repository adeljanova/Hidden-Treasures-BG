#include "CulturalResource.hpp"

CulturalResource::CulturalResource(const std::string& n, const std::string& desc, const std::string& coords,
                                   const std::string& cent, const std::string& type)
    : PlaceOfInterest(n, desc, coords), century(cent), typeOfCulture(type) {}

void CulturalResource::displayInfo() const {
    std::cout << "[Културен Ресурс] " << name << "\n"
              << "  Тип: " << typeOfCulture << " | Век: " << century << "\n"
              << "  Локация: " << coordinates << "\n"
              << "  Описание: " << description << "\n";
}
