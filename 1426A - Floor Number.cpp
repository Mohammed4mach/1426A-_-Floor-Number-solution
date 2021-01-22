/*
*==================================================================
*=                                                                =
*= This Solution is by Moha4Mach, problem at:                     =
*=                                                                =
*=         https://codeforces.com/problemset/problem/1426/A       =
*=                                                                =
*==================================================================
*/

#include <iostream>

using namespace std;

int main()
{
    // Initializing and Declaration of variables
    int testCases = 1;
    int apartmentNum = 1; // Petya'sApartment number
    int numOfApartments = 1; // Number of apartment per floor
    int floor[testCases]; // Floor number that include Petya's apartment

    /*
    * floor variable is an array to assign
    *   all results to the elements of
    *       the arrays then cout
    *           all  of  them
    *              at once
    */

    cin >> testCases;// Assign values

    for (int i = 1; i <= testCases; i++){

        cin >> apartmentNum;
        cin >> numOfApartments;
        // Processing and Assign each result to
        floor[i - 1] = (apartmentNum + (2 * numOfApartments) - 3) / numOfApartments;

    }

    // Then output all results by for loop
    for (int j = 1; j <= testCases; j++) {

        cout << floor[j - 1] << endl;

    }
    return 0;
}
