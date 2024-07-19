#include <bits/stdc++.h>
using namespace std;
bool isPresent(int arr[3][4],int row,int col,int target){
    for(int row=0;row<3;row++ ){
        for(int col=0;col<4;col++){
            if(arr[row][col]==target){
                return 1;
            }
            
        }
    }
     return 0;
}
int main(){

     int arr[3][4]={
                    {1,11,111,1111},
                    {2,22,222,2222},
                    {3,33,333,3333},
                    

                  };

      for(int row=0;row<3;row++){
        for (int col=0;col<4;col++){
            cout<<arr[row][col]<< " ";
        }
        cout<< endl;
    }

    cout<<"enter the element to search"<<endl;
    int target;
    cin>>target;
     if (isPresent(arr, 3, 4, target)) {
        cout << "Element " << target << " is present in the matrix." << endl;
    }
    else {
        cout << "Element " << target << " is not present in the matrix." << endl;
    }
    return 0;
}