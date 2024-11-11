#include <iostream>

// TODO: Doplňte potřebné hlavičky

// Vypište obdélník o zadaných parametrech
// Vraťte 0 pokud vše v pořádku, -1 pokud nastala chyba
int hollow_rect(int x, int y, int thickness) {
    if (x <= 0 || y <= 0 || thickness <=0 || thickness > x / 2 || thickness > y / 2) {
        return -1;
    }

    for (int i = 0; i < y; i++) {               //sloupce
        for (int j = 0; j < x; j++) {           //řádky
            if (i < thickness || i >= y - thickness || j < thickness || j >= x - thickness) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << '\n';
    }
    return 0;
}

// Vraťte a na n
#include <iostream>

void power(int a, int n) {
    if (n == 0) {
        std::cout << "Výsledek: 1\n";
        return;
    }

    int ans = 1; 

    for (int i = 0; i < n; i++) {
        ans *= a;
    }

    std::cout << ans << '\n';
}



// Vraťte idx-té fibonacciho číslo
int fibonacci(int idx) {
    int p = 1;
    int pp = 0;
    int ans;

    if (idx == 0) {
        ans = 0;
    } else if (idx == 1) {
        ans = 1;
    } else {
        for (int i = 0; i < idx; i++) {
        ans = p + pp;
        pp = p;
        p = ans;
        }
    }

    std::cout << ans << '\n';
    return 0;
}


int main() {
    hollow_rect(20, 10, 2);
    power(2, 4);
    fibonacci(6);

}
