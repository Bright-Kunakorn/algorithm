//
//  
//  620510664
//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long s[10000000];

long tiling(long n, long m){
    if(n <= 1){
        return 1;
    }
    if(n > 1){
        long i, j;
        for(i=0; i<m; i++){
            s[i] = 1;
        }
        for(j=m; j<=n; j++){
            s[j] = s[j-1] + s[j-m];
        }

        //---debug---//
        //printf("%ld \n", s[n]);

        return s[n];
    }
}

int main(){
    long n, m, i;
    scanf("%ld", &n);
    scanf("%ld", &m);
    for(i=0; i<=n; i++){
        s[i] = 0;
    }
    printf("%ld", tiling(n, m));
    return 0;
}
