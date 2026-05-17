#pragma once
#include "PlaceOfInterest.hpp"
#include <memory>
#include <string>
#include <vector>

class Village {
private:
  std::string name;
  std::string region;
  std::vector<std::unique_ptr<PlaceOfInterest>> places;

public:
  Village(const std::string &n, const std::string &r);

  void addPlace(std::unique_ptr<PlaceOfInterest> place);
  void displayAllPlaces() const;

  std::string getName() const;
  std::string getRegion() const;
};
