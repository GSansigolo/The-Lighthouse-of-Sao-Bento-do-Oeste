#ifndef model
#define model

void draw_menu(void){
    set_background("TITULO.TGA", "BG");
    jo_set_printf_color_index(JO_COLOR_INDEX_White);
    jo_printf(11, 23, "PRESS START BUTTON");
    //jo_printf(34, 28, "@2020");
    jo_printf(1, 28, "@G_Sansigolo");
};

void start(void){
    jo_clear_screen();
    set_background("SAIDA.TGA", "BG");
    draw_hud();
    dialog_001();
}

void dialog_001(void){
  d_n("A",1); 
    d("",2); 
    d("",3); 
}

void dialog_002(void){
    h("[ Hitomi ]"); 
    d("After that you will be ",1);
    d("able to move freely. Remember that ",2); 
    d("your goal is to destroy the enemy.",3); 
}

#endif