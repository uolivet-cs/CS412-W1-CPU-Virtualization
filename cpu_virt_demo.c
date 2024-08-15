#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <assert.h>
#include "common.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "usage: cpu_virt_demo <string>\n");
        exit(1);
    }
    char *str = argv[1];
    while (1) {
        Spin(1);
        printf("%s\n", str);
    }
    return 0;
}

/*
    gcc -o cpu cpu_virt_demo.c -Wall
    ./cpu "A"
    Start-Process -FilePath ./cpu -ArgumentList "A" -NoNewWindow; 
    Start-Process -FilePath ./cpu -ArgumentList "B" -NoNewWindow;
    Start-Process -FilePath ./cpu -ArgumentList "C" -NoNewWindow;
    Start-Process -FilePath ./cpu -ArgumentList "D" -NoNewWindow;
*/