#include <stdio.h>
#include <stdlib.h>

int validate(char *name){
    int i;
    for(i = 0; name[i] != '\0'; i++){
        if(!(name[i] >= 65 && name[i] <= 90) &&
           !(name[i] >= 97 && name[i] <= 122) &&
           !(name[i] >= 48 && name[i] <= 57))
            return 0;
    }
    return 1;
}

int main(){
    char A[] = "verbose";
    char B[] = "observe";
    int i, H[26] = {0};

    for(i = 0; A[i] != '\0'; i++){
        H[A[i] - 97] += 1;
    }

    for(i = 0; B[i] != '\0'; i++){
        H[A[i] - 97] -= 1;
        if(H[A[i] - 97] < 0){
            printf("not anagram");
            break;
        }
    }

    if(B[i] == '\0'){
        printf("it is anagram");
    }
    /*char A[] = "finding";
    int H = 0, x = 0;
    int i;
    for(i = 0; A[i] != '\0'; i++){
        x = 1;
        x = x << (A[i] - 97);
        printf("%d - %d\n", x, A[i]);
        if((x & H) > 0){
            printf("%c is duplicated", A[i]);
        } else{
            H = x | H;
        }
        printf("x & H = %d\n", x & H);
    }*/
    /*int H[26], i;
    for(i = 0; i < 26; i++){
        H[i] = 0;
    }
    for(i = 0; A[i] != '\0'; i++){
        H[A[i] - 97]++;
    }
    for(i = 0; i< 26; i++){
        if(H[i] > 1){
            printf("%c = ", i + 97);
            printf("%d\n", H[i]);
        }
    }
    */
    /*char A[] = "madam";
    char B[10];
    int i, j;

    for(i = 0, j = 4; j >= 0; j--, i++){
        if(A[i] != A[j]){
            break;
        }
    }

    if(j == -1){
         printf("Palindromo");
    } else {
        printf("Nao eh palindromo");
    }*/
    /*
    for(i = 0, j = 4; A[i] != '\0'; i++, j--){
        B[i] = A[j];
    }
    B[i] = '\0';
    printf("%s\n", B);

    for(i = 0; A[i] != '\0' && B[i] != '\0'; i++){
        if(A[i] != B[i]){
            printf("%c - %c\n", A[i], B[i]);
            break;
        }
    }
    if(A[i] == B[i])
        printf("Equal");
    else if(A[i] < B[i])
        printf("Smaller");
    else
        printf("Greater");
        */
    /*char A[] = "python";
    char B[7], t;
    int i, j;
    for(j = 0; A[j] != '\0'; j++){
    }
    j = j - 1;
    printf("%d\n", j);
    for(i = 0; j >= 0; i++, j--){
        printf("%d\n", j);
        B[i] = A[j];
        printf("%c\n", B[i]);
    }
    B[i] = '\0';
    printf("%s\n", B);
    */
    /*char *name = "Ani!321";
    if(validate(name)){
        printf("Valid String");
    } else {
        printf("Invalid String");
    }
    */
    /*char A[] = "How  are  you";
    int i, word = 1;
    for(i = 0; A[i] != '\0'; i++){
        if(A[i] == ' ' && A[i - 1] != ' ')
            word++;
    }
    printf("%d", word);
    */
    /*for(i = 0; A[i] != '\0'; i++){
        printf("%s", A[i]);
        if(A[i] >= 65 && A[i] <= 90)
            A[i] += 32;
        else if(A[i] >= 'a' && A[i] <=122)
            A[i] -= 32;
    }
    printf("%s", A);
    */
    /*char *s = "welcome";
    int i;
    for(i = 0; s[i] != '\0'; i++){

    }
    printf("Length is %d", i);
    */
     return 0;
}
