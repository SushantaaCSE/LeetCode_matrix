#include <bits/stdc++.h>
using namespace std;
void rowSum(int arr[3][4], int rowSums[3]) {
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += arr[i][j];
        }
        rowSums[i] = sum; 
    }
}


int main(){
    //row wise sum;
    int arr[3][4]={
                    {1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12}

                  };
    int rowSums[3];
    rowSum(arr, rowSums); 
    for (int i = 0; i < 3; i++) {
        cout << "The sum of row " << i + 1 << " is: " << rowSums[i] << endl;
    }

                 
    return 0;
}