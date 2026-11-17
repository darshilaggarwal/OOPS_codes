#pragma once
#include <string>
#include <iostream>
using namespace std;

class StudentProfile {
private:
    string fullName;
    int studentID;
    double creditScore;
    int totalAbsences;
    bool graduated;

    // Method A
    void writeAuditLog(string action);

public:
    // Method 1
    string retrieveName() const; // getter

    // Method 2
    void updateCreditScore(double newScore); // setter

    // Method 3
    bool isAtRiskOfFailing() const;  // getter

    // Method 4
    double calculateTuitionFee(double baseRate) const;  

    // Method 5
    void applyAbsencePenalty(int days); // setter

    // Method 6
    void markAsGraduated(); // setter

    // Method 7
    int logAttendanceAndReturnCount(); // setter

    // Method 8
    void displaySummary() const; // getter
};