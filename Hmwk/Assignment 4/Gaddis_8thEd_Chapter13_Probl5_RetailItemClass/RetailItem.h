/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on October 20th, 2017
 * Purpose: Retail Item Class
 */

#ifndef RETAILITEM_H
#define RETAILITEM_H

#include <iomanip>
#include <string>
using namespace std;

class RetailItem{
    private:
        string itemN;
        int units;
        float price;
    public:
	void SetItemN(string);
        void setUnits(int);
	void setPrice(float);
		
	string getItemN();
	int getUnits();
	float getPrice();
	
	RetailItem();
	RetailItem(string, int, float);
};


#endif /* RETAILITEM_H */

