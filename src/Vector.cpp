//
// Created by Andrew Cassidy on 5/5/22.
//

#include "Vector.h"
#include "SIMD/SIMD.h"

namespace Victor {
    template<class T, size_t N>
    Vector<T, N> operator+(const Vector<T, N> &lhs, const Vector<T, N> &rhs) {
        return SIMD::add(lhs, rhs);
    }

    template<class T, size_t N>
    Vector<T, N> operator-(const Vector<T, N> &lhs, const Vector<T, N> &rhs) {
        return SIMD::subtract(lhs, rhs);
    }

    template<class T, size_t N>
    Vector<T, N> operator*(const Vector<T, N> &lhs, const Vector<T, N> &rhs) {
        return SIMD::multiply(lhs, rhs);
    }

    template<class T, size_t N>
    Vector<T, N> operator/(const Vector<T, N> &lhs, const Vector<T, N> &rhs) {
        return SIMD::divide(lhs, rhs);
    }
}