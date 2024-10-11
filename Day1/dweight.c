#include <stdio.h>

int main(void)
{
    int height = 8, length = 12, width = 10, volume;

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;

    printf("Dimentions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimentional weight (pounds): %d\n", (volume +165) / 166);   //太对啦哥们儿

    return 0;
}