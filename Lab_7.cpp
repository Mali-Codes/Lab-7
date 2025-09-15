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


