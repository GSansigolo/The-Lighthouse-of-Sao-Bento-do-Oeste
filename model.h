#ifndef model
#define model

void draw_menu(void){
    set_background("TITLE.TGA", "BG");
    jo_set_printf_color_index(JO_COLOR_INDEX_White);
    jo_printf(11, 19, "PRESS START BUTTON");
    jo_printf(34, 28, "@2020");
    jo_printf(1, 28, "@G_Sansigolo");
};

void start(void){
    jo_clear_screen();
    set_background("BG.TGA", "BG");
    draw_hud();
    //set_sprite("SONIC.TGA", "TEX");
    dialog_001();
}

void dialog_001(void){ 
    h("[ Hitomi ]");
    d("First, order your active",1);
    d("unity to one of the spaces within ",2); 
    d("its range of movement, like Sakura.",3);
}

void dialog_002(void){
    h("[ Hitomi ]"); 
    d("After that you will be ",1);
    d("able to move freely. Remember that ",2); 
    d("your goal is to destroy the enemy.",3); 
}

void dialog_003(void){
    h("[ Hitomi ]");
    d("Your pilot skills are ",1); 
    d("formidable, you will be a great ",2); 
    d("addition to our group. I have faith.",3); 
}

void dialog_004(void){
    h("[ Hitomi ]");
    d("Leave these enemies to me.",1); 
}

void dialog_005(void){
    h("[ Hitomi ]");
    d("What you going to do?",1); 
}

void dialog_006(void){
  d_n("A - I'm going to fight!",1); 
    d("B - I'm going to stay!",2); 
    d("C - I'm going to help!",3); 
}

void dialog_007(void){
    h("[ Hitomi ]");
    d("Fight!? I see.",1); 
}

void dialog_008(void){
    h("[ Hitomi ]");
    d("Stay!? I see.",1); 
}

void dialog_009(void){
    h("[ Hitomi ]");
    d("Help!? I see.",1); 
}

#endif