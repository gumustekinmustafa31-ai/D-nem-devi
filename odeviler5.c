#include <stdio.h>

#define n 5


void printSolution(int cozum[n][n]) {
    printf("\n Bulunan Yol (1. yolu ):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf(" %d ", cozum[i][j]);
        }
        printf("\n");
    }
}


bool isSafe(int labirent[n][n], int x, int y) {

    return (x >= 0 && x < n && y >= 0 && y < n && labirent[x][y] == 1);
}


bool guvenlinokta(int labirent[n][n], int x, int y, int cozum[n][n]) {
    
    if (x == n - 1 && y == n - 1 && labirent[x][y] == 1) {
        cozum[x][y] = 1;
        return true;
    }

    if (isSafe(labirent, x, y)) {
        
        if (cozum[x][y] == 1) return false;

        
        cozum[x][y] = 1;

        if (guvenlinokta(labirent, x + 1, y, cozum)) return true;

        
        if (guvenlinokta(labirent, x, y + 1, cozum)) return true;

        
        if (guvenlinokta(labirent, x - 1, y, cozum)) return true;

        
        if (guvenlinokta(labirent, x, y - 1, cozum)) return true;

        
        cozum[x][y] = 0;
        return false;
    }
    return false;
}

int main() {
    
    int labirent[n][n] = {
        {1, 0, 1, 1, 1},
        {1, 1, 1, 0, 1},
        {0, 0, 0, 1, 1},
        {1, 1, 1, 1, 0},
        {1, 0, 0, 1, 1}
    };

    int cozum[n][n] = {0}; 

    
    if (labirent[0][0] == 0) {
        printf("Hata: Başlangiç noktasi bir engel!\n");
        return 0;
    }

    if (guvenlinokta(labirent, 0, 0, cozum)) {
        printf("Çikiş yolu bulundu!");
        printSolution(cozum);
    } else {
        printf("Çikiş yolu bulunamadi.\n");
    }

    return 0;
}