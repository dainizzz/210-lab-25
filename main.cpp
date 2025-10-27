// COMSC-210 | Lab 25 | Dainiz Almazan
// IDE used: CLion

#include <iostream>
#include <chrono>
#include <list>
#include <set>
#include <vector>
#include <fstream>
#include <iomanip>
using namespace std;
using namespace std::chrono;

const int WIDTH = 5;

// readingRace() reads data from a file to a set, std::list, and vector and outputs how long it took to read data to each.
// arguments: an empty set of type string, an empty std::list of type string, an empty vector of type string
// returns: nothing
void readingRace(set<string>&, list<string>&, vector<string>&);

// sortingRace() sorts data in a std::list and vector and outputs how long it took to perform the sort. Because sets are
//      already sorted, -1 is output as the duration value for sorting the set.
// arguments: a std::list of strings and a vector of strings
// returns: nothing
void sortingRace(list<string>&, vector<string>&);

int main() {
    set<string> set;
    list<string> list;
    vector<string> vector;

    cout << setw(WIDTH) <<  "Operation \t Vector \t List \t Set" << endl;

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
    string temp;

    // Reading to set
    auto start = chrono::high_resolution_clock::now();
    while (infile >> temp) {
        set.insert(temp);
    }
    auto end = chrono::high_resolution_clock::now();
    auto setDuration = duration_cast<microseconds>(end - start);

    // Resetting to start of file
    infile.clear();
    infile.seekg(0, ios::beg);

    // Reading to list
    start = chrono::high_resolution_clock::now();
    while (infile >> temp) {
        list.push_back(temp);
    }
    end = chrono::high_resolution_clock::now();
    auto listDuration = duration_cast<microseconds>(end - start);

    // Resetting to start of file
    infile.clear();
    infile.seekg(0, ios::beg);

    // Reading to vector
    start = chrono::high_resolution_clock::now();
    while (infile >> temp) {
        vector.push_back(temp);
    }
    end = chrono::high_resolution_clock::now();
    auto vectorDuration = duration_cast<microseconds>(end - start);

    infile.close();

    // Outputting results
    cout << setw(WIDTH) << "Read \t" << vectorDuration.count() << '\t' << listDuration.count() << '\t' << setDuration.count() << endl;
}

void sortingRace(list<string> &, vector<string> &) {
    // Outputting results
    cout << setw(WIDTH) << "Read \t" << vectorDuration.count() << '\t' << listDuration.count() << "\t -1" << endl;
}
