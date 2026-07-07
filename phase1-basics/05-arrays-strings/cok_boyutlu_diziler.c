#include <stdio.h>
int main(){

    // 3x3 matris
    int matris[3][3] = {
        {1 , 2 , 3},
        {4 , 5 , 6},
        {7 , 8 , 9}
    };

    // yazdir
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            printf("  %d  " , matris[i][j]);
        }
        printf("\n");
    }


    return 0;
}