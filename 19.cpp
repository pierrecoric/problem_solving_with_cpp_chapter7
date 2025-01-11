/*
19. Following is the declaration for an alternative version of the function
search defined in Display 7.12. In order to use this alternative version of
the search function, we would need to rewrite the program slightly, but
for this exercise all you need to do is to write the function definition for
this alternative version of search.
bool search(const int a[], int number_used,
int target, int& where);
//Precondition: number_used is <= the declared size of the
//array a; a[0] through a[number_used - 1] have values.
//Postcondition: If target is one of the elements a[0]
//through a[number_used - 1], then this function returns
//true and sets the value of where so that a[where] ==
//target; otherwise this function returns false and the
//value of where is unchanged.
*/


#include <iostream>
using namespace std;

const int MAX_SIZE(10);

bool search(const int a[], int number_used, int target, int& where);
int fillArray(int arr[], int size);
void outputArray(int arr[], int space_used);



int main() {
    int numbers[MAX_SIZE];
    int space_used = fillArray(numbers, MAX_SIZE);
    cout << "The array we are working on:" << endl;
    outputArray(numbers, space_used);
    int targetIndex(0);
    int target(0);
    cout << "Which number are we looking for?" << endl;
    cin >> target;
    bool found = search(numbers, space_used, target, targetIndex);
    if (found) {
        cout << target << " has been found at index " << targetIndex << "." << endl;
    } else cout << target << " has not been found." << endl;
    return 0;
}


//Function to fill an array. It returns an integer as the size effectively used in the array at the end of the function.
int fillArray(int arr[], int size) {
    int space_used(0), n(0);
    cout << "Enter up to 10 numbers, end the sequence by inputing a negative number." << endl;
    while(space_used < size && n >= 0) {
        cin >> n;
        if(n >= 0) {
            arr[space_used] = n;
            space_used ++;
        }
    }
    return space_used;
}

//Function to display an array with the C++ array format.
void outputArray(int arr[], int space_used) {
    if (space_used > 0) {
        cout << endl << "[";
        for (int i = 0; i < space_used - 1; i ++) {
            cout << arr[i] << ", ";
        }
        //Output the last effective element.
        cout << arr[space_used - 1] << "]" << endl;
    } else cout << "The array is empty." << endl;
}

//Implementation of the search function.
bool search(const int a[], int number_used, int target, int& where) {
    bool found(false);
    for(int i = 0; i < number_used; i++) {
        if(a[i] == target) {
            found = true;
            where = i;
            return found;
        }
    }
    return found;
}