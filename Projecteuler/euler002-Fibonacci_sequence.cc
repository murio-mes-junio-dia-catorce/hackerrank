#include <iostream>
#include <vector>

using namespace std;

unsigned long long fibonacci(unsigned long long N){
    unsigned long long suma = 0, t1 = 0, t2 = 1;
    while(t2 <= N) {
        suma += (t2%2==0)?t2:0;
        auto nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return suma;
}

int main(){
    vector<unsigned long long> term;
    unsigned int T;
    cin >> T;
    while(T--){
        unsigned long long N;
        cin >> N;
        term.push_back(fibonacci(N));
    }
    for (auto& x: term) {
        cout << x << endl;
    }
    return 0;
}