#ifndef PROPOSITION_H
#define PROPOSITION_H

namespace proplog {

class Proposition {

private:
    int truth; // ranges 0 to 10000
    int falsehood; // ranges 0 to 10000

public:
    Proposition(int t, int f) noexcept;

    ~Proposition(void) noexcept;

    int truth(void) const noexcept;

    int falsehood(void) const noexcept;

    Proposition operator=(Proposition& other) noexcept;

    Proposition operator=(bool other) noexcept;

    Proposition operator==(Proposition& other) const noexcept;

    // TODO: implement logical operators

};

}

#endif