#pragma once
#include <vector>
#include "Village.hpp"

class Application {
private:
    std::vector<Village> villages;

    void seedData();
    void showMenu();
    void listVillages() const;
    void showVillageDetails() const;
    void addNewVillage();
    void addNewObject();

public:
    Application();
    void run();
};
