#include <iostream>
#include <string>

class Reserva {
    private:
        std::string sala = "Sala1";   // invariante 1: no vacia
        int personas = 12;       // invariante 2: entre 1 y 20
        int horaInicio = 4; 
        int horaFin = 10;;   // inv. 3: 0 <= inicio < fin <= 23

    public:
        void setSala(std::string newSala) {
            if (newSala.empty()){
                std::cout << "Not Valid Sala" << '\n';
                return;
            }
            sala = newSala;
        }

        void setPersonas(int people) {
            if (people < 1 || people > 20) {
                std::cout << "Not Valid People" << '\n';
                return;
            }
            personas = people;
        }

        void setHorario(int start, int finish) {
            if ( start < 0 || finish > 23 || start >= finish) {
                std::cout << "Not Valid Time" << '\n';
                return;
            }
            horaInicio = start;
            horaFin = finish;
        }

        std::string getSala() {
            return sala;
        }

        int getPersonas() {
            return personas;
        }

        int getHoraInicio() {
            return horaInicio;
        }

        int getHoraFin() {
            return horaFin;
        }
};

int main() {
    Reserva r;
    std::cout << r.getSala() << ' ' << r.getPersonas() << ' ' << r.getHoraInicio() <<  ' ' << r.getHoraFin() << '\n';

    r.setSala("Sala super god");
    r.setPersonas(20);
    r.setHorario(1, 24);

    std::cout << r.getSala() << ' ' << r.getPersonas() << ' ' << r.getHoraInicio() <<  ' ' << r.getHoraFin() << '\n';
}