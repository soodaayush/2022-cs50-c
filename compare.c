#include "cs50.h"
#include <stdio.h>
#include <string.h>

int main (void) {
    // int i = 50;
    // int j = 51;

    // if(i == j) {
    //     printf("Same\n");
    // } 
    // else {
    //     printf("Different\n");
    // }

    char *i = "HI!";
    char *j = "HI!";

    if(strcmp(i, j) == 0) {
        printf("Same\n");
    } 
    else {
        printf("Different\n");
    }
}