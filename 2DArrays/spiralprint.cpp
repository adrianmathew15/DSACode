#include <iostream>
using namespace std;

void print(int arr[][10], int n, int m) {

    int startRow = 0;
    int endRow = n-1;
    int startCol = 0;
    int endCol = m-1;

    //Outer Loop (traverse array boundary)
    while(startCol<=endCol and startRow<=endRow) {

        //Start Row
        for(int col = startCol; col<=endCol; col++) {
            cout<<arr[startRow][col]<<" ";
        }
        
        //End Col
        for(int row = startRow+1; row<=endRow; row++) {
            cout<<arr[row][endCol]<<" ";
        }
        
        //End Row
        for(int col = endCol-1; col>=startCol; col--) {
            if(startRow==endRow){
                break;
            }
            cout<<arr[endRow][col]<<" ";
        }
        
        //Start Col
        for(int row = endRow-1; row>=startRow+1; row--) {
            if(startCol==endCol) {
                break;
            }
            cout<<arr[row][startCol]<<" ";
        }

        //Update the variable to point to inner spiral
        startRow++;
        endRow--;
        startCol++;
        endCol--;
    }
}


int main() {
    int arr[][10] = { {1,2,3,4},
    {12,13,14,15},
    {11,16,15,6},
    {10,9,8,7} };

    int n=4;
    int m=4;

    print(arr,n,m);

}
