#include "Village.hpp"
#include <iostream>

Village::Village(const std::string &n, const std::string &r)
    : name(n), region(r) {}

void Village::addPlace(std::unique_ptr<PlaceOfInterest> place) {
  places.push_back(std::move(place));
}

void Village::displayAllPlaces() const {
  std::cout << "--- Забележителности в с. " << name << " (Област " << region
            << ") ---\n";
  if (places.empty()) {
    std::cout << "  (Няма въведени данни)\n";
    return;
  }
  for (const auto &place : places) {
    place->displayInfo();
    std::cout << "\n";
  }
}

std::string Village::getName() const { return name; }

std::string Village::getRegion() const { return region; }
