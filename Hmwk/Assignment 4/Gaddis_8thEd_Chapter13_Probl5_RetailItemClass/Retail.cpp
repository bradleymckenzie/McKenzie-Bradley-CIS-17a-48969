/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on October 17th, 2017
 * Purpose: Retail Item Functions
 */

#include <iomanip>
#include <string>
#include "RetailItem.h"
using namespace std;

RetailItem::RetailItem()
{
    itemN = "";
    units = 0;
    price = 0;
}

RetailItem::RetailItem(string itemN, int units, float price)
{
    this->itemN = itemN;
    this->units = units;
    this->price = price;
}

void RetailItem::setUnits(int units)
{
    this->units = units;
}
void RetailItem::SetItemN(string itemN)
{
    this->itemN = itemN;
}
void RetailItem::setPrice(float price)
{
    this->price = price;
}
int RetailItem::getUnits()
{
    return units;
}
string RetailItem::getItemN()
{
    return itemN;
}
float RetailItem::getPrice()
{
    return price;
}