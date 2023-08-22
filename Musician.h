#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <string>

class Musician {
public:
    Musician();  // Default constructor
    Musician(std::string instrument, int experience);  // Parameterized constructor
    
    std::string get_instrument() const;  // Getter for instrument
    int get_experience() const;  // Getter for experience

private:
    std::string instrument;  // Store the instrument played
    int experience;  // Store years of experience
};

#endif // MUSICIAN_H