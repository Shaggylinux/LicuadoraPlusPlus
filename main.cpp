#include <iostream>
#include <vector>

class VoidBlender{
    private:
        std::string name;
        std::string model;
        int modelnumber;
        int velocity;
    public:
        VoidBlender() = default;
        
        void SetVelocity(int _velocity) {
            velocity = _velocity;
        }

        void SetName(std::string _name){
            name = _name;
        }

        void SetModel(std::string _model){
            name = _model;
        }

        void SetModelNumber(std::string _ModelNumber){
            name = _ModelNumber;
        }

        int GetVelocity(){
            return velocity;
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
    int n;
    VoidBlender a, b, c, d, e, f;
    std::vector<VoidBlender> licuadoras {a, b, c, d, e, f};
    std::vector<std::string> namesblenders {"Oster", "Bosch", "Imaco", "Philips", "Thomas"};
    
    std::cout << "##########\n";
    for (int i{0} ; i < licuadoras.size() && i < namesblenders.size() ; i++){
        n += 1;
        licuadoras[i].SetName(namesblenders[i]);
        std::cout << n << ". " << licuadoras[i].GetName() << "\n";
    }
    std::cout << "##########\n";

    std::cout << "Models for Blenders, Chooise an option : ";

}