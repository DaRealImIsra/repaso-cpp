#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>

int main() {
    std::vector<std::string> palabras = { "hola", "mundo", "hola", "casa", "mundo", "hola"};
    std::vector <int> veces;
    std::vector < std::string> claves;

    for (const std::string& w : palabras) {
    bool esta = false;

    for (std::size_t i = 0; i < claves.size(); ++i)
        if (claves[i] == w) {
            veces[i]++;
            esta = true;
            break;
        }

    if (!esta) {
        claves.push_back(w);
        veces.push_back(1);
    }
}
    for (int i = 0; i < veces.size(); i++) {
        std::cout << claves[i] << ": " << veces[i] << '\n';
    }

    std::set<std::string> d(palabras.begin(), palabras.end());
    std::cout << "Words in set " <<d.size() << '\n';

    std::map<std::string, int> conteo;
    for (const std::string& w : palabras)
        conteo[w]++;
    for (const auto& par : conteo)
        std::cout << par.first << ": " << par.second << '\n';

}
// Escogeria el mapeo ya que este hace pares y es mucho mas simple y eficiente.
// Usaria set si me pidera cuales son las diferente palabras que aparecen
// Si se que en algun punto en el futuro tndre que acceder a un indiceS