#ifndef model
#define model

void draw_menu(void){
    set_background("TITULO.TGA", "BG");
    jo_set_printf_color_index(JO_COLOR_INDEX_White);
    jo_printf(11, 23, "PRESS START BUTTON");
    //jo_printf(34, 28, "@2020");
    jo_printf(1, 28, "@G_Sansigolo");
};

void draw_renne_sad(){
    load_sprites("RENNE2.TGA", "TEX");
}

void start(void){
    jo_clear_screen();
    set_background("BLACK.TGA", "BG");
    dialog_001();
}

void dialog_001(void){
  d_n("You are Renne Bras, an ordinary",1); 
    d("detective. You entered the business",2); 
    d("seven years ago, just after the",3); 
}


void dialog_002(void){
  d_n("end of your longest relationship.",1); 
    d("You became famous for solving the",2); 
    d("case of kidnappings in the capital.",3); 
}

void dialog_003(void){
  d_n("Everything changed when days ago",1); 
    d("you received a message from an old",2); 
    d("friend.",3); 
}

void dialog_004(void){
  d_n("Renne long time no see, I am sending",1); 
    d("this message because I am running ",2); 
    d("out of hope. A couple of my friends",3); 
}

void dialog_005(void){
  d_n("went missing a week ago. I called",1); 
    d("the police but they were unable to",2); 
    d("find evidence to proceed.",3); 
}

void dialog_006(void){
  d_n("I would like to hire you to investi-",1); 
    d("gate this case. I live in Sao Bento",2); 
    d("do Oeste, Minas Gerais, near the",3); 
}

void dialog_007(void){
  d_n("border with Sao Paulo. Please help",1); 
    d("me Renne, you are my only hope.",2); 
    d("With love, - Julia.",3); 
}

void dialog_008(void){
  d_n("Normally, you never accepted jobs",1); 
    d("outside the state of Sao Paulo, but",2); 
    d("this time you made an exception.",3); 

}

void dialog_009(void){
    jo_clear_screen();
    set_background("SAIDA.TGA", "BG");    
    dialog_010();
}

void dialog_010(void){

  d_n("Sao Bento do Oeste",1); 
    d("Minas Gerais - Brazil",2); 
    d("Morning",3); 
}

void dialog_011(void){  
    draw_renne_sad();

    h("[ Renne ]");
                d("Why am I doing this.",1);
    d("Probably I can't solve this case.",2); 
    d("I'm going to apologize and leave...",3);
}


#endif