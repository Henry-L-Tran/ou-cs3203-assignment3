//@author Henry Tran

// CS3203-Assignment3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

//This function takes its parameter and adds a vector containing integers, and returns the sum.
int adding(vector<int> list) {

    int sum = 0;

    for (int i = 0; i < list.size(); i++) {
        sum += list.at(i);

    }

    return sum;
}