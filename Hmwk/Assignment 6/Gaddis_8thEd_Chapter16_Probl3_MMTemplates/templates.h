/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 22, 2017
 * Purpose: Minimum/Maximum Template:
 */

#ifndef TEMPLATES_H
#define TEMPLATES_H

template <class Min>
Min minimum(Min x, Min y) {
    return ((x < y) ? x : y);
}

template <class Max>
Max maximum(Max x, Max y) {
    return ((x > y) ? x : y);
}

#endif /* TEMPLATES_H */

