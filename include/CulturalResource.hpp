#pragma once
#include "PlaceOfInterest.hpp"

class CulturalResource : public PlaceOfInterest {
private:
  std::string century;
  std::string typeOfCulture;

public:
  CulturalResource(const std::string &n, const std::string &desc,
                   const std::string &coords, const std::string &cent,
                   const std::string &type);

  void displayInfo() const override;
};
