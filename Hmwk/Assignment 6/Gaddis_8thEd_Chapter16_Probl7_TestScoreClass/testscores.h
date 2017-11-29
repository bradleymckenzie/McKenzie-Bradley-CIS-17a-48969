/* 
 * File:   main.cpp
 * Author: Bradley McKenzie
 * Created on November 29, 2017
 * Purpose: Test Score Class
 */

#ifndef TESTSCORES_H
#define TESTSCORES_H

class TestScores{
    private:
        int *scores;
	int total;
    public:
	TestScores(int*, int);
	~TestScores();
	float average();
	void print();
};

#endif /* TESTSCORES_H */

