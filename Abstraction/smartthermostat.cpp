#include <iostream>
using namespace std;

class SmartThermostat {
    
private:
    double currentTemp;
    double targetTemp;
    bool isHeatingOn;

public:

    SmartThermostat() : currentTemp(20), targetTemp(20), isHeatingOn(false) {}

    // Mutator 1: Validates and updates target temperature
    void setTargetTemp(double temp) {                 
        if (temp >= 10 && temp <= 35) {
            targetTemp = temp;
            cout << "Target temperature set to: " << targetTemp << "°C" << endl;
        } else {
            cout << "Error: Target temperature must be between 10°C and 35°C." << endl;
        }
    }

    // Mutator 2: Updates current temperature and heating state
    void updateCurrentTemp(double temp) {              
        currentTemp = temp;
        cout << "Current temperature updated to: " << currentTemp << "°C" << endl;
        if (currentTemp < targetTemp)
            isHeatingOn = true;
        else
            isHeatingOn = false;
    }

    // Accessors (Read-only)
    double getCurrentTemp() const { return currentTemp; }
    double getTargetTemp() const  { return targetTemp; }
    bool getHeatingStatus() const { return isHeatingOn; }

    // Display
    void displayStatus() const {                  
        cout << "Current Temperature: " << currentTemp << "°C" << endl;
        cout << "Target Temperature: " << targetTemp << "°C" << endl;
        cout << "Heating Status: " << (isHeatingOn ? "ON" : "OFF") << endl;
    }
};

int main() {
    SmartThermostat thermostat;

    thermostat.setTargetTemp(22.5);
    thermostat.updateCurrentTemp(20.0);
    thermostat.displayStatus();

    return 0;
}