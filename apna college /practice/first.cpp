#include <iostream>
#include <vector>
using namespace std;

void findDuplicates(const vector<int>& vec) {
    int t = vec.size();
    cout << "Duplicate elements: ";
    
    for (int i = 0; i < t; i++) {
        for (int j = i + 1; j < t; j++) {
            if (vec[i] == vec[j]) {
                cout << vec[i] << " ";
                break; // Ek duplicate milne par inner loop rok dein
            }
        }
    }
    cout << endl;
}

int main() {
    vector<int> vec;
    int t;
    int k = 0;
    cout << "Number of elements in an array: ";
    cin >> t;

    for(int i = 0; i < t; i++) {
        int x; // Ek variable banayein input store karne ke liye
        cout << "Enter element " << i + 1 << ": ";
        cin >> x; // User se input lein
        vec.push_back(x); // Vector mein add karein
    }

    cout << "\nVector elements are: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    findDuplicates(vec);

    return 0;
}