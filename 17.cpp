/*
17. Write a program that will read up to ten nonnegative integers into an
array called number_array and then write the integers back to the screen.
For this exercise you need not use any functions. This is just a toy program
and can be very minimal.
*/

#include <iostream>
using namespace std;

const int MAX_SIZE(10);

int main () {
    int number_array[MAX_SIZE];
    int space_used(0), n(0);
    cout << "Enter a series of max 10 numbers. End the sequence with a negative number."  << endl;
    //Input.
    while (n >= 0 && space_used < MAX_SIZE) {
        //Input n.
        cin >> n;
        //Add n and increment space_used if n is nonnegative.
        if(n >= 0) {
            number_array[space_used] = n;
            space_used ++;
        }
    }
    //Output.
    //I output the whole thing written as a c++ array which requires to output the last element outside of the loop. 
    //space_used is the effective size of what has been written into the array.
    if (space_used > 0) {
        cout << endl << "[";
        for (int i = 0; i < space_used - 1; i ++) {
            cout << number_array[i] << ", ";
        }
        //Output the last effective element.
        cout << number_array[space_used - 1] << "]" << endl;
        return 0;
    } else cout << "No positive number has been inputed" << endl;
    
}