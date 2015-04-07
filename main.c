//
//  main.c
//  
//
//  Computer Architecture Project programmed by Tyler Hannis, Melissa Harkins and Vijayant Kanwar
//
// This file will server as the implementation of the data path, and the accompying files will be the development and digital construction of a 16-bit MIPS architecture simulator.

#include <stdio.h>
#include "components.h"


int clockcycle();

int main(){
    
    MIPS16bit variables;
    bool loop = true;
    int instructionADDR = 0;
    
    do{
        instructionADDR = clockcycle();
        
        
    }while(loop);
    
    return 0;
}

int clockcycle(){
    //int PC = PC function
    
    return PC;
}