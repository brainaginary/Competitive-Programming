#include <bits/stdc++.h>
using namespace std;

int main(){

    freopen("cowtip.in", "r", stdin);
    freopen("cowtip.out", "w", stdout); 
    
    int N; cin >> N;
    int i,j;
    int state[N][N];

    int tip_count=0;
    for (i=0;i<N;i++) {
        for (j=0;j<N;j++) {
            char temp;
            cin >> temp;
            state[i][j] = temp;
            if (state[i][j]=='1') tip_count++; // count no. of 1s
        }
    }
    // finished getting the array
    
    //greedy on the furthest 1, hop left, rinse&repeat
    
    int flips=0;
    int index1=N-1; int index2=N-1;
    
    while(tip_count != 0){

        if(state[index1][index2]=='1'){

            for (i=0;i<=index1;i++){
                for (j=0;j<=index2;j++){
                    if (state[i][j]=='1') {state[i][j]='0'; tip_count--;}
                    else {state[i][j]='1'; tip_count++;}
                }
            } // flip the rectangle

            flips++;
        }

        if (index2 != 0) index2--;
        else if (index2==0) {
            index1--; index2 = N-1;
        } 
    } cout << flips;
    
    return 0;
}
