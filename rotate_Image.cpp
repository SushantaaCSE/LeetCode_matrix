#include <bits/stdc++.h>
using namespace std;

void displayMatrix(const vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
/* brute
void rotateMatrix(vector<vector<int>>& mat) {
    int n = mat.size();
    vector<vector<int>> ans(n, vector<int>(n)); 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            ans[j][n - i - 1] = mat[i][j];
        }
    }

    mat = ans; 
}
*/
void rotateMatrix(vector<vector<int>>& mat) {
    
}

int main() {
    vector<vector<int>> mat{
        {1, 2, 3},
        {5, 6, 7},
        {9, 10, 11},
    };

    rotateMatrix(mat);
    displayMatrix(mat);

    return 0;
}
