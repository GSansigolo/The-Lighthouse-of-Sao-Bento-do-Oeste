#ifndef control
#define control

//dialog pointer
static int start_menu = 1;
static int choice_pause = 0;
static int d_pointer = 1;

void draw_renne_hud(){
    set_sprite("SONIC.TGA", "TEX");
}

//main controller function
void controller(){
    
    //debugger
    //jo_set_printf_color_index(JO_COLOR_INDEX_White);
    //jo_printf(1, 1, "%d", d_pointer);
    
    //main menu
    if (jo_is_pad1_key_down(JO_KEY_START) && start_menu == 1){
        start_menu = 0;
        jo_clear_screen();
        start();
    } 

    //pointer motion trigger
    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0){
        jo_printf(1, 1, "%d", d_pointer);
        d_pointer++;
        jo_clear_screen();
    } 

    //pointers jump
    if (d_pointer == 2)
        dialog_002();

    if (d_pointer == 3)
        dialog_003();

    if (d_pointer == 4)
        dialog_004();

    if (d_pointer == 5)
        dialog_005();

    if (d_pointer == 6)
        dialog_006();

    if (d_pointer == 7)
        dialog_007();
    
    if (d_pointer == 8)
        dialog_008();

    if (d_pointer == 9)
        dialog_009();

    if (d_pointer == 10)
        dialog_010();

}

#endif