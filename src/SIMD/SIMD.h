//
// Created by Andrew Cassidy on 5/5/22.
//

#ifndef VICTOR_SIMD_H
#define VICTOR_SIMD_H

#include <cstdint>
#include <cstdio>
#include <array>
#include "../Vector.h"

namespace Victor::SIMD {
    // Generic serial operation between two vectors
    template<typename Op, typename T, size_t N>
    static inline Vector<T, N> DoOp(const Vector<T, N> &lhs, const Vector<T, N> &rhs, Op f) {
        Vector<T, N> r;
        for (size_t i = 0; i < N; i++) { r[i] = f(lhs[i], rhs[i]); }
        return r;
    }

    // Generic serial operation between a vector and a scalar
    template<typename Op, typename T, size_t N>
    static inline Vector<T, N> DoOp(const Vector<T, N> &lhs, const T &rhs, Op f) {
        Vector<T, N> r;
        for (size_t i = 0; i < N; i++) { r[i] = f(lhs[i], rhs); }
        return r;
    }

    template<class T, size_t N>
    static inline Vector<T, N> add(Vector<T, N> lhs, Vector<T, N> rhs) { return DoOp(lhs, rhs, std::plus()); }

    template<class T, size_t N>
    static inline Vector<T, N> subtract(Vector<T, N> lhs, Vector<T, N> rhs) { return DoOp(lhs, rhs, std::minus()); }

    template<class T, size_t N>
    static inline Vector<T, N> multiply(Vector<T, N> lhs, Vector<T, N> rhs) { return DoOp(lhs, rhs, std::multiplies()); }

    template<class T, size_t N>
    static inline Vector<T, N> divide(Vector<T, N> lhs, Vector<T, N> rhs) { return DoOp(lhs, rhs, std::divides()); }
}


#endif //VICTOR_SIMD_H
