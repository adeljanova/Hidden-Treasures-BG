#pragma once
#include "PlaceOfInterest.hpp"

class NaturalResource : public PlaceOfInterest {
private:
    std::string naturalFormation;
    bool isProtectedArea;

public:
    NaturalResource(const std::string& n, const std::string& desc, const std::string& coords,
                    const std::string& formation, bool protectedArea);

    void displayInfo() const override;
};
