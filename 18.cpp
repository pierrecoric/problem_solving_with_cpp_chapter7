/*
18.
Write a program that will read up to ten letters into an array and write
the letters back to the screen in the reverse order. For example, if the
input is
abcd.
then the output should be
dcba
Use a period as a sentinel value to mark the end of the input. Call the
array letter_box. For this exercise you need not use any functions. This is
just a toy program and can be very minimal.
*/

#include <iostream>
using namespace std;

const int MAX_SIZE(10);

int main () {
    char char_array[MAX_SIZE];
    int space_used(0);
    char c('a');
    cout << "Enter a series of max 10 numbers. End the sequence with a negative number."  << endl;
    //Input.
    while (c != '.' && space_used < MAX_SIZE) {
        //Input n.
        cin >> c;
        //Add n and increment space_used if n is nonnegative.
        if(c != '.') {
            char_array[space_used] = c;
            space_used ++;
        }
    }
    //Output.
    if (space_used > 0) {
        for (int i = space_used - 1; i >= 0; i --) {
            cout << char_array[i];
        }
        cout << endl;
    } else cout << "No valid character has been inputed" << endl;
    //exit the program.
    return 0;
}  