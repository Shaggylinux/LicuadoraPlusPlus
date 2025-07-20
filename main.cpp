#include <iostream>
#include <vector>
#include <string>

class VoidBlender{
    private:
        std::string name;
        std::string model;
        int modelnumber;
    public:
        VoidBlender() = default;
        std::string GetName(){
            return name;
        }

        std::string GetModel(){
            return model;
        }
        
        int GetModelNumber(){
            return modelnumber;
        }
};

int main(){
    std::cout << "hola mundo\n";
}