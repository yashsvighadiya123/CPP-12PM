#include <iostream>
#include <vector>

bool isLeapYear(int year) {
    if (year % 4 != 0) {
        return false;
    } else if (year % 100 != 0) {
        return true;
    } else if (year % 400 != 0) {
        return false;
    } else {
        return true;
    }
}

int main() {
    int startYear, endYear;
    std::cout << "Enter the first number: ";
    std::cin >> startYear;
    std::cout << "Enter the second number: ";
    std::cin >> endYear;

    std::vector<int> leapYears;
    for (int year = startYear; year <= endYear; ++year) {
        if (isLeapYear(year)) {
            leapYears.push_back(year);
        }
    }

    std::cout << "The array is: ";
    for (size_t i = 0; i < leapYears.size(); ++i) {
        std::cout << leapYears[i];
        if (i < leapYears.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;

    
}
