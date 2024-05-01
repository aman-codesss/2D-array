#include <iostream>
#include <vector>

using namespace std;

// Function to rotate the matrix by 90 degrees clockwise
vector<vector<int>> rotateMatrix(vector<vector<int>>& matrix) {
    int n = matrix.size();
    vector<vector<int>> rotated(n, vector<int>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            rotated[j][n - 1 - i] = matrix[i][j];
        }
    }

    return rotated;
}

// Function to print the matrix
void printMatrix(const vector<vector<int>>& matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "Original matrix:" << endl;
    printMatrix(matrix);

    vector<vector<int>> rotated = rotateMatrix(matrix);

    cout << "\nMatrix after 90 degree rotation clockwise:" << endl;
    printMatrix(rotated);

    return 0;
}
