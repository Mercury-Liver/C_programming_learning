#include <stdio.h>

int main(void)
{
    int g1, g2, g3, g4, g5, g6, g7, g8, g9, g10, g11, g12, g13, g14, g15, g16;
    //世界上最长的声明(是叫这个吧)

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", 
            &g1, &g2, &g3, &g4, &g5, &g6, &g7, &g8, &g9, &g10, &g11, &g12, &g13, &g14, &g15, &g16);

    printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n",
            g1, g2, g3, g4, g5, g6, g7, g8, g9, g10, g11, g12, g13, g14, g15, g16);

    printf("Row sums: %d %d %d %d\n",
            (g1 + g2 + g3 + g4),
            (g5 + g6 + g7 + g8),
            (g9 + g10 + g11 + g12),
            (g13 + g14 + g15 + g16));
    printf("Column sums: %d %d %d %d\n",
            (g1 + g5 + g9 + g13),
            (g2 + g6 + g10 + g14),
            (g3 + g7 + g11 + g15),
            (g4 + g8 + g12 + g16));
    printf("Diagonal sums: %d %d\n",
            (g1 + g6 + g11 + g16),
            (g4 + g7 + g10 + g13));

    return 0;
}
/*
累死了累死了累死了累死了
累死了累死了累死了累死了
累死了累死了累死了累死了
累死了累死了累死了累死了
*/