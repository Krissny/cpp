#include <iostream>
using namespace std;

//what is spiralmatrix ?
// spiral matrix is a way of printing the matrix in a spiral 
// order, for ex-  1->2->3
//                 8->9  4
//                 7<-8<-9

int main(){
    int n, m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<m;j++){
            cin>>arr[i][j];
        }
    }
    // spiral order print
    int row_start=0, row_end = n-1, coloumn_start=0, coloumn_end=m-1;
    int ele= n*m;
    int count=0;
    //we are using here four variabales
    while(row_start<=row_end and coloumn_start<=coloumn_end)
    {
        //for starting row
        if(count<ele)
        {
            for(int col = coloumn_start; col<=coloumn_end; col++)
            {
                cout<<arr[row_start][col]<<" ";
                count++;
            }
            cout<<endl;
            row_start++;
        }    
        //for coloumn end
        if(count<ele)
        {
            for(int row = row_start; row<=row_end; row++)
            {
                cout<<arr[row][coloumn_end]<<" ";
                count++;
            }
            cout<<endl;
            coloumn_end--;
        }
        //for row-end
        if(count<ele)
        {
            for(int col = coloumn_end; col>=coloumn_start; col--)
            {
                cout<<arr[row_end][col]<<" ";
                count++;
            }
            cout<<endl;
            row_end--;
        }
        //for col start
        if(count<ele)
        {
            for(int row = row_end; row>=row_start; row--)
            {
                cout<<arr[row][coloumn_start]<<" ";
                count++;
            }
            cout<<endl;
            coloumn_start++;
            
        }
    }


}