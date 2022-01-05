#include <cstdlib>
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector <int> rst;
    stringstream ss(str);
    string a, s;
    ss >> s;
    for (int i = 0; i < s.size(); i++){
        if (s[i] != ','){
            a += s[i];
        } else {
            rst.push_back(atoi(a.c_str()));
            a = ' ';
        } 
    }
    rst.push_back(atoi(a.c_str()));
    return rst;
}

int main() {
    string str;
    cin >> str;
    vector <int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}