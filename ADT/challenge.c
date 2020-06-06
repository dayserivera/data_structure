#include <stdio.h>

int main(){
    int A[] = {5, 8, 3, 9, 6, 2, 10, 7, -1, 4};
    int n = 10, min, max;
    min = A[0];
    max = A[0];

    for(int i = 1; i < 10; i++){
        if(A[i] < min)
            min = A[i];
        else if(A[i] > max)
            max = A[i];
    }

    printf("Max = %d\nMin = %d\n", max, min);

    /*int k = 10, n = 10;

    for(int i = 0, j = n - 1; i < j;){
        if(A[i] + A[j] == k){
            printf("%d + %d = %d\n", A[i], A[j], k);
            i++;
            j--;
        } else if(A[i] + A[j] < k) i++;
        else j--;
    }
    */
    /*int A[] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    int n = 10, k = 10;
    int H[] = {0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0,0};

    for(int i = 0; i < n; i++){
        if(k - A[i] >= 0 && H[k - A[i]] != 0){
            printf("%d + %d = %d\n", A[i], k - A[i], k);
        }
        H[A[i]]++;
    }*/

    /*for(int i = 0; i < n-1; i++){
        for(int j = i + 1; j < n; j++){
            if(A[i] + A[j] == k){
                printf("%d + %d = %d\n", A[i], A[j], k);
            }
        }
    }*/

    /*int max = 20, n = 10;
    int H[] = {0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0,0};
    for(int i = 0; i < n; i++){
        H[A[i]]++;
    }
    for(int i = 0; i <= max; i++){
        if(H[i] > 1)
            printf("%d %d\n", i, H[i]);
    }*/

    /*for(int i = 0; i < n-1; i++){
        if(A[i] == A[i+1]){
            j = i + 1;
            while(A[j] == A[i]) j++;
            printf("%d is appearing %d times\n", A[i], j - i);
            i = j - 1;
        }
    }
    int lastDuplicate = 0;
    int n = 10;
    for(int i = 0; i< n-1; i++){
        if(A[i] == A[i+1] && A[i] != lastDuplicate){
            printf("%d\n", A[i]);
            lastDuplicate = A[i];
        }
    }*/
    /*int H[] = {0,0,0,0, 0,0,0,0, 0,0,0,0};
    int l = 1;
    int h = 12;
    int n = 10;
    for(int i = 0; i < n; i++){
        H[A[i]]++;
    }
    for(int i = l; i <= h; i++){
        if(H[i] == 0)
            printf("%d\n", i);
    }*/
    /*int diff = A[0] - 0;
    int n = 11;
    for(int i = 0; i < n; i++){
        if(A[i]-i != diff){
            while(diff < A[i]-i){
                printf("%d\n", i + diff);
                diff++;
            }
        }
    }*/
}
