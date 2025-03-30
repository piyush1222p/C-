#include <iostream>

// Define an enumeration for the days of the week
enum Day {
    sunday = 0,
    monday = 1,
    tuesday = 2,
    wednesday = 3,
    thursday = 4,
    friday = 5,
    saturday = 6
};

/* Enums:
   - Enums are user-defined data types that consist of paired named-integer constants.
   - Enums assign numbers to the values which are placed there from zero to infinite.
   - Enums are used to give a name to a constant.
*/

int main() {
    Day today = monday;  // Assign the value 'monday' to the variable 'today'

    // Use a switch statement to print the name of the day
    switch (today) {
        case sunday:
            std::cout << "It is Sunday..." << std::endl;
            break;
        case monday:
            std::cout << "It is Monday..." << std::endl;
            break;
        case tuesday:
            std::cout << "It is Tuesday..." << std::endl;
            break;
        case wednesday:
            std::cout << "It is Wednesday..." << std::endl;
            break;
        case thursday:
            std::cout << "It is Thursday..." << std::endl;
            break;
        case friday:
            std::cout << "It is Friday..." << std::endl;
            break;
        case saturday:
            std::cout << "It is Saturday..." << std::endl;
            break;
    }

    return 0;
}