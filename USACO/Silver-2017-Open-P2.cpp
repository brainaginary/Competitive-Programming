#include <bits/stdc++.h>
using namespace std;

int main(){

    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout); 
    
    int N,M; cin >> N >> M;
    char dna[2*N][M];

    int i,j;
    for (i=0;i<2*N;i++){
        for (j=0;j<M;j++){
            cin >> dna[i][j];
        }
    }

    // get array

    int ans=0;

    int a,b,c;
    for (a=0;a<M;a++){
        for (b=a+1;b<M;b++){
            for (c=b+1;c<M;c++){
                bool works = true;
                for (i=0;i<N;i++){
                    for (j=N;j<2*N;j++){
                        if(dna[i][a]==dna[j][a] && 
                            dna[i][b]==dna[j][b] && 
                            dna[i][c]==dna[j][c]){
                            works=false; break;
                        }
                    } if(works==false) break;
                } if (works == true) ans++;        
            }        
        }  
    } cout << ans;

    // optimised by using break to get out of for loops

    return 0;
}
