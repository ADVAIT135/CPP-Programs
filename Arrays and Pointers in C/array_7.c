// Arrays in C -- 7

// 2 - dimensional array

# include <stdio.h>

void arr(int x[][3]){
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%d ", x[i][j]);
        }
        printf("\n"); // Print newline after each row
    }
    printf("\n");
}

int main(){
   int a[2][3] = {{1,2,3},{4,5,6}};
   int b[2][3] = {1,2,3,4,5,6};
   
   

   printf("\n Values in Array a by row: ");
   arr(a);

   printf("\n Values in Array b by row: ");
   arr(b);

   return 0;
}