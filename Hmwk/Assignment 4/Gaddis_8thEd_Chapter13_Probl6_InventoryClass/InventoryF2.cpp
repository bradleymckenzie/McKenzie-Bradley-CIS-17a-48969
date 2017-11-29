/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on October 17th, 2017
 * Purpose: Inventory Function
 */

#include <iomanip>
#include <string>
#include "Inventory.h"

Inventory::Inventory()
{
    itemN = 0;
    quantity = 0;
    cost = 0;
    totalCost = 0;
}
Inventory::Inventory(int itemN, int quantity, float cost, float totalCost)
{
    this->itemN = itemN;
    this->quantity = quantity;
    this->cost = cost;
    this->totalCost = totalCost;
}
void Inventory::setItemN(int itemN)
{
    this->itemN = itemN;
}
void Inventory::setQuantity(int quantity)
{
    this->quantity = quantity;
}
void Inventory::setCost(float cost)
{
    this->cost = cost;
}
void Inventory::setTotalCost(float totalCost)
{
    this->totalCost = this->quantity * this->cost;
}
int Inventory::getItemN()
{
    return itemN;
}
int Inventory::getQuantity()
{
    return quantity;
}
float Inventory::getCost()
{
    return cost;
}
float Inventory::getTotalCost()
{
    return totalCost;
}