//
// Created by Andrew Cassidy on 5/5/22.
//

#ifndef VICTOR_VECTOR_H
#define VICTOR_VECTOR_H

#include <cstdint>
#include <cstdio>
#include <array>

namespace Victor {
    template<class T, size_t N>
    class Vector {
        std::array<T, N> _components;

        friend Vector operator+(const Vector &lhs, const Vector &rhs);
        friend Vector operator-(const Vector &lhs, const Vector &rhs);
        friend Vector operator*(const Vector &lhs, const Vector &rhs);
        friend Vector operator/(const Vector &lhs, const Vector &rhs);

    };
}


#endif //VICTOR_VECTOR_H
