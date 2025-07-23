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
        static void SetSeleccion(std::string _seleccion){
            seleccion = _seleccion;
        }
        
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

void seleccionarlicuadora(){
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
            VoidBlender::SetSeleccion("Oster.");
            break;
        case 2:
            VoidBlender::SetSeleccion("Bosch.");
            break;
        case 3:
            VoidBlender::SetSeleccion("Imaco.");
            break;
        case 4:
            VoidBlender::SetSeleccion("Philips.");
            break;
        case 5:
            VoidBlender::SetSeleccion("Thomas.");
            break;
        default:
            std::cout << "Error : Selection is a void.\n";
    }
    
    if(VoidBlender::GetSeleccion().length() > 1){
        std::cout << "Selettion : " << VoidBlender::GetSeleccion() << "\n";
    }
}

void Title(){
    int o1{0};

    std::cout << "#######################\n";
    std::cout << "1. Seleccionar Licuadora.\n";
    std::cout << "2. Encender/Apagar.\n";
    std::cout << "3. Obtener solo nombre.\n";
    std::cout << "4. Obtener solo modelo.\n";
    std::cout << "5. Obtener solo numero de modelo.\n";
    std::cout << "6. Obtener todos los valores anteriores.\n";
    std::cout << "#######################\n";
    std::cout << "Selecciona : ";
    std::cin >> o1;

    switch (o1) {
        case 1:
            seleccionarlicuadora();
            break;
        case 2:
            if(!VoidBlender::GetSeleccion().empty()){
            seleccionarlicuadora();
            break;
        } else {
            std::cout << "Error seleccione primero una licuadora XD.\n";
            Title();
        }

    default:
        break;
    }
}

int main(){
    Title();
}