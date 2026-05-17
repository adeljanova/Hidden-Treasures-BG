#pragma once
#include <iostream>
#include <string>

class PlaceOfInterest {
protected:
  std::string name;
  std::string description;
  std::string coordinates;

public:
  PlaceOfInterest(const std::string &n, const std::string &desc,
                  const std::string &coords);
  virtual ~PlaceOfInterest() = default;

  virtual void displayInfo() const = 0;

  std::string getName() const;
  std::string getDescription() const;
};
