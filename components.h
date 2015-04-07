//
//  components.h
//  
//
//  Started by Tyler Hannis on 4/1/15, lasted editted on 4/6/15
//  Editted by Melissa Harkins on...
//  Editted by Vijayant Kanwar on...
//
//

#ifndef ____components__
#define ____components__

#include <stdio.h>

struct MIPS16bit{
    unsigned short instruction_address;
    short instruction;
};

class Program_Counter{
public:
    int Program_Counter_Mux_Input(char x);
    
    /* 
        The first variable passed will be the input, obtained for the
        previous function, the second will be the first mux input and the
        third will be the second mux input
     */
    
    short set_Program_Counter_instruction_address(char mux_select, short input1, short input2);
    
};

class Instruction_Memory{
public:
    short fetch_Instruction_from_Program_Counter(short addr);
};

#endif /* defined(____components__) */