#include <stdio.h>

// Tabuleiro - Batalha Naval

int main() {
    printf (" TABULEIRO BATALHA NAVAL\n");
    printf ("    A B C D E F G H I J\n");
    printf ("1   0 0 0 0 0 0 0 0 0 0\n");
    printf ("2   0 0 0 0 3 0 0 0 3 0\n");
    printf ("3   0 0 0 3 0 0 0 0 3 0\n");
    printf ("4   0 0 3 0 0 0 0 0 3 0\n");
    printf ("5   0 3 0 0 0 0 0 0 3 0\n");
    printf ("6   0 0 0 0 0 0 0 0 0 0\n");
    printf ("7   0 0 0 3 0 0 0 0 0 0\n");
    printf ("8   0 0 3 3 3 0 0 0 0 0\n");
    printf ("9   0 0 0 3 0 0 0 0 0 0\n");
    printf ("10  0 0 0 0 0 0 0 0 0 0\n");
    
    // Os números 0 representam a água; Os números 3 representam o návio
    
    /* Exemplo de Habilidades:
    
    Habilidade em Cone:

     0 0 3 0 0
     0 3 3 3 0
     3 3 3 3 3
    
    Habilidade em Octaedro:

     0 0 3 0 0
     0 3 3 3 0
     0 0 3 0 0

    Habilidade em Cruz:

     0 0 3 0 0
     3 3 3 3 3
     0 0 3 0 0 
    */

    return 0;
}