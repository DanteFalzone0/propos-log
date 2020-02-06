#include "Proposition.h"

namespace proplog {

Proposition::Proposition(int t, int f) noexcept {
    this->truth = t;
    this->falsehood = f;
}

Proposition::~Proposition(void) noexcept {}

int Proposition::truth(void) const noexcept {
    return this->truth;
}

int Proposition::falsehood(void) const noexcept {
    return this->falsehood;
}

Proposition Proposition::operator=(Proposition& other) noexcept {
    this->truth = other.truth();
    this->falsehood = other.falsehood();
    return *this;
}

Proposition Proposition::operator=(bool other) noexcept {
    if (other) {
        this->truth = 10000;
        this->falsehood = 10000;
    } else {
        this->truth = 0;
        this->falsehood = 10000;
    }

    return *this;
}

Proposition operator==(Proposition& other) const noexcept {
    bool t = (other.truth() == this->truth);
    bool f = (other.falsehood() == this->falsehood);

    if (t && f) {
        Proposition p(10000, 0);
        return p;
    } else {
        Proposition p(0, 10000);
        return p;
    }
}

}