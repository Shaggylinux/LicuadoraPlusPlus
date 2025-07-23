#include <iostream>
#include <vector>

class VoidBlender{
    private:
        std::string name;
        std::string model;
        int modelnumber;
        int velocity;
        bool onoff = false;
        static std::string seleccion;
    public:
        VoidBlender() = default;
        
        // ----- Setters -----
        void SetOnOff(bool _onoff){
            onoff = _onoff;
        }

        static void SetSeleccion(std::string _seleccion){
            seleccion = _seleccion;
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
        static std::string GetSeleccion(){
            return seleccion;
        }
        
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

std::string VoidBlender::seleccion;

int main(){
    std::string seleccion;
    int n{0}, o{0};
    VoidBlender a, b, c, d, e;
    std::vector<VoidBlender> licuadoras {a, b, c, d, e};
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

    switch (o){
        case 1:
            VoidBlender::SetSeleccion("Oster");
            break;
        case 2:
            VoidBlender::SetSeleccion("Bosch");
            break;
        case 3:
            VoidBlender::SetSeleccion("Imaco");
            break;
        case 4:
            VoidBlender::SetSeleccion("Philips");
            break;
        case 5:
            VoidBlender::SetSeleccion("Thomas");
            break;
    }
    std::cout << "Seleccion : " << VoidBlender::GetSeleccion();
}