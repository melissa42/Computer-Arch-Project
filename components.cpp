//
//  components.cpp
//  
//
//  Started by Tyler Hannis on 4/1/15, lasted editted on 4/6/15
//  Editted by Melissa Harkins on...
//  Editted by Vijayant Kanwar on...
//

#include "components.h"

int Program_Counter::Program_Counter_Mux_Input(char x){
    
    if (x == 0)
        return 0;
    
    else if (x == 1)
        return 1;
    
    else
        return -1
}

short Program_Counter::set_Program_Counter_Instruction_Address(char mux_select, short input1, short input2){

    if (mux_select == 0)
        return input1;
    
    else if (mux_select == 1)
        return input2;
    
    else if (mux_select == -1)
        return 0;
    
    else{
        std::cout << "Error with program counter\n";
        exit(1);
    }
    
short Instruction_Memory::fetch_Instruction_from_Program_Counter(short addr){
        /* take addr and fetch the instruction from the memory*/
}