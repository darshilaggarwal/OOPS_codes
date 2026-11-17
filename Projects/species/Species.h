#pragma once
#include <string>
using namespace std;


class Species {
public:
    // Instance Variables (Attributes)
    string name;
    int population;
    double growthRate;

    // Method Declarations (Member Functions)
    void readInput();
    void writeOutput() const;
    int predictPopulation(int years);
    
    // Mutator using 'this->' to resolve name collisions
    void setSpecies(string name, int population, double growthRate);
};