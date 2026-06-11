#include <stdio.h>

/*
Multi line comment
*/

// single line comment

//integer, float, charecter

int main() {

    int intiger_num = 5;
    float float_num = 3.1416;
    char character_sym = '#';

// data update

    int _age = 20;
    _age = 21;

/* 

Print data
\n - next output in next line.
%d - integer output
%f - float output
%c - charecter output
.4 - print max four digit after dot (.)

*/
    printf("Age: %d\n", _age);
    printf("Pi: %.4f\n", float_num);
    printf("Hash: %c\n", character_sym);

    return 0;
}
