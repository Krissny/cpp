#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int x,posx,posy;
    bool exist=false;
    cin>>x;
    int arr[n][m];
    for(int i=0; i<n;i++){
        for(int j=0; j<m;j++){
            cin>>arr[i][j];
        }
    }
     for(int i=0; i<n;i++){
        for(int j=0; j<m;j++){
            if(x==arr[i][j]){
                exist=true;
                posx=i;
                posy=j;
                break;
            }
        }
    }
    if(exist){
        cout<<"The value exist at {"<<posx<<","<<posy<<"} in matrix"<<endl;
    }
    else{
        cout<<"The value doesn't exist in matrix"<<endl;
    }

}