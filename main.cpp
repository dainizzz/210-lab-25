// COMSC-210 | Lab 25 | Dainiz Almazan
// IDE used: CLion

#include <iostream>
#include <chrono>
#include <list>
#include <set>
#include <vector>
#include <iostream>
using namespace std;
//TODO: Come up w/ better variable names
void readingRace(set<string>&, list<string>&, vector<string>&);

int main() {
    set<string> set;
    list<string> list;
    vector<string> vector;

    // RACE 1: READING
    readingRace(set, list, vector);

    // RACE 2: SORTING

    // RACE 3: INSERTING

    // RACE 4: DELETING

    return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/
void readingRace(set<string> & set, list<string> & list, vector<string> &vector) {
    ifstream infile("codes.txt");
}
