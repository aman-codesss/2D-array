#include<iostream>
#include<vector>
using namespace std;

    bool searchMatrix(vector<vector<int> >& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int rowIndex = 0;
        int colIndex = col-1;
        
        while(rowIndex < row && colIndex>=0 ) {
            int element = matrix[rowIndex][colIndex];
            
            if(element == target) {
                return 1;
            }
            
            if(element < target){
                rowIndex++;
            }
            else
            {
                colIndex--;
            }
        }
        return 0;
    }
 int main(){
    vector<vector<int>> matrix = {{1,2,3,6,76}, {3,66,77,88,314}, {2,4,6,7,8,9}};
    cout<<"Is the target (88) present in the matrix ? "<<searchMatrix(matrix,88)<<endl;
    }