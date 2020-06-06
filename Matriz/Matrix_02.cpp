#include <iostream>
using namespace std;

class LowerTri{
private:
    int *A;
    int n;
public:
    LowerTri(){
        n = 2;
        A = new int[2*(2+1)/2];
    }
    LowerTri(int n){
        this -> n = n;
        A = new int[n*(n+1)/2];
    }
    ~LowerTri(){
        delete []A;
    }
    void Set(int i, int j, int x);
    int Get(int i, int j);
    void Display();
    int GetDimension(){return n;}
};

void LowerTri::Set(int i, int j, int x){
    cout<<"i = "<<i<<" - j = "<<j<<endl;
    if(i >= j){
        int z = n*(j-1)-(j-2)*(j-1)/2+i-j;
        cout<<"z = "<<z<<endl;
        A[z] = x;
    }
}

int LowerTri::Get(int i, int j){
    if(i >= j)
        return A[n*(j-1)-(j-2)*(j-1)/2+i-j];
    return 0;
}

void LowerTri::Display(){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i>=j)
                cout<<A[n*(j-1)-(j-2)*(j-1)/2+i-j]<<" ";
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
}
/*
int main(){
    int *A, n, ch, x, i, j;
    printf("Enter dimension: ");
    scanf("%d", &n);
    A = (int *) malloc(n*sizeof(int));

    do{
        printf("Enter the choice(1 - insert, 2 - Get, 3 - Set, 4 - Display): ");
        scanf("%d", &ch);
        switch(ch){
        case 1:
            for(i = 1; i<=n; i++){
                scanf("%d", &A[i-1]);
            }
            break;
        case 2:
            printf("Enter indices: ");
            scanf("%d %d", &i, &j);
            if(i == j) printf("%d\n", A[i-1]);
            else printf("0");
            break;

        case 3:
            printf("Enter row, col, indices: ");
            scanf("%d %d %d", &i, &j, &x);
            if(i == j) A[i-1] = x;
            break;
        case 4:
            for(i = 1; i<=n; i++){
                for(j=1; j<=n; j++){
                    if(i == j) printf("%d", A[i-1]);
                    else printf("0");
                }
                printf("\n");
            }
        }
    }while(ch < 5);
    */
    /*int d;
    cout<<"Enter Dimensions: ";
    cin>>d;

    LowerTri lm(d);

    int x;
    cout<<"Enter All Elements\n";
    for(int i = 1; i <= d; i++){
        for(int j = 1; j <= d; j++){
            cin>>x;
            lm.Set(i,j,x);
        }

    }

    lm.Display();
    return 0;
    */
//}

