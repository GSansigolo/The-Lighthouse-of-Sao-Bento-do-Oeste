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
    set_background("BLACK.TGA", "BG"); //CARTA
    dialog_0000();
}

void dialog_0000(void){
  d_n("You are Renne Bras, an ordinary",1); 
    d("detective. You entered the business",2); 
    d("seven years ago, just after the",3); 
}

void dialog_000(void){
  d_n("end of your longest relationship.",1); 
    d("You became famous for solving the",2); 
    d("case of kidnappings in the capital.",3); 
}

void dialog_001(void){
  d_n("Ever since you never picked up",1); 
    d("jobs that involved disappearance ",2); 
    d("cases.",3); 
}

void dialog_002(void){
  d_n("Everything changed when days ago",1); 
    d("you received a message from an old",2); 
    d("friend.",3); 
}

void dialog_003(void){
  d_n("Renne long time no see, I am sending",1); 
    d("this message because I am running ",2); 
    d("out of hope. A couple of my friends",3); 
}

void dialog_004(void){
  d_n("went missing a week ago. I called",1); 
    d("the police but they were unable to",2); 
    d("find evidence to proceed.",3); 
}

void dialog_005(void){
  d_n("I would like to hire you to investi-",1); 
    d("gate this case. I live in Sao Bento",2); 
    d("do Oeste, Minas Gerais, near the",3); 
}

void dialog_006(void){
  d_n("border with Sao Paulo. Please help",1); 
    d("me Renne, you are my only hope.",2); 
    d("With love, - Julia.",3); 
}

void dialog_007(void){
  d_n("Normally, you never accepted jobs",1); 
    d("outside the state of Sao Paulo, but",2); 
    d("this time you made an exception.",3); 
}

void dialog_008(void){
    jo_clear_screen();
    set_background("SAIDA.TGA", "BG"); //SAIDA COM RENNE
    dialog_009();
}

void dialog_009(void){

  d_n("Sao Bento do Oeste",1); 
    d("Minas Gerais - Brazil",2); 
    d("City entrance",3); 
}

void dialog_010(void){  
    h("[ Renne ]");
                d("Hello Sao Bento do Oeste.",1);
    d("I hope you have a good case for me.",2); 
    d("",3);
}

void dialog_011(void){  
    h("[ Renne ]");
                d("...",1);
    d("",2); 
    d("",3);
}

void dialog_012(void){  
    h("[ Renne ]");
                d("Ok, now where is Julia.",1);
    d("",2); 
    d("",3);
}

void dialog_013(void){  
    h("[ Julia ]");
                d("Rennee!",1);
    d("",2); 
    d("",3);
}

void dialog_014(void){
    jo_clear_screen();
    set_background("SAIDA.TGA", "BG"); //SAIDA COM RENNE E JULIA
    dialog_015();
}

void dialog_015(void){  
    h("[ Julia ]");
                d("You came!",1);
    d("",2); 
    d("",3);
}

void dialog_016(void){  
    h("[ Renne ]");
                d("I couldn't ignore an old",1);
    d("friend.",2); 
    d("",3);
}

void dialog_017(void){  
    h("[ Julia ]");
                d("Long time no see.",1);
    d("",2); 
    d("",3);
}

void dialog_018(void){  
    h("[ Renne ]");
                d("Yes, it does.",1);
    d("",2); 
    d("",3);
}

void dialog_019(void){  
    h("[ Renne ]");
                d("I would love to spend an",1);
    d("afternoon talking with you...",2); 
    d("",3);
}

void dialog_020(void){  
    h("[ Julia ]");
                d("Right, the case.",1);
    d("",2); 
    d("",3);
}

void dialog_021(void){  
    h("[ Renne ]");
                d("I will ask you a few ",1);
    d("questions, feel free to ask back",2); 
    d("anytime.",3);
}

void dialog_022(void){  
    h("[ Julia ]");
                d("Okay.",1);
    d("",2); 
    d("",3);
}

void dialog_023(void){  
    h("[ Renne ]");
                d("Who are the couple of",1);
    d("friends you mentioned?",2); 
    d("",3);
}

void dialog_024(void){  
    h("[ Julia ]");
                d("Their names are Cristiano",1);
    d("Machado and Alice Zena. I have known ",2); 
    d("them for three years.",3);
}

void dialog_025(void){  
    h("[ Julia ]");
                d("Are they married, friends ",1);
    d("or something else?",2); 
    d("",3);
}

void dialog_026(void){  
    h("[ Julia ]");
                d("They are dating. I",1);
    d("remember Alice telling me that she",2); 
    d("was waiting for Cris to ask her..",3);
}

void dialog_027(void){  
    h("[ Renne ]");
                d("I see. What was their jobs?",1);
    d("",2); 
    d("",3);
}

void dialog_028(void){  
    h("[ Julia ]");
                d("Cristiano was a lawyer,",1);
    d("he had an office on 15th March Street,",2); 
    d("the main street of the city.",3);
}

void dialog_029(void){  
    h("[ Julia ]");
                d("Alice was a Portuguese ",1);
    d("teacher at the school I work at.",2); 
    d("",3);
}

void dialog_030(void){  
    h("[ Renne ]");
                d("How would you describe",1);
    d("their relationship?",2); 
    d("",3);
}

void dialog_031(void){  
    h("[ Julia ]");
                d("They seemed very close, ",1);
    d("a perfect couple, I never saw them ",2); 
    d("fight...",3);
}

void dialog_032(void){  
    h("[ Renne ]");
                d("Hum.. ",1);
    d("",2); 
    d("",3);
}

void dialog_033(void){  
    h("[ Julia ]");
                d("I'm sorry did I say",1);
    d("something?",2); 
    d("",3);
}

void dialog_034(void){  
    h("[ Renne ]");
                d("No, I just remembered one",1);
    d("thing... Please continue.",2); 
    d("",3);
}

void dialog_035(void){  
    h("[ Julia ]");
                d("They were... I mean they",1);
    d("are a beautiful couple.",2); 
    d("",3);
}

void dialog_036(void){  
    h("[ Renne ]");
                d("As I understand it, you",1);
    d("were much closer to Alice than to",2); 
    d("Cristiano right?",3);
}

void dialog_037(void){  
    h("[ Julia ]");
                d("Yes.",1);
    d("",2); 
    d("",3);
}

void dialog_038(void){  
    h("[ Renne ]");
                d("About Cristiano, you knew ",1);
    d("something about his life beyond what ",2); 
    d("Alice told you...",3);
}

void dialog_039(void){  
    h("[ Julia ]");
                d("As far as I remember he",1);
    d("used to go to drink in the bar in ",2); 
    d("front of his office.",3);
}

void dialog_040(void){  
    h("[ Renne ]");
                d("Did you knew Cristiano",1);
    d("before his relationship with Alice?",2); 
    d("",3);
}

void dialog_041(void){  
    h("[ Julia ]");
                d("Just by sight.",1);
    d("",2); 
    d("",3);
}

void dialog_042(void){  
    h("[ Renne ]");
                d("Right. About the",1);
    d("disappearance, how you noticed that",2); 
    d("both were gone.",3);
}

void dialog_043(void){  
    h("[ Julia ]");
                d("They don't have a car, so",1);
    d("I saw them every day walking to work.",2); 
    d("",3);
}

void dialog_044(void){  
    h("[ Julia ]");
                d("A week ago Alice said that ",1);
    d("she wanted to go to the Lighthouse.",2); 
    d("",3);
}

void dialog_045(void){  
    h("[ Renne ]");
                d("Lighthouse?",1);
    d("",2); 
    d("",3);
}

void dialog_046(void){  
    h("[ Julia ]");
                d("Yes, the City Lighthouse.",1);
    d("",2); 
    d("",3);
}

void dialog_047(void){  
    h("[ Renne ]");
                d("Why does this city have",1);
    d("a lighthouse? We are in Minas-Gerais,",2); 
    d("there no sea.",3);
}

void dialog_048(void){  
    h("[ Julia ]");
                d("It is the city monument,",1);
    d("they built it to be a tourist spot for",2); 
    d("the city.",3);
}


void dialog_049(void){  
    h("[ Renne ]");
                d("Anyway, let's continue.",1);
    d("",2); 
    d("",3);
}

void dialog_050(void){  
    h("[ Julia ]");
                d("Alice said she would go",1);
    d("to the Lighthouse. Once I heard it, I",2); 
    d("thought that Cristiano would ask her.",3);
}

void dialog_051(void){  
    h("[ Renne ]");
                d("Oh.",1);
    d("",2); 
    d("",3);
}

void dialog_052(void){  
    h("[ Julia ]");
                d("Since then I have not ",1);
    d("heard any more news from the two, ",2); 
    d("both have stopped showing up at their",3);
}

void dialog_053(void){  
    h("[ Julia ]");
                d("work, the house has been ",1);
    d("abandoned, and from what I talked,",2); 
    d("nobody has seen them since ever since.",3);
}

#endif