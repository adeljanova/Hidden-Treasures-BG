#pragma once
#include "PlaceOfInterest.hpp"

class TouristAttraction : public PlaceOfInterest {
private:
  double entryFee;
  int rating;

public:
  TouristAttraction(const std::string &n, const std::string &desc,
                    const std::string &coords, double fee, int starRating);

  void displayInfo() const override;
};
