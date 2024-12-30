#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void enter(vector<int>& vec, int size);
void display(vector<int>& vec);
void sorted(vector<int>& vec);

int main() {
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;
    vector<int> number;

    cout << "Entering numbers in the vector..." << endl;
    enter(number, n);
    cout << "Displaying numbers from the vector..." << endl;
    display(number);
    sorted(number);  
    cout << "Displaying the sorted vector..." << endl;
    display(number);

    return 0;
}

void enter(vector<int>& vec, int size) {
    int value;
    for (int i = 0; i < size; i++) {
        cin >> value;
        vec.push_back(value);
    }
}

void display(vector<int>& vec) {
    for (int value : vec) {
        cout << value << " ";
    }
    
}

void sorted(vector<int>& vec) {
    sort(vec.begin(), vec.end()); 
}
