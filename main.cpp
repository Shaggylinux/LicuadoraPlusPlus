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
        
        void SetName(std::string _name){
            name = _name;
        }

        void SetModel(std::string _model){
            name = _model;
        }

        void SetModelNumber(std::string _ModelNumber){
            name = _ModelNumber;
        }

         std::string GetName(){
            return name;
        }

        std::string GetModel(){
            return model;
        }
        
        int GetModelNumber(){
            return modelnumber;
        }

        void Mostrarinfo(){
            std::cout << "Name : " << name;
            std::cout << "Model : " << model;
            std::cout << "Model Number : " << modelnumber;
        }
};

int main(){
    VoidBlender a, b;
    std::vector<VoidBlender> licuadoras {a, b};
    std::vector<std::string> namesblenders {"Oster", "Sams"};
    int n;
    std::cout << "##########\n";

    for (int i{0} ; i < licuadoras.size() && namesblenders.size() ; i++){
        n += 1;
        std::cout << n << ". " << namesblenders[i] << "\n";
    }
    std::cout << "##########\n";

    
    /*
        std::cout << "###########################################";
        std::cout << " 1. Oster";
        std::cout << " 2. NOSE";
        std::cout << " 3. NOSE x2";
        std::cout << " 4. NOSE x3";
        std::cout << "###########################################";
    */
}