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

//This function takes its parameter and prints the given vector, but in reverse form.
void reverse(vector<int> list) {
    
    vector<int> copy(list.size(), 0);
    int length = copy.size();

    for (int i = 0; i < copy.size(); i++) {
        copy.at(i) = list.at(length - 1 - i);

    }

    for (int j = 0; j < copy.size(); j++) {
        cout << copy.at(j) << endl;
    }
}

//This main function creates a vector of integers created by the user and passes it on to different functions
//using different operations.
int main()
{
    vector<int> array;
    int input = 0;
    int size = 0;

    cout << "Enter the size of the vector you want to create." << endl;
    cin >> size;

    cout << "Enter in the integers that you want into the list." << endl;

    for (int i = 0; i < size; i++) {
        cin >> input;
        array.push_back(input);
    }

    cout << "The sum of your array is: " << adding(array) << endl;
    cout << "The product of your array is: " << multiplying(array) << endl;
    cout << "Your array reversed is: " << endl;
    reverse(array);

}