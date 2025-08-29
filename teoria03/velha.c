#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    char t[3][3] = {{'X','O','.'},{'O','.','X'},{'.','X','O'}};
    for(int i = 0; i < 3; i++){
        printf("%c %c %c\n",t[i][0],t[i][1],t[i][2]);
    }
    return 0;
}