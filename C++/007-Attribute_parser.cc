#include <iostream>
#include <map>
using namespace std;

map <string, string> tagMap;

void createMap(int &n, string pretag) {
    if(!n) return;
    
    string line, tag, attr, value;
    getline(cin, line);
    
    int i=1;
    if(line[i]=='/') {           // encontrando el tag
        while(line[i]!='>') i++;
        if(pretag.size()>(i-2))		// actualizando tag
            tag = pretag.substr(0,pretag.size()-i+1);
        else
            tag = "";
    }
    else {                       // abriendo el tag encontrado
        while(line[i]!=' ' && line[i]!='>') i++;
        tag = line.substr(1,i-1);	// actualizando tag
        if(pretag!="") tag = pretag + "." + tag;
        
        int j;
        while(line[i]!='>') { 
            j = ++i;
            while(line[i]!=' ') i++;
            attr = line.substr(j,i-j);	// atributos nombre
            
            while(line[i]!='\"') i++;
            j = ++i;
            while(line[i]!='\"') i++;
            value = line.substr(j,i-j);	// atributos valor
            i+= 1;
            
            tagMap[tag + "~" + attr] = value;
        }
    }
    createMap(--n, tag);
}

int main() {
    int n, q;
    cin >> n >> q;
    cin.ignore();
    createMap(n,"");
    
    string attr, value;
    while(q--) {
        getline(cin,attr);
        value = tagMap[attr];
        if(value=="") value = "No encontrado!";
        cout << value << endl;
    }
    return 0;
}