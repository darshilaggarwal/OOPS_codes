#include "Species.h"
#include <iostream>
using namespace std;

// Method 1: Reads species data from the user with input validation
void Species::readInput() {
    cout << "What species' name? ";
    cin >> name;

    cout << "What is the population of the species? ";
    cin >> population;

    // Input validation: population cannot be negative
    while (population < 0) {
        cout << "Population must not be negative." << endl;
        cout << "Re-enter population: ";
        cin >> population;
    }

    cout << "Enter growth rate (percent increase per year): ";
    cin >> growthRate;
}

// Method 2: Displays the species information to the console
void Species::writeOutput() const {
    cout << "Name = " << name << endl;
    cout << "Population = " << population << endl;
    cout << "Growth rate = " << growthRate << "%" << endl;
}

// Method 3: Calculates projected population after 'years' (Slide 62)
int Species::predictPopulation(int years) {
    int result = 0;
    double populationAmount = population;
    int count = years;

    while ((count > 0) && (populationAmount > 0)) {
        populationAmount += (growthRate / 100.0) * populationAmount;
        count--;
    }

    if (populationAmount > 0) {
        result = static_cast<int>(populationAmount);
    }

    return result;
}

// Method 4: Sets all three variables using the 'this->' pointer (Slide 61)
void Species::setSpecies(string name, int population, double growthRate) {
    this->name = name;
    this->population = population;
    this->growthRate = growthRate;
}