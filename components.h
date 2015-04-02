//
//  components.h
//  
//
//  Created by Tyler Hannis on 4/1/15.
//
//

#ifndef ____components__
#define ____components__

#include <stdio.h>


class Program_Counter{
private:
    static unsigned int instruction_address = 0;
public:
    int Program_Counter_Mux_Input(short x);
    
    /* 
        The first variable passed will be the input, obtained for the
        previous function, the second will be the first mux input and the
        third will be the second mux input
     */
    
    int set_Program_Counter_instruction_address(int x, int y, int z);
    
};

#endif /* defined(____components__) */
