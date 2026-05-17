cmake_minimum_required(VERSION 3.10)
project(HiddenTreasuresBG VERSION 1.0 DESCRIPTION "Скритите Съкровища на България")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES
    src/main.cpp
    src/PlaceOfInterest.cpp
    src/CulturalResource.cpp
    src/NaturalResource.cpp
    src/TouristAttraction.cpp
    src/Village.cpp
    src/Application.cpp
)

add_executable(HiddenTreasuresBG ${SOURCES})

target_include_directories(HiddenTreasuresBG PRIVATE include)
