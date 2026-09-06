#pragma once
#include <iostream>

class Fraccion {
    int num_;
    int den_;

    void reducir();

public:
    Fraccion(int n = 0, int d = 1);

    Fraccion operator+(const Fraccion& otra) const;
    Fraccion operator*(const Fraccion& otra) const;
    bool operator==(const Fraccion& otra) const;
    bool operator<(const Fraccion& otra) const;

    friend std::ostream& operator<<(std::ostream& os, const Fraccion& f);
};