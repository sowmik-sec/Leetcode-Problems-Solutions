long long int factorial(int N){
    if(N<2) return 1;
    return N*factorial(N-1);
}