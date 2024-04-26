#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Get dimensions from user
    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    // Enforce dimensions limit
    if (rows > 3 || cols > 3) {
        cerr << "Dimensions exceeded maximum limit of 3. " << endl;
        return 1;
    }

    // Dynamically allocate 2D array
    double** array = new double*[rows];
    for (int i = 0; i < rows; i++) {
        array[i] = new double[cols];
    }

    // Assign values to array elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = i * cols + j; // Assign some value
        }
    }

    // Output array elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory
    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
