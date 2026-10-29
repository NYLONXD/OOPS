#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int index;

    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter index to access: ";
    cin >> index;

    try {
        if (index < 0 || index >= size) {
            throw "Error: Index out of bounds!";
        }
        cout << "Element at index " << index << ": " << arr[index] << endl;
    }
    catch (const char* msg) {
        cout << msg << endl;
    }

    return 0;
}
