#include <iostream>
#include <vector>

class VoidBlender{
    private:
        std::string name;
        std::string model;
        int modelnumber;
        int velocity;
        bool onoff = false;
    public:
        VoidBlender() = default;
        
        // ----- Setters -----
        void SetOnOff(bool _onoff){
            onoff = _onoff;
        }
        
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
        
        // ----- Getters -----
        bool GetOnOff(){
            return onoff;
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
        
        // ----- Funcion principal -----
        void Mostrarinfo(){
            std::cout << "Name : " << name;
            std::cout << "Model : " << model;
            std::cout << "Model Number : " << modelnumber;
        }
};

int main(){
    int n{0}, o{0};
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
    std::cin >> o;

    switch (o)
    {
    case 1:
        std::cout << "Vamos";
        break;
    
    default:
        std::cout << "No vamos";
        break;
    }
}