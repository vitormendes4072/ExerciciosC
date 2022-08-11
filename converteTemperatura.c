
#include <stdio.h>
//ex6
void main() {
    float celsius;
    float fah = 169;
    celsius = (fah - 32)/1.8;
    printf("%f", celsius);
    
    celsius = -40;
    fah = celsius * 1.8 + 32;
    printf("%f", fah);
}
