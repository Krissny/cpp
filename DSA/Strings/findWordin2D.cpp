#include <bits/stdc++.h>
using namespace std;

int solve(int i, int j, string str, string ch[], int str_index, int str_size){
    int found =0;  // intially setting the found =0
    if(i>=0 && j>=0 && i<6 && j<6 && str[str_index]==ch[i][j]){ // these condition will take care of if we encounter any negative number index or greater than array size of the array, for ex( -1,0 or 7, 2)
        char temp = ch[i][j];   // storing the value
        ch[i][j] =0;        // and then making it zero so thata we wont count it again
        str_index++;      // as we havr found the current index , we move to next
        if(str_index == str_size){   // if the  str_index becomes equal to the size of string that we means we have reached then end and found all the characters
            found = 1;
        }
        else{
            found += solve(i-1,j,str,ch,str_index,str_size);   //Up
            found += solve(i+1,j,str,ch,str_index,str_size);   //Down
            found += solve(i,j-1,str,ch,str_index,str_size);   // left
            found += solve(i,j+1,str,ch,str_index,str_size);  // right
        }
        ch[i][j] = temp;  // putting back the the character to its place , for next search (backtracking)
    }
    return found;
}

int main(){
    string str = "MAGIC";
    string ch[] = { "BBABBM",
                    "CBMBBA",
                    "IBABBG",
                    "GOZBBI",
                    "ABBBBC",
                    "MCIGAM" };
    int str_size = str.length();
    int ans=0;
    for(int i = 0; i<6; i++){ //Looking at every character in the given array
        for(int j =0; j<6; j++){
                ans+=solve(i,j,str,ch,0, str_size) ; // here 0 denotes the index in the string str which we are currently looking for
        }
    }

    cout<<ans<<endl;
}