#include <iostream>
#include "Species.h"
using namespace std;

int main() {
    cout << "=== DEMO 1: Reading and Predicting Species Data ===" << endl;
    
    // 1. Instantiate object
    Species species;

    // 2. Read user input and display
    species.readInput();
    cout << "\n--- Current Species Details ---" << endl;
    species.writeOutput();

    // 3. Predict population with parameter (Slide 63)
    int numYears = 10;
    int futurePopulation = species.predictPopulation(numYears);
    cout << "In " << numYears << " years the population will be: " 
         << futurePopulation << endl;

    // -------------------------------------------------------------
    // DEMO 2: Modifying instance variables via setSpecies (Slide 64)
    // -------------------------------------------------------------
    cout << "\n=== DEMO 2: Modifying Instance Variables ===" << endl;
    species.setSpecies("Klingon ox", 10, 15);
    
    cout << "--- The New Species Details ---" << endl;
    species.writeOutput();
    
    cout << "In " << numYears << " years the population will be: " 
         << species.predictPopulation(numYears) << endl;

    return 0;
}