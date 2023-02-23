//@author Henry Tran

// CS3203 Assignment3 - Git

#include <iostream>
#include <vector>

using namespace std;

//This function takes its parameter created by the user and adds a vector containing integers, and returns the sum.
int adding(vector<int> list) {

    int sum = 0;

    for (int i = 0; i < list.size(); i++) {
        sum += list.at(i);

    }

    return sum;
}

//This function takes its parameter created by the user and multiplies a vector containing integers, returning the product.
int multiplying(vector<int> list) {

    int product = 1;

    for (int i = 0; i < list.size(); i++) {
        product *= list.at(i);

    }

    return product;
}