/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on October 20th, 2017
 * Purpose: Inventory Class
 */

#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include <string>

class Inventory{
    private:
        int itemN;
        int quantity;
        float cost;
        float totalCost;
    public:
        void setItemN(int);
        void setQuantity(int);
        void setCost(float);
        void setTotalCost(float);
        
        int getItemN();
        int getQuantity();
        float getCost();
        float getTotalCost();
	
	Inventory();
	Inventory(int, int, float, float);
};
#endif /* INVENTORY_H */