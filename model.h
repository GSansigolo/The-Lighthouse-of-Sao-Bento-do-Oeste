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
    set_background("CARTA.TGA", "BG"); 
    dialog_000();
}

void dialog_000(void){
  d_n("You are Renne Bras, an ordinary",1); 
    d("detective. You entered the business",2); 
    d("seven years ago, just after the",3); 
}

void dialog_001(void){
  d_n("end of your longest relationship.",1); 
    d("You became famous for solving the",2); 
    d("case of kidnappings in the capital.",3); 
}

void dialog_002(void){
  d_n("Ever since you never picked up",1); 
    d("jobs that involved disappearance ",2); 
    d("cases.",3); 
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
    jo_clear_screen();
    set_background("SAIDA0.TGA", "BG");
    dialog_009();
}

void dialog_009(void){

  d_n("Sao Bento do Oeste",1); 
    d("Minas Gerais - Brazil",2); 
    d("City entrance",3); 

}

void dialog_010(void){  
  d_n("Meet me near the city entrence at 4PM",1);
    d("- Julia.",2); 
    d("",3);
}

void dialog_011(void){  
    jo_clear_screen();
    set_background("SAIDA.TGA", "BG");
    dialog_012();
}

void dialog_012(void){  
    h("[ Renne ]");
                d("Finally Sao Bento do Oeste",1);
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
    set_background("SAIDA2.TGA", "BG");
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
                d("Oh Right, the case.",1);
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
                d("I see. What was their ",1);
    d("jobs?",2); 
    d("",3);
}

void dialog_028(void){  
    h("[ Julia ]");
                d("Cristiano was a lawyer,",1);
    d("he had an office on 15th March Street",2); 
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
    d("she wanted to go to the lighthouse.",2); 
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
                d("Yes, the City lighthouse.",1);
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
    d("they built it to be a tourist spot ",2); 
    d("for the city.",3);
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
    d("to the lighthouse. Once I heard it, I",2); 
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
    d("nobody has seen them since ever since",3);
}


void dialog_054(void){  
    h("[ Renne ]");
                d("Copy, Is there anything ",1);
    d("else you want to tell me? ",2); 
    d("",3);
}

void dialog_055(void){  
    h("[ Julia ]");
                d("I don't think so.",1);
    d("",2); 
    d("",3);
}

void dialog_056(void){  
    h("[ Renne ]");
                d("Okay, I'm going to ",1);
    d("walk around town, to collect some",2); 
    d("testimonies, if that's okay with you?",3);
}

void dialog_057(void){  
    h("[ Julia ]");
                d("It's all right.",1);
    d("",2); 
    d("",3);
}

void dialog_058(void){  
    h("[ Julia ]");
                d("Do you want me to partner",1);
    d("you?",2); 
    d("",3);
}

void dialog_059(void){  
    h("[ Renne ]");
                d("I would love to, but it",1);
    d("can affect how people talk to me.",2); 
    d("",3);
}

void dialog_060(void){  
    h("[ Julia ]");
                d("I never thought this",1);
    d("way.",2); 
    d("",3);
}

void dialog_061(void){  
    h("[ Renne ]");
                d("It's not a big deal, ",1);
    d("it's just one of my working habits.",2); 
    d("",3);
}

void dialog_062(void){  
    h("[ Julia ]");
                d("Have a nice day then.",1);
    d("",2); 
    d("",3);
}

void dialog_063(void){  
    h("[ Renne ]");
                d("You too.",1);
    d("",2); 
    d("",3);
}

void dialog_064(void){  
    h("[ Renne ]");
                d("And before I forget, after ",1);
    d("all this we are going to have a real",2); 
    d("dinner together.",3);
}

void dialog_065(void){  
    h("[ Julia ]");
                d("Oh do you still remember",1);
    d("that...",2); 
    d("",3);
}

void dialog_066(void){  
    h("[ Julia ]");
                d("Ok, it is settled then.",1);
    d("",2); 
    d("",3);
}







void dialog_067(void){
    jo_clear_screen();
    set_background("RUA0.TGA", "BG");
    dialog_068();
}

void dialog_068(void){

  d_n("Sao Bento do Oeste",1); 
    d("15th March Street",2); 
    d("Minutes later",3); 
}
void dialog_069(void){
    jo_clear_screen();
    set_background("RUA.TGA", "BG");
    dialog_070();
}

void dialog_070(void){  
    h("[ Sabrina ]");
                d(" Damn it! Who the hell is",1);
    d("doing this.",2); 
    d("",3);
}

void dialog_071(void){  
    h("[ Sabrina ]");
                d(" I will find out who is",1);
    d("responsible for these burned  ",2); 
    d("dumpsters.",3);
}

void dialog_072(void){  
    h("[ Sabrina ]");
                d(" Anyway, here I am ",1);
    d("Cristiano's office. I will put an ",2); 
    d("end to this. ",3);
}

void dialog_073(void){  
    h("[ Renne ]");
                d("Hey you, stop right there. ",1);
    d("",2); 
    d("",3);
}

void dialog_074(void){
    jo_clear_screen();
    set_background("RUA2.TGA", "BG");
    dialog_075();
}

void dialog_075(void){  
    h("[ Renne ]");
                d("You can't go in there! ",1);
    d("This place is close due to an ",2); 
    d("investigation.",3);
}

void dialog_076(void){  
    h("[ Sabrina ]");
                d(" I know That's why I'm ",1);
    d("here.",2); 
    d("",3);
}

void dialog_077(void){  
    h("[ Renne ]");
                d("Who are you?",1);
    d("",2); 
    d("",3);
}

void dialog_078(void){  
    h("[ Sabrina ]");
                d(" You first, it was you who  ",1);
    d("showed up accusing me.",2); 
    d("",3);
}

void dialog_079(void){  
    h("[ Renne ]");
                d("Okay, my name is Renne",1);
    d("Bras, I'm a hired detective. I'm",2); 
    d("working on this case.",3);
}

void dialog_080(void){  
    h("[ Sabrina ]");
                d(" Julia's friend?",1);
    d("",2); 
    d("",3);
}

void dialog_081(void){  
    h("[ Renne ]");
                d("Yes, and who are you?",1);
    d("",2); 
    d("",3);
}

void dialog_082(void){  
    h("[ Sabrina ]");
                d(" My name is Sabrina I am",1);
    d("a teacher at the same school as Alice",2); 
    d("I am investigating this case solo.",3);
}

void dialog_083(void){  
    h("[ Renne ]");
                d("I see. Let's go in  ",1);
    d("together then.",2); 
    d("",3);
}

void dialog_084(void){  
    h("[ Renne ]");
                d("But first, let me ask you ",1);
    d("a few questions.",2); 
    d("",3);
}

void dialog_085(void){  
    h("[ Renne ]");
                d("Could you think of anyone ",1);
    d("behind  all this.",2); 
    d("",3);
}

void dialog_086(void){  
    h("[ Sabrina ]");
                d(" Cristiano.",1);
    d("",2); 
    d("",3);
}

void dialog_087(void){  
    h("[ Renne ]");
                d("Oh..",1);
    d("",2); 
    d("",3);
}

void dialog_088(void){  
    h("[ Renne ]");
                d("Why him? ",1);
    d("",2); 
    d("",3);
}

void dialog_089(void){  
    h("[ Sabrina ]");
                d(" He always seemed to hide ",1);
    d("something. Alice said it was his way, ",2); 
    d("but I always had my suspicions.",3);
}

void dialog_090(void){  
    h("[ Renne ]");
                d("About Alice, do you think ",1);
    d("she was taken to the lighthouse by ",2); 
    d("force?",3);
}

void dialog_091(void){  
    h("[ Sabrina ]");
                d(" No, she liked it there. ",1);
    d("I have a strong suspicion that she ",2); 
    d("went with him without knowing more... ",3);
}

void dialog_092(void){  
    h("[ Renne ]");
                d("Do you think it's a murder",1);
    d("case?",2); 
    d("",3);
}

void dialog_093(void){  
    h("[ Sabrina ]");
                d(" Yes, after the police  ",1);
    d("found the car they used abandoned at",2); 
    d("the ligthouse I felt it was a murder. ",3);
}

void dialog_094(void){  
    h("[ Renne ]");
                d("Wait, Julia told me they",1);
    d("didn't have a car. ",2); 
    d("",3);
}

void dialog_095(void){  
    h("[ Sabrina ]");
                d(" They bought one recently. ",1);
    d("I know because I was at the car sale ",2); 
    d("that day. ",3);
}

void dialog_096(void){  
    h("[ Renne ]");
                d("Where and when this car",1);
    d("sale happen?",2); 
    d("",3);
}

void dialog_097(void){  
    h("[ Sabrina ]");
                d(" It was in the church ",1);
    d("square, about ten days ago.",2); 
    d(" ",3);
}

void dialog_098(void){  
    h("[ Renne ]");
                d("Before you came here to ",1);
    d("investigate the office, you found ",2); 
    d("anything else suspicious?",3);
}

void dialog_099(void){  
    h("[ Sabrina ]");
                d(" Let me see..",1);
    d("",2); 
    d("",3);
}

void dialog_100(void){  
    h("[ Sabrina ]");
                d(" The burned dumpsters.",1);
    d("",2); 
    d("",3);
}

void dialog_101(void){  
    h("[ Sabrina ]");
                d(" Starting a week ago, ",1);
    d("someone begin to set fire to the ",2); 
    d("city's dumpsters.",3);
}

void dialog_102(void){  
    h("[ Renne ]");
                d("That time interval, there",1);
    d("is something there.",2); 
    d("",3);
}

void dialog_103(void){  
    h("[ Sabrina ]");
                d(" Anything else? ",1);
    d(" ",2); 
    d("",3);
}

#endif