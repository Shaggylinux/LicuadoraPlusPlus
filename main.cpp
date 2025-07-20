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
            std::cout << name;
            std::cout << model;
            std::cout << modelnumber;
        }
};

int main(){
    VoidBlender a, b, c, d, e, f, g;
    std::vector<VoidBlender> licuadoras {a, b, c, d, e, f, g};
    
    for(int i{0} ; i < licuadoras.size() ; i++) {
        licuadoras[i].SetModel("alv : ");
    }
    for(auto licuadora : licuadoras) std::cout << licuadora.GetName() << "\n";
}