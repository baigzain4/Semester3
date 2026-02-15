#include<iostream>
using namespace std;
int main(){
    int arr[3][2]= {{1,2},{3,4},{5,6}};
    int target = 3;
    int row,column;
    for(int i = 0;i<3;i++){
        for(int j =0;j<=i;j++){
            if(arr[i][j] == target){
                row = i;
                column = j;
                break;
            }
        }
        cout << "OK" << endl;
    }
    cout << row << " " << column << endl;
}