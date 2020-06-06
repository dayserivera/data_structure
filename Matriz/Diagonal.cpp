/*class Diagonal{
    private: int *A, n;
    Diagonal(int n);
    void create();
    int Get(int i, int j);
    int Set(int i, int j, int x);
    void Display();
    ~Diagonal();
}
Diagonal::Diagonal(int n){
    this->n = n;
    A = new int[n];
}
Diagonal::~Diagonal(){
    delete []A;
}
void Diagonal::create(){
    int x;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            cin >> x;
            if(i == j){
                A[i - 1] = x;
            }
        }
    }
}

void Diagonal::Display(){
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            if(i == j){
                cout<<A[i - 1];
            } else {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}

*/
