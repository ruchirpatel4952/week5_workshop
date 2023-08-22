#include <iostream>
#include "Orchestra.h"

int main() {
    // Create an orchestra with a maximum size of 3
    Orchestra orchestra(3);

    // Create musicians
    Musician musician1("Violin", 5);
    Musician musician2("Flute", 8);
    Musician musician3("Piano", 10);

    // Add musicians to the orchestra
    orchestra.add_musician(musician1);
    orchestra.add_musician(musician2);
    orchestra.add_musician(musician3);

    // Test methods
    std::cout << "Current number of members: " << orchestra.get_current_number_of_members() << std::endl;

    if (orchestra.has_instrument("Flute")) {
        std::cout << "The orchestra has a flutist." << std::endl;
    } else {
        std::cout << "The orchestra does not have a flutist." << std::endl;
    }

    Musician *members = orchestra.get_members();
    for (int i = 0; i < orchestra.get_current_number_of_members(); ++i) {
        std::cout << "Member " << i + 1 << ": Instrument: " << members[i].get_instrument() << ", Experience: " << members[i].get_experience() << std::endl;
    }

    return 0;
}