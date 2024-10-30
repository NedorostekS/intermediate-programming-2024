#include <cassert>
#include <iostream>

// Napište funckci, která vrátí součin dvou čísel
int multiply(int a, int b) {
    return a * b;
}

// Napište funkci, která rozhodne jestli číslo je sudé
bool is_even(int x) {
    return (x + 1) % 2;
}

// Vypište věechny čísla od start do stop (včetně)
void print_numbers(int start, int stop) {
    int i = start;
    while (i <= stop) {
        std::cout << i << std::endl;
        i++;
    }
}

// Naimplementujte funkci která pořítá faktoriál
// Faktoriál čísla x je definovaný jako součin všech kladných čísel <= x
int factorial(int x) {

    int f = x;
    while (x > 1) {
        x--;
        f = f * x;
    }
    std::cout << f << std::endl;


    return 0;
}

// Funkce vypíše count hvězdiček
void print_stars(unsigned int count) {
    while (count > 0) {
        std::cout << "*";
        count--;
    }
    std::cout << " " << '\n';
}

// Funkce vypíše obdélníček z hvězdiček
void print_rectangle(unsigned int sirka, unsigned int vyska) {
    int aa = sirka;
    while (vyska > 0) {
        while (sirka > 0) {
            std::cout << "*";
            sirka--;
        }
        std::cout << " " << '\n';
        sirka = aa;
        vyska--;
    }
    std::cout << " " << '\n';
}

// Funkce vypíše takovýto trojúhelník o zadané výšce
// *
// **
// ***
// ****
void print_pyramid_l(unsigned int height) {
    int ph = 1;
    int sv = ph;
    while (height > 0) {
        while (sv > 0) {
            std::cout << "*";
            sv--;
        }
        std::cout << "" << '\n';
        ph++;
        sv = ph;
        height--;
    }
}

// Funkce vypíše takovýto trojúhelník o zadané výšce
//    *
//   **
//  ***
// ****
void print_pyramid_r(unsigned int height) {
    int pocet_mezer;
    int pocet_hvezd;
    
    for (int i = 0; i < height; i++) {
        pocet_mezer = height - i - 1;
        pocet_hvezd = i + 1;

        for (int x = 0; x < pocet_mezer; x++) {
            std::cout << " ";
        }

        for (int y = 0; y < pocet_hvezd; y++) {
            std::cout << "*";
        }
        std::cout << "" << '\n';

    }
}


// Funkce vypíše takovýto trojúhelník o zadané výšce
//    *
//   ***
//  *****
// *******
void print_pyramid(unsigned int height) {
    int pocet_mezer;
    int pocet_hvezd;

    for (int i = 0; i < height; i++) {
        pocet_mezer = height - i - 1;           
        pocet_hvezd = 2 * i + 1;                

        for (int x = 0; x < pocet_mezer; x++) {
            std::cout << " ";
        }

        for (int y = 0; y < pocet_hvezd; y++) {
            std::cout << "*";
        }
        std::cout << "" << '\n';
    }
}

// Funkce vypíše takovýto trojúhelník o zadané výšce
// *******
//  *****
//   ***
//    *
void print_pyramid_inverse(unsigned int height) {
    int pocet_mezer;
    int pocet_hvezd;

    for (int i = 0; i < height; i++) {
        pocet_mezer = i;
        pocet_hvezd = 2 * (height - i) - 1;

        for (int x = 0; x < pocet_mezer; x++) {
            std::cout << " ";
        }

        for (int y = 0; y < pocet_hvezd; y++) {
            std::cout << "*";
        }
        std::cout << "" << '\n';
    }
}

int main() {
    std::cout << "5 * 2: " << multiply(5, 2) << std::endl;
    std::cout << "Číslo 5 je sudé?: " << is_even(5) << std::endl;
    print_numbers(-5, 2);
    std::cout << "Faktoriál 5: " << factorial(5) << std::endl;
    print_stars(5);
    print_rectangle( 10, 20);
    print_pyramid_l(5);
    print_pyramid_r(5);
    print_pyramid(5);
    print_pyramid_inverse(5);
}
