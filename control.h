#ifndef control
#define control

//dialog pointer
static int start_menu = 1;
static int choice_pause = 0;
static int d_pointer = 999;

//main controller function
void controller(){
    
    //debugger
    jo_set_printf_color_index(JO_COLOR_INDEX_White);
    jo_printf(1, 1, "%d", d_pointer);
    
    //main menu
    if (jo_is_pad1_key_down(JO_KEY_START) && start_menu == 1){
        start_menu = 0;
        jo_clear_screen();
        d_pointer = 998;
        start();
    } 

    //pointer motion trigger
    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0){
        jo_printf(1, 1, "%d", d_pointer);
        if (d_pointer == 998)
            d_pointer = 0;
        else
            d_pointer++;
        jo_clear_screen();
    } 
    
    //pointer motion with background
    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 7){
        jo_clear_screen();
        dialog_008();
        d_pointer = 9;
    } 

    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 13){
        jo_clear_screen();
        dialog_014();
        d_pointer = 15;
    } 

    //pointers jump
    if (d_pointer == 998){
        dialog_0000();
    }

    if (d_pointer == 0)
        dialog_000();

    if (d_pointer == 1)
        dialog_001();

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

    if (d_pointer == 10)
        dialog_010();

    if (d_pointer == 11)
        dialog_011();

    if (d_pointer == 12)
        dialog_012();

    if (d_pointer == 13)
        dialog_013();
    
    if (d_pointer == 14)
        dialog_014();

    if (d_pointer == 15)
        dialog_015();

    if (d_pointer == 16)
        dialog_016();

    if (d_pointer == 17)
        dialog_017();

    if (d_pointer == 18)
        dialog_018();

    if (d_pointer == 19)
        dialog_019();

    if (d_pointer == 20)
        dialog_020();

    if (d_pointer == 21)
        dialog_021();

    if (d_pointer == 22)
        dialog_022();

    if (d_pointer == 23)
        dialog_023();
    
    if (d_pointer == 24)
        dialog_024();

    if (d_pointer == 25)
        dialog_025();

    if (d_pointer == 26)
        dialog_026();

    if (d_pointer == 27)
        dialog_027();

    if (d_pointer == 28)
        dialog_028();

    if (d_pointer == 29)
        dialog_029();

    if (d_pointer == 30)
        dialog_030();

    if (d_pointer == 31)
        dialog_031();

    if (d_pointer == 32)
        dialog_032();

    if (d_pointer == 33)
        dialog_033();
    
    if (d_pointer == 34)
        dialog_034();

    if (d_pointer == 35)
        dialog_035();

    if (d_pointer == 36)
        dialog_036();

    if (d_pointer == 37)
        dialog_037();

    if (d_pointer == 38)
        dialog_038();

    if (d_pointer == 39)
        dialog_039();  

    if (d_pointer == 40)
        dialog_040();  

    if (d_pointer == 41)
        dialog_041();

    if (d_pointer == 42)
        dialog_042();

    if (d_pointer == 43)
        dialog_043();
    
    if (d_pointer == 44)
        dialog_044();

    if (d_pointer == 45)
        dialog_045();

    if (d_pointer == 46)
        dialog_046();

    if (d_pointer == 47)
        dialog_047();

    if (d_pointer == 48)
        dialog_048();

    if (d_pointer == 49)
        dialog_049(); 

    if (d_pointer == 50)
        dialog_050();

    if (d_pointer == 51)
        dialog_051(); 

    if (d_pointer == 52)
        dialog_052();  

    if (d_pointer == 53)
        dialog_053();  
                      
}

#endif