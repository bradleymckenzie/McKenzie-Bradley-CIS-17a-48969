/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 22, 2017
 * Purpose: Absolute Value Template:
 */

#ifndef ABSOLUTE_H
#define ABSOLUTE_H

template <class T>
T absolute(T num){
    return num >= 0 ? num : -1*num;
}

#endif /* ABSOLUTE_H */

