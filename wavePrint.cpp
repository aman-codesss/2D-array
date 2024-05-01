#include<iostream>
#include<vector>
using namespace std;
void print(vector <int>ans){
      for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
   }
   cout<<endl;
}
void wavePrint(vector<vector<int> > arr, int nRows, int mCols)
{
    vector<int> ans;
    
    for(int col=0; col<mCols; col++) {
        
        if( col&1 ) {
            //odd Index -> Bottom to top
            
            for(int row = nRows-1; row>=0; row--) {
                cout << arr[row][col] <<" ";
                ans.push_back(arr[row][col]);
            }    
        }
        else
        {
            // 0 or even iondex -> top to bottom
            for(int row = 0; row<nRows; row++) {
                cout << arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        }   
    }
    // print(ans);
}
int main(){
    vector<vector<int> > arr={
    {1,2,3},
    {4,5,6},
    {7,8,9}};
    wavePrint(arr,3,3);

}