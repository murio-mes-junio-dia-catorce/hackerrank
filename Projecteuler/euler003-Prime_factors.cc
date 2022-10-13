#include <iostream>
#include <cmath>

using namespace std;

long int prime_div(long int N, int i){
    long int N1 = N;
    if(N % i == 0){
        N /= i;
        N1 = prime_div(N, i);
    }
    return N1;
}

void prime_factors(long int N, long int &max){
    for(int inter=2; inter<= sqrt(N); inter++) {
        if(N%inter==0) {
            N = prime_div(N, inter);
            max = inter;
        }
    }
    if(N > max){
        max = N;
    }
}

int main(){
    int T;
    cin >> T;
    while(T--){
        long int N;
        cin >> N;
        long int max = 1;
        prime_factors(N, max);
        cout << max << endl;
    }
    return 0;
}