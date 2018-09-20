#include <stdio.h>

int main(void){
    char input;
    while (scanf("%c", &input) != EOF){
        // Compare with ascii table values
        if (input < 65) 
            putchar(input);
        else if (input >= 65 && input <= 67)
            putchar('2');
        else if (input >= 68 && input <= 70)
            putchar('3');
        else if (input >= 71 && input <= 73)
            putchar('4');
        else if (input >= 74 && input <= 76)
            putchar('5');
        else if (input >= 77 && input <= 79)
            putchar('6');
        else if (input >= 80 && input <= 83)
            putchar('7');
        else if (input >= 84 && input <= 86)
            putchar('8');
        else if (input >= 87 && input <= 91)
            putchar('9');
    }
    return 0;
}
