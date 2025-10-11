#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 1, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unique elements: ";

    for (int i = 0; i < n; i++) {
        bool isUnique = true;

        // Check if arr[i] appears again in the array
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        if (isUnique)
            cout << arr[i] << " ";
    }

    return 0;
}
