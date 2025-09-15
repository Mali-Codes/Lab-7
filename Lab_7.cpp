#include <iostream>
#include <string>
using namespace std;

const int N = 5; // size of array

string* reverseArray(string* a, int n) {
    string* l = a;                          // left pointer - first one
    string* r = a + n - 1;                  // right pointer - last one
    while (l < r) {
        swap(*l, *r);                       // swap values at left and right pointers   
        l++;                                // movign inward  on both ends 
        r--;
    }
    return a;
}

void displayArray(const string* a, int n) {
    for (const string* p = a; p != a + n; ++p) {         //start from beginning to end
        cout << *p << (p + 1 == a + n ? '\n' : ' ');     // print value and space or newline
    }                                                    // also the ? : operator is used kinda like and if else but with booleans
                                                         // if its true it returns first then if it's false it returns the second   
}


int main() {
    string* names = new string[N]{   // dynamic string array of size 5
        "Janet", "Jeffe", "Jin", "Joe", "Junio"
    };

    cout << "Original array: ";
    displayArray(names, N);

    cout << "\nReversed array: ";
    displayArray(reverseArray(names, N), N);

    delete[] names;                 // free up some memory
    return 0;
}