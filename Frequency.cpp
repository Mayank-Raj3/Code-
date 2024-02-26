#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, count;

    //enter the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    //declare input array of size n
    int array[n];

    //take inputs in the array
    cout << "Enter " << n << " numbers in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    //define a map of type <int, int>
    map<int, int> frequency;

    //loop through the elements of the array, and
    //update the frequency of unique elements in the map
    for (int i = 0; i < n; i++) {
        frequency[array[i]]++;
    }

    //output all the frequencies
    for (auto x : frequency) {
        cout << x.first << " : " << x.second << endl;
    }

    return 0;
}