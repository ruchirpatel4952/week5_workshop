#ifndef ORCHESTRA_H
#define ORCHESTRA_H

#include <string>
#include "Musician.h"  // Include the Musician class header

class Orchestra {
public:
    Orchestra();              // Default constructor
    Orchestra(int size);      // Constructor for an orchestra of given size
    ~Orchestra();             // Destructor

    int get_current_number_of_members() const;  // Get current number of members
    bool has_instrument(std::string instrument) const;  // Check if an instrument is present
    Musician *get_members() const;  // Get the array of orchestra members

    bool add_musician(Musician new_musician);  // Add a new musician to the orchestra

private:
    int max_size;             // Maximum size of the orchestra
    int current_size;         // Current number of musicians
    Musician *members;        // Array of members of the orchestra
};

#endif // ORCHESTRA_H
