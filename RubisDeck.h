// rubis.h  (minimal version so RubisDeck compiles)
#ifndef RUBIS_H
#define RUBIS_H

#include <ostream>

class Rubis {
    int value;
    Rubis(int v) : value{v} {}      // private: only RubisDeck creates rubis
    friend class RubisDeck;
public:
    operator int() const { return value; }
    friend std::ostream& operator<<(std::ostream& os, const Rubis& r) {
        return os << r.value << " rubis";
    }
};

#endif