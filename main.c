/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: georgi
 *
 * Created on February 1, 2016, 8:28 PM
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    int score = 4;
    switch(score) {
        case 1:
            printf("Only one?? Come on!");
            break;
        case 2:
            printf("Two is better than one.");
            break;
        default :
            printf("Not two, not one... come ooon!");
            break;
        case 3:
printf("Three is better than two and one.");
break;
    }
    return (EXIT_SUCCESS);
}

