    #include <iostream>
    using namespace std;

    int main() {
        int arr[] = {1, 2, 3, 2, 1, 4, 5};
        int n = sizeof(arr) / sizeof(arr[0]);

        cout << "Unique elements: ";

        for (int i = 0; i < n; i++) {
            bool isUnique = true;

            // Check if arr[i] appears again in the array
            for (int j = 0; j < n; j+#include <iostream>
using namespace std;

// Function to print unique elements in an array
void printUniqueElements(int arr[], int n) {
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

    cout << endl;
}

// Main function
int main() {
    int arr[] = {1, 2, 3, 2, 1, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printUniqueElements(arr, n);

    return 0;
}
+) {
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
