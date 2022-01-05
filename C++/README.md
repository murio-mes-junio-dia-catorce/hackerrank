# C++

```c++

#include <iostream>

namespace Bienvenidos{
    auto saludo(std::string m){
        std::cout<<m<<std::endl;
    }
}

int main(){
  Bienvenidos::saludo("hola mundo!!");
  std::cin.get();
}
```
