//imports
#include <jo/jo.h>
#include "neptune.h"
#include "model.h"
#include "control.h"

//main function
void jo_main(void){

    //init screen      
    jo_core_init(JO_COLOR_Black);
    
    //call the controller
    jo_core_add_callback(controller);
    
    //draw main menu
    draw_menu();

    //run code
    jo_core_run();
}
