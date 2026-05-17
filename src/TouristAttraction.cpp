#include "TouristAttraction.hpp"

TouristAttraction::TouristAttraction(const std::string& n, const std::string& desc, const std::string& coords,
                                     double fee, int starRating)
    : PlaceOfInterest(n, desc, coords), entryFee(fee), rating(starRating) {}

void TouristAttraction::displayInfo() const {
    std::cout << "[Туристическа Атракция] " << name << "\n"
              << "  Входна такса: " << entryFee << " лв. | Рейтинг: " << rating << "/5 звезди\n"
              << "  Локация: " << coordinates << "\n"
              << "  Описание: " << description << "\n";
}
