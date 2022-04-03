//imports
#include <jo/jo.h>
#include "neptune.h"
#include "model_formatter.h"
#include <string.h>
#include "control.h"

//main function
void jo_main(void){

    //init screen
    jo_core_init(JO_COLOR_Black);

    //load the palette handler
    jo_set_tga_palette_handling(tga_palette_handling);

    // Order NBG2 to the top of all scroll screen
    jo_core_set_screens_order(JO_NBG2_SCREEN, JO_SPRITE_SCREEN, JO_NBG0_SCREEN, JO_RBG0_SCREEN, JO_NBG1_SCREEN);
    load_nbg2_font();

    //callbacks
    jo_core_add_callback(controller);

    //draw main menu
    draw_intro();

    //run code
    jo_core_run();

}
