#include <iostream>
#include <string>

int contarPalabras(const std::string& s);
std::string voltear(const std::string& s);

int main() {
    std::string lala = "Hello my  name is Israel!";
    int amountofWords = contarPalabras(lala);
    std::cout << amountofWords << '\n';    
    std::string flipped = voltear(lala);
    std::cout << flipped << '\n';
}

int contarPalabras(const std::string& s) {
    int count = 1;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == ' ' && s[i + 1] != ' ') {
            count++;
        }
    }
    return count;
}

std::string voltear(const std::string& s) {
    std::string volteado;
    for (int i = s.length() - 1; i >= 0; i--) {
        volteado += s[i];
    }
    return volteado;
}