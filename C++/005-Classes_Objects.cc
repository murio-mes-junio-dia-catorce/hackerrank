#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Clase estudiante
class Student {
  private:
    int scores[5];
    int sum;
  public:
    Student() : sum(0) {}
    int calculateTotalScore() {return sum;}
    void input() {
        for(int i=0; i<5; i++) {
            cin >> scores[i];
            sum+=scores[i];
        }
    }
};

int main() {
    int n; // Numero de estudiante
    cin >> n;
    Student *s = new Student[n]; // arreglo de n estudiantes
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculando
    int kristen_score = s[0].calculateTotalScore();

    // determina el estudiante mayor
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // Imprime el resultado final
    cout << count;
    
    return 0;
}