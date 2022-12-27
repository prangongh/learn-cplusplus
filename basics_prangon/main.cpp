#include <iostream>
#include <string>

int main() {
    int16_t x = 125;
    float f = 12.5;
    double d = 12.6; // can store more than a float
    bool isHappy = true;

    std::string phrase = "Gold Experience";
    std::string phrasesub;
    phrasesub = phrase.substr(8, 3);

    std::cout << phrasesub << std::endl;
}