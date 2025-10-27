//usr/bin/env -S /usr/local/bin/tcc -Wall -Og -g -fsanitize=address,undefined $0 -o cscript.out; ./cscript.out $@ ; exit

#include <stdio.h>

int main(int argc, char *argv[]) {

    printf("<p>Olá mundo!</p>\n");
    printf("<p>Isso aqui está usando um script CGI =3</p>\n");

    return 0;
}

