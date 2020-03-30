#ifndef model
#define model

void draw_disclamer(void){
    jo_clear_screen();
    set_background("ALERT.TGA", "BG"); 
    jo_set_printf_color_index(JO_COLOR_INDEX_White);
}

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
    d("                             - Julia.",2); 
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
    d("Machado and Alice Zena. I known them",2); 
    d("for almost three years.",3);
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
    d("a perfect couple. I never saw them ",2); 
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
    d("a lighthouse? We are in Minas Gerais,",2); 
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
                d(" I know that's why I'm ",1);
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
    d("sale happen? And what car was it?",2); 
    d("",3);
}

void dialog_097(void){  
    h("[ Sabrina ]");
                d(" It was in the church ",1);
    d("square, about ten days ago. And it",2); 
    d("was a green Golf.",3);
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

void dialog_104(void){
  d_n("Choose your next question",1); 
    d("  Press B to ask about Alice",2); 
    d("  Press C to ask about Julia",3); 
}

void dialog_104_1_01(void){
    h("[ Renne ]");
                d("Tell me more about Alice",1);
    d("how was she, what she liked to do in",2); 
    d("her spare time.. anything.",3);
}

void dialog_104_1_02(void){
    h("[ Sabrina ]");
                d(" Alice? She was lovely.",1);
    d("We often travel together, either ",2); 
    d("to the waterfall or anywhere else.",3);
}

void dialog_104_1_03(void){
    h("[ Renne ]");
                d("You two were very close.. ",1);
    d("I imagine that after she fell in love",2); 
    d("with Cristiano everything changed.",3);
}

void dialog_104_1_04(void){
    h("[ Sabrina ]");
                d(" Yes, I considered that ",1);
    d("to be the break of our friendship.",2); 
    d("",3);
}

void dialog_104_1_05(void){
    h("[ Renne ]");
                d("Hmm. ",1);
    d("",2); 
    d("",3);
}

void dialog_104_1_06(void){
    h("[ Renne ]");
                d("Despite everything you ",1);
    d("still have a feeling for Alice, ",2); 
    d("that's why you want this case.",3);
}

void dialog_104_1_07(void){
    h("[ Sabrina ]");
                d(" ... ",1);
    d("",2); 
    d("",3);
}

void dialog_104_1_08(void){
    h("[ Renne ]");
                d("Without further ado, let's",1);
    d("enter Cristiano's office. ",2); 
    d("",3);
}

void dialog_104_2_01(void){
    h("[ Renne ]");
                d("Tell me more about Julia",1);
    d("how was she, what she liked to do in",2); 
    d("her spare time.. anything.",3);
}

void dialog_104_2_02(void){
    h("[ Sabrina ]");
                d(" Julia? She is a good ",1);
    d("friend, we have worked together for ",2); 
    d("years.",3);
}

void dialog_104_2_03(void){
    h("[ Renne ]");
                d("What about her social ",1);
    d("life?",2); 
    d("",3);
}

void dialog_104_2_04(void){
    h("[ Sabrina ]");
                d(" She is very closed, ",1);
    d("since I met her I have never seen her",2); 
    d("with anyone for more than a month.",3);
}

void dialog_104_2_05(void){
    h("[ Renne ]");
                d("The same old Julia. ",1);
    d("",2); 
    d("",3);
}

void dialog_104_2_06(void){
    h("[ Renne ]");
                d("Do you believe that ",1);
    d("Julia would have hidden anything ",2); 
    d("from my investigation?",3);
}

void dialog_104_2_07(void){
    h("[ Sabrina ]");
                d(" Her social life. From ",1);
    d("what I know of Julia, I assume you ",2); 
    d("two have a past. She probably hid",3);
}

void dialog_104_2_08(void){
    h("[ Sabrina ]");
                d(" information about her ",1);
    d("mental health. ",2); 
    d("",3);
}

void dialog_104_2_09(void){
    h("[ Renne ]");
                d("Hmm. I can't do ",1);
    d("anything about this right now. ",2); 
    d("",3);
}

void dialog_104_2_10(void){
    h("[ Renne ]");
                d("Without further ado, let's",1);
    d("enter Cristiano's office. ",2); 
    d("",3);
}

void dialog_105(void){
    jo_clear_screen();
    set_background("RUA0.TGA", "BG");
    dialog_106(); 
}

void dialog_106(void){
  d_n("Thirty minutes later.",1); 
    d(" ",2); 
    d(" ",3); 
}

void dialog_107(void){
  d_n("You and Sabrina spent thirty minutes ",1); 
    d("searching Cristiano's office.",2); 
    d(" ",3); 
}

void dialog_108(void){
    jo_clear_screen();
    set_background("RUA2.TGA", "BG");
    dialog_106(); 
}

void dialog_109(void){
    h("[ Sabrina ]");
                d(" Damn it. ",1);
    d("",2); 
    d("",3);
}

void dialog_110(void){
    h("[ Sabrina ]");
                d(" There's nothing here. ",1);
    d("",2); 
    d("",3);
}

void dialog_111(void){
    h("[ Renne ]");
                d("This means that the ",1);
    d("reason behind the disappearance ",2); 
    d("is not related work.",3);
}

void dialog_112(void){
    h("[ Sabrina ]");
                d(" Hmm. ",1);
    d("",2); 
    d("",3);
}

void dialog_113(void){
    h("[ Sabrina ]");
                d(" That was a dead end.",1);
    d("",2); 
    d("",3);
}

void dialog_114(void){
    h("[ Renne ]");
                d("... ",1);
    d("",2); 
    d("",3);
}

void dialog_115(void){
    h("[ Renne ]");
                d("Not so much.",1);
    d("",2); 
    d("",3);
}

void dialog_116(void){
    h("[ Sabrina ]");
                d(" Why?",1);
    d("",2); 
    d("",3);
}

void dialog_117(void){
    h("[ Renne ]");
                d("Julia told me that ",1);
    d("Cristiano often came to drink in the ",2); 
    d("front bar of his office.",3);
}

void dialog_118(void){
    h("[ Renne ]");
                d("We can work on the ",1);
    d("hypothesis that Cristiano made his ",2); 
    d("decisions at the bar, not at work. ",3);
}

void dialog_119(void){
    h("[ Sabrina ]");
                d(" Makes sense.",1);
    d("",2); 
    d("",3);
}

void dialog_120(void){
    h("[ Sabrina ]");
                d(" What will you do?",1);
    d("",2); 
    d("",3);
}

void dialog_121(void){
    h("[ Renne ]");
                d("Continue to investigate..  ",1);
    d("You can continue to investigate on  ",2); 
    d("your own if you want. ",3);
}

void dialog_122(void){
    h("[ Sabrina ]");
                d(" OK good luck.",1);
    d("",2); 
    d("",3);
}

void dialog_123(void){
    h("[ Renne ]");
                d("Same to you.  ",1);
    d("",2); 
    d("",3);
}







void dialog_124(void){
    jo_clear_screen();
    set_background("IGREJA.TGA", "BG");
    dialog_106(); 
}

void dialog_125(void){
  d_n("Sao Bento do Oeste",1); 
    d("Church square",2); 
    d("Minutes later",3); 
}

void dialog_126(void){
    jo_clear_screen();
    set_background("IGREJA1.TGA", "BG");
    dialog_127(); 
}

void dialog_127(void){
    h("[ Carlos ]");
                d("My job here is done.",1);
    d(" ",2); 
    d(" ",3);
}

void dialog_128(void){
    jo_clear_screen();
    set_background("IGREJA2.TGA", "BG");
    dialog_129(); 
}

void dialog_129(void){
    h("[ Renne ]");
                d("Hey... My name is Renne",1);
    d("I am running an investigation on a",2); 
    d("disappearance in this city.",3);
}

void dialog_130(void){
    h("[ Renne ]");
                d("Can I talk to you for a ",1);
    d("second?",2); 
    d("",3);
}

void dialog_131(void){
    h("[ Carlos ]");
                d("Of course. Ask me ",1);
    d("anything. ",2); 
    d(" ",3);
}

void dialog_132(void){
    h("[ Renne ]");
                d("What is your name, age  ",1);
    d("and occupation?",2); 
    d("",3);
}

void dialog_133(void){
    h("[ Carlos ]");
                d("My name Carlos, I am 18 ",1);
    d("years old and I work as a delivery ",2); 
    d("man in the city.",3);
}

void dialog_134(void){
    h("[ Renne ]");
                d("Are the names Cristiano ",1);
    d("Machado and Alice Zena familiar to ",2); 
    d("you?",3);
}

void dialog_135(void){
    h("[ Carlos ]");
                d("I don't think so, the   ",1);
    d("only Cristiano I know is Tulio.. ",2); 
    d("",3);
}

void dialog_136(void){
    h("[ Renne ]");
                d("I don't know if we're  ",1);
    d("talking about the same person.",2); 
    d("",3);
}

void dialog_137(void){
    h("[ Carlos ]");
                d("He's a dentist, he has ",1);
    d("a clinic at the entrance to the ",2); 
    d("city.",3);
}

void dialog_138(void){
    h("[ Renne ]");
                d("Unfortunately it's not ",1);
    d("the man I'm looking for.",2); 
    d("",3);
}

void dialog_139(void){
    h("[ Carlos ]");
                d("Sorry.",1);
    d("",2); 
    d("",3);
}

void dialog_140(void){
    h("[ Renne ]");
                d("There is something else",1);
    d("that you can help.",2); 
    d("",3);
}

void dialog_141(void){
    h("[ Renne ]");
                d("In this square, about ",1);
    d("ten days ago a car sale took place.",2); 
    d("",3);
}

void dialog_142(void){
    h("[ Carlos ]");
                d("Yes, the monthly car ",1);
    d("sale.",2); 
    d("",3);
}

void dialog_143(void){
    h("[ Renne ]");
                d("Monthly!? ",1);
    d("",2); 
    d("",3);
}

void dialog_144(void){
    h("[ Carlos ]");
                d("Yes, every 15th day people ",1);
    d("with businesses around this square ",2); 
    d("organize it.",3);
}

void dialog_145(void){
    h("[ Renne ]");
                d("Good... good...",1);
    d("",2); 
    d("",3);
}

void dialog_146(void){
    h("[ Renne ]");
                d("At the last car sale a  ",1);
    d("man named Cristiano bought a green ",2); 
    d("Golf.",3);
}

void dialog_147(void){
    h("[ Renne ]");
                d("I would like more   ",1);
    d("information about.",2); 
    d("",3);
}

void dialog_148(void){
    h("[ Carlos ]");
                d("I remember that.",1);
    d("",2); 
    d("",3);
}

void dialog_149(void){
    h("[ Renne ]");
                d("Tell me more about it.",1);
    d("",2); 
    d("",3);
}

void dialog_150(void){
    h("[ Carlos ]");
                d("It was a disputed sale, ",1);
    d("the man who won... what was his ",2); 
    d("name...",3);
}

void dialog_151(void){
    h("[ Renne ]");
                d("Cristiano.",1);
    d("",2); 
    d("",3);
}

void dialog_152(void){
    h("[ Carlos ]");
                d("Yes. He was very ",1);
    d("interested in the vehicle.",2); 
    d("",3);
}

void dialog_153(void){
    h("[ Renne ]");
                d("Do you remember if he  ",1);
    d("was with someone?",2); 
    d("",3);
}

void dialog_154(void){
    h("[ Carlos ]");
                d("Hmm.",1);
    d("",2); 
    d("",3);
}

void dialog_155(void){
    h("[ Carlos ]");
                d("He was, there was a  ",1);
    d("young man wearing a scarf with him.",2); 
    d("",3);
}

void dialog_156(void){
    h("[ Renne ]");
                d("Wasn't there a woman with ",1);
    d("him?",2); 
    d("",3);
}

void dialog_157(void){
    h("[ Carlos ]");
                d("No, it was just him and ",1);
    d("that man. ",2); 
    d("",3);
}

void dialog_158(void){
    h("[ Renne ]");
                d("Do you think there was ",1);
    d("any bond between the two? Friends, ",2); 
    d("co-workers, family ...",3);
}

void dialog_159(void){
    h("[ Carlos ]");
                d("I don't think so, they ",1);
    d("seemed distant. ",2); 
    d("",3);
}

void dialog_160(void){
    h("[ Renne ]");
                d("I get it.",1);
    d("",2); 
    d("",3);
}

void dialog_161(void){
    h("[ Carlos ]");
                d("Do you excuse me, I've ",1);
    d("a medical exam scheduled at the ",2); 
    d("club today. I don't want to miss.",3);
}

void dialog_162(void){
    h("[ Renne ]");
                d("Okay, you have been of ",1);
    d("great help.",2); 
    d("",3);
}

void dialog_163(void){
    h("[ Carlos ]");
                d("You're welcome.",1);
    d("",2); 
    d("",3);
}

void dialog_164(void){
    jo_clear_screen();
    set_background("IGREJA.TGA", "BG");
    dialog_165(); 
}

void dialog_165(void){
  d_n("Thirty minutes later.",1); 
    d(" ",2); 
    d(" ",3); 
}

void dialog_166(void){
  d_n("You approached a girl who was ",1); 
    d("in the square. ",2); 
    d(" ",3); 
}

void dialog_167(void){
    jo_clear_screen();
    set_background("IGREJA3.TGA", "BG");
    dialog_168(); 
}

void dialog_168(void){
    h("[ Renne ]");
                d("My name is Renne, I am",1);
    d("running an investigation on the",2); 
    d("disappearance in this city.",3);
}

void dialog_169(void){
    h("[ Renne ]");
                d("Can I ask you a few ",1);
    d("questions? It will take a few ",2); 
    d("minutes.",3);
}

void dialog_170(void){
    h("[ Maria ]");
                d("Of course, take your time.",1);
    d("",2); 
    d("",3);
}

void dialog_171(void){
    h("[ Renne ]");
                d("Perfect, first I would ",1);
    d("like to know your name, your age and ",2); 
    d("your occupation.",3);
}

void dialog_172(void){
    h("[ Maria ]");
                d("My name is Maria Vieira, ",1);
    d("I'm 18 years old and I'm a student. I ",2); 
    d("don't have a job.",3);
}

void dialog_173(void){
    h("[ Renne ]");
                d("Right... right...",1);
    d("",2); 
    d("",3);
}

void dialog_174(void){
    h("[ Renne ]");
                d("Here in this square ",1);
    d("there is a car sale.",2); 
    d("",3);
}

void dialog_175(void){
    h("[ Maria ]");
                d("The monthly car sale.",1);
    d(" ",2); 
    d("",3);
}

void dialog_176(void){
    h("[ Renne ]");
                d("Precisely.",1);
    d(" ",2); 
    d("",3);
}

void dialog_177(void){
    h("[ Renne ]");
                d("Were you at the last? I ",1);
    d("have some questions about her. ",2); 
    d("",3);
}

void dialog_178(void){
    h("[ Maria ]");
    
                d("I didn't go to them, I",1);
    d("don't have the money to buy a car. ",2); 
    d("",3);
}

void dialog_179(void){
    h("[ Renne ]");
                d("It makes sense, okay, I ",1);
    d("have another question.",2); 
    d("",3);
}

void dialog_180(void){
    h("[ Renne ]");
                d("Are the names Cristiano ",1);
    d("Machado and Alice Zena familiar to ",2); 
    d("you?",3);
}

void dialog_181(void){
    h("[ Maria ]");
                d("I know these two, they ",1);
    d("are famous in the city, Cristiano is ",2); 
    d("the most famous lawyer in the city.",3);
}

void dialog_182(void){
    h("[ Maria ]");
                d("And Alice is a teacher, ",1);
    d("so all students know her, I think ",2); 
    d("everyone knows these two.",3);
}

void dialog_183(void){
    h("[ Renne ]");
                d("I see. These two  ",1);
    d("disappeared a week ago in the city, I",2); 
    d("am investigating their disappearance.",3);
}

void dialog_184(void){
    h("[ Maria ]");
                d("Oh my god... I didn't ",1);
    d("know that... I want to help you ",2); 
    d("with whatever you needg.",3);
}

void dialog_185(void){
    h("[ Renne ]");
                d("Thanks, about that do  ",1);
    d("you remember any of the two doing ",2); 
    d("something in the city? ",3);
}

void dialog_186(void){
    h("[ Maria ]");
                d("Let me see... I remember ",1);
    d("Alice going to work normally, the  ",2); 
    d("last time I saw her.",3);
}

void dialog_187(void){
    h("[ Maria ]");
                d("About Cristiano.. I ",1);
    d("don't remember seeing him in ",2); 
    d("the last few days.. ",3);
}

void dialog_188(void){
    h("[ Renne ]");
                d("About that... ",1);
    d("",2); 
    d("",3);
}

void dialog_189(void){
    h("[ Maria ]");
                d("But just to make it ",1);
    d("clear, this is normal, he did ",2); 
    d("not walk around the city much.",3);
}

void dialog_190(void){  
    h("[ Maria ]");
                d("Anything else? ",1);
    d(" ",2); 
    d("",3);
}

void dialog_191(void){
  d_n("Choose your next question",1); 
    d("  Press B to ask about Sabrina",2); 
    d("  Press C to ask about Carlos",3); 
}





void dialog_191_1_01(void){
    h("[ Renne ]");
                d("Minutes ago I was",1);
    d("investigating with a teacher from ",2); 
    d("the city, Sabrina Freire.",3);
}

void dialog_191_1_02(void){
    h("[ Maria ]");
                d("I know her.",1);
    d(" ",2); 
    d("",3);
}

void dialog_191_1_03(void){
    h("[ Renne ]");
                d("Do you have information ",1);
    d("about her? So I can confirm her  ",2); 
    d("testimony and build up a case.",3);
}

void dialog_191_1_04(void){
    h("[ Maria ]");
                d("Let me see, Sabrina is a",1);
    d("little stubborn, she is open-minded ",2); 
    d("and understands everyone's problem. ",3);
}

void dialog_191_1_05(void){
    h("[ Maria ]");
                d("But once she puts something",1);
    d("in mind she doesn't give up.",2); 
    d(" ",3);
}

void dialog_191_1_06(void){
    h("[ Renne ]");
                d("This is interesting.",1);
    d("",2); 
    d("",3);
}

void dialog_191_1_07(void){
    h("[ Renne ]");
                d("Do you believe that ",1);
    d("Sabrina would have hidden anything ",2); 
    d("from my investigation?",3);
}

void dialog_191_1_08(void){
    h("[ Maria ]");
                d("Absolutely not, she cares ",1);
    d("about Alice more than anyone.",2); 
    d("",3);
}

void dialog_191_1_09(void){
    h("[ Renne ]");
                d("Why do you say that?",1);
    d("",2); 
    d("",3);
}

void dialog_191_1_10(void){
    h("[ Maria ]");
                d("These two have been ",1);
    d("friends since childhood. The two ",2); 
    d("grew up in this city.",3);
}

void dialog_191_1_11(void){
    h("[ Renne ]");
                d("I didn't know that, so it",1);
    d("really was the break of their",2); 
    d("friendship.",3);
}

void dialog_191_1_12(void){
    h("[ Maria ]");
                d("It was something that",1);
    d("Sabrina told me. ",2); 
    d("",3);
}

void dialog_191_1_13(void){
    h("[ Renne ]");
                d("About her not hiding, do ",1);
    d("you really think she wouldn't lie?",2); 
    d("",3);
}

void dialog_191_1_14(void){
    h("[ Maria ]");
                d("Yes I think, she's  like  ",1);
    d("an open book. She always spoke during  ",2); 
    d("classes about her life.",3);
}

void dialog_191_1_15(void){
    h("[ Renne ]");
                d("I see. ",1);
    d(" ",2); 
    d("",3);
}





void dialog_191_2_01(void){
    h("[ Renne ]");
                d("Minutes ago, here in the",1);
    d("square I interrogated a boy named ",2); 
    d("Carlos...",3);
}

void dialog_191_2_02(void){  
    h("[ Maria ]");
                d("What about him?",1);
    d(" ",2); 
    d("",3);
}

void dialog_191_2_03(void){
    h("[ Renne ]");
                d("Do you have information ",1);
    d("about him? So I can confirm his  ",2); 
    d("testimony and build up a case.",3);
}

void dialog_191_2_04(void){  
    h("[ Maria ]");
                d("Unfortunately I don't",1);
    d("know this Carlos you mentioned, when ",2); 
    d("I arrived you were writing alone.",3);
}

void dialog_191_2_05(void){
    h("[ Renne ]");
                d("It's all right... ",1);
    d("",2); 
    d("",3);
}

void dialog_191_2_06(void){
    h("[ Renne ]");
                d("And what about you? In ",1);
    d("the past ten days have you seen ",2); 
    d("anything strange?",3);
}

void dialog_191_2_07(void){  
    h("[ Maria ]");
                d("Let me see...",1);
    d(" ",2); 
    d("",3);
}

void dialog_191_2_08(void){  
    h("[ Maria ]");
                d("I remembered something... ",1);
    d("a week ago I saw two men fighting on ",2); 
    d("the street.",3);
}

void dialog_191_2_09(void){  
    h("[ Maria ]");
                d("They were shouting at ",1);
    d("each other in the middle of the  ",2); 
    d("night.",3);
}

void dialog_191_2_10(void){
    h("[ Renne ]");
                d("This is probably a dead ",1);
    d("end...  ",2); 
    d("",3);
}

void dialog_191_2_11(void){
    h("[ Renne ]");
                d("Do you remember ",1);
    d("something that was shouted? ",2); 
    d("",3);
}

void dialog_191_2_12(void){  
    h("[ Maria ]");
                d("I remember them saying ",1);
    d("something about dealing with loose",2); 
    d("ends.",3);
}

void dialog_191_2_13(void){
    h("[ Renne ]");
                d("Interesting. ",1);
    d(" ",2); 
    d("",3);
}





void dialog_192(void){
    h("[ Renne ]");
                d("Maria if you're not busy ",1);
    d("I have a few more questions for you. ",2); 
    d("",3);
}

void dialog_193(void){  
    h("[ Maria ]");
                d("Don't worry. I am not.",1);
    d("",2); 
    d("",3);
}

void dialog_194(void){
    h("[ Renne ]");
                d("About Cristiano, you said ",1);
    d("he was popular in the city, why do  ",2); 
    d("you say that?",3);
}

void dialog_195(void){  
    h("[ Maria ]");
                d("He being a famous lawyer",1);
    d("in town, he had a lot of clients, so ",2); 
    d("there was always someone who know him.",3);
}

void dialog_196(void){
    h("[ Renne ]");
                d("So he was good at what he did.",1);
    d("  ",2); 
    d("",3);
}

void dialog_197(void){  
    h("[ Maria ]");
                d("Yes, according to his",1);
    d("customers...",2); 
    d("",3);
}

void dialog_198(void){
    h("[ Renne ]");
                d("Do you know anything ",1);
    d("about his work in the past ten days?",2); 
    d("",3);
}

void dialog_199(void){  
    h("[ Maria ]");
                d("No I'm sorry.",1);
    d("",2); 
    d("",3);
}

void dialog_200(void){
    h("[ Renne ]");
                d("It's all right.",1);
    d("",2); 
    d("",3);
}

void dialog_201(void){  
    h("[ Renne ]");
                d("I had other questions ",1);
    d("about him but I think that as you ",2); 
    d("don't know, I don't add much.",3);
}

void dialog_202(void){  
    h("[ Maria ]");
                d("...",1);
    d("",2); 
    d("",3);
}

void dialog_203(void){  
    h("[ Renne ]");
                d("Before I forget, I wanted",1);
    d(" to go to the city lighthouse, which",2); 
    d(" way is it?",3);
}

void dialog_204(void){  
    h("[ Maria ]");
                d("Keeps going towards the ",1);
    d("border of São Paulo, and them turn ",2); 
    d("left. It is impossible to get lost.",3);
}

void dialog_205(void){
    h("[ Renne ]");
                d("Got it. Thanks for ",1);
    d("everything Maria.",2); 
    d("",3);
}

void dialog_206(void){  
    h("[ Maria ]");
                d("It was nothing.",1);
    d("",2); 
    d("",3);
}

void dialog_207(void){
    h("[ Renne ]");
                d("Is there anything I can ",1);
    d("do to make up for your lost time?",2); 
    d("",3);
}

void dialog_208(void){  
    h("[ Maria ]");
                d("Don't worry, I didn't ",1);
    d("have anything important to do. If ",2); 
    d("only the club was open...",3);
}

void dialog_209(void){
    h("[ Maria ]");
                d("Anyway, have a nice day.",1);
    d("",2); 
    d("",3);
}

void dialog_210(void){
    h("[ Renne ]");
                d("You too.",1);
    d("",2); 
    d("",3);
}

void dialog_211(void){
    jo_clear_screen();
    set_background("FAROL.TGA", "BG");
    dialog_212(); 
}

void dialog_212(void){
  d_n("Sao Bento do Oeste",1); 
    d("City Lighthouse",2); 
    d("Minutes later",3); 
}

void dialog_213(void){
    jo_clear_screen();
    set_background("FAROL1.TGA", "BG");
    dialog_214(); 
}

void dialog_214(void){
    h("[ Lucas ]");
                d("Finally.",1);
    d("",2); 
    d("",3);
}

void dialog_215(void){
    h("[ Lucas ]");
                d("The city lighthouse.",1);
    d("",2); 
    d("",3);
}

void dialog_216(void){
    h("[ Renne ]");
                d("Hey! You.",1);
    d("",2); 
    d("",3);
}

void dialog_217(void){
    jo_clear_screen();
    set_background("FAROL2.TGA", "BG");
    dialog_214(); 
}

void dialog_218(void){
    h("[ Renne ]");
                d("Stop right there.",1);
    d("",2); 
    d("",3);
}

void dialog_219(void){
    h("[ Lucas ]");
                d("Okay..",1);
    d("",2); 
    d("",3);
}

void dialog_220(void){
    h("[ Renne ]");
                d("Wait a second.",1);
    d("",2); 
    d("",3);
}

void dialog_221(void){
    h("[ Lucas ]");
                d("It's all right.",1);
    d("",2); 
    d("",3);
}

void dialog_222(void){
    h("[ Renne ]");
                d("You are a suspect in the ",1);
    d("disappearance of Cristiano Machado ",2); 
    d("and Alice Zena.",3);
}

void dialog_223(void){
    h("[ Lucas ]");
                d("Me?!",1);
    d("",2); 
    d("",3);
}

void dialog_224(void){
    h("[ Renne ]");
                d("Yes, I need your name, ",1);
    d("age and occupation. ",2); 
    d("",3);
}

void dialog_225(void){
    h("[ Lucas ]");
                d("My name is Lucas Matos, I ",1);
    d("am 19 years old and I help out in the ",2); 
    d("city hospital.",3);
}

void dialog_226(void){
    h("[ Renne ]");
                d("Where were you ten days ",1);
    d("ago? ",2); 
    d("",3);
}

void dialog_227(void){
    h("[ Lucas ]");
                d("Ten days ago... it was a ",1);
    d("Saturday, so I was working at the ",2); 
    d("hospital.",3);
}

void dialog_228(void){
    h("[ Renne ]");
                d("What can you tell me ",1);
    d("about the city's monthly car sale?",2); 
    d("",3);
}

void dialog_229(void){
    h("[ Lucas ]");
                d("I don't know what you ",1);
    d("want me to answer, I don't know ",2); 
    d("much about.",3);
}

void dialog_230(void){
    h("[ Lucas ]");
                d("I don't have the money to ",1);
    d("buy a car so I'm not going.",2); 
    d("",3);
}

void dialog_231(void){
    h("[ Renne ]");
                d("Is the name Cristiano ",1);
    d("Machado similar to you?",2); 
    d("",3);
}

void dialog_232(void){
    h("[ Lucas ]");
                d("Yes, he is the most ",1);
    d("famous lawyer in town everyone ",2); 
    d("knows him.",3);
}

void dialog_233(void){
    h("[ Renne ]");
                d("I have information that a ",1);
    d("young man of your age, wearing a scarf, ",2); 
    d("was with Cristiano at this car sale.",3);
}

void dialog_234(void){
    h("[ Lucas ]");
                d("It wasn't me, I was not",1);
    d("close to Cristiano.",2); 
    d("",3);
}

void dialog_235(void){
    h("[ Lucas ]");
                d("A young man close to ",1);
    d("Cristiano... it's probably his ",2); 
    d("brother.",3);
}

void dialog_236(void){
    h("[ Renne ]");
                d("Does Cristiano have a",1);
    d("brother???",2); 
    d("",3);
}

void dialog_237(void){
    h("[ Lucas ]");
                d("Yes, he has my age. ",1);
    d("",2); 
    d("",3);
}

void dialog_238(void){
    h("[ Renne ]");
                d("Why Julia hide this ",1);
    d("information from me.",2); 
    d("",3);
}

void dialog_239(void){
    h("[ Lucas ]");
                d("Few people know about his ",1);
    d("brother. ",2); 
    d("",3);
}

void dialog_240(void){
    h("[ Lucas ]");
                d("It would be dangerous for ",1);
    d("a famous criminal lawyer to have a ",2); 
    d("known relative in the city.",3);
}

void dialog_241(void){
    h("[ Renne ]");
                d("Uhm.",1);
    d("",2); 
    d("",3);
}

void dialog_242(void){
    h("[ Renne ]");
                d("Makes sense.",1);
    d("",2); 
    d("",3);
}

void dialog_243(void){
    h("[ Renne ]");
                d("Answer me some more ",1);
    d("questions...",2); 
    d("",3);
}

void dialog_244(void){
    h("[ Lucas ]");
                d("Sure.",1);
    d("",2); 
    d("",3);
}

void dialog_245(void){
    h("[ Renne ]");
                d("Here, the Lightouse, is ",1);
    d("the last place that Cristiano and ",2); 
    d("Alice were seen, why you came here?",3);
}

void dialog_246(void){
    h("[ Lucas ]");
                d("I often come here to rest.",1);
    d("",2); 
    d("",3);
}

void dialog_247(void){
    h("[ Renne ]");
                d("Got it.",1);
    d("",2); 
    d("",3);
}

void dialog_248(void){
  d_n("Choose your next question",1); 
    d("  Press B to ask about Maria",2); 
    d("  Press C to ask about Cris's brother",3); 
}


void dialog_248_1_01(void){
    h("[ Renne ]");
                d("Minutes ago, at the",1);
    d("square I interrogated a girl named ",2); 
    d("Maria...",3);
}

void dialog_248_1_02(void){
    h("[ Lucas ]");
                d("Maria? Why did you bring ",1);
    d("that name?",2); 
    d("",3);
}

void dialog_248_1_03(void){
    h("[ Renne ]");
                d("I just said... I ",1);
    d("interrogated her in the square ",2); 
    d("minutes ago.",3);
}

void dialog_248_1_04(void){
    h("[ Lucas ]");
                d("Tss. ",1);
    d("",2); 
    d("",3);
}

void dialog_248_1_05(void){
    h("[ Renne ]");
                d("Why are you so defensive?",1);
    d("",2); 
    d("",3);
}

void dialog_248_1_06(void){
    h("[ Lucas ]");
                d("I know Maria Vieira, she  ",1);
    d("is my ex-girlfriend.",2); 
    d("",3);
}

void dialog_248_1_07(void){
    h("[ Renne ]");
                d("I see, you are ",1);
    d("uncomfortable, you two must have had ",2); 
    d("a bad break-up.",3);
}

void dialog_248_1_08(void){
    h("[ Lucas ]");
                d("It is not about that.",1);
    d("",2); 
    d("",3);
}

void dialog_248_1_09(void){
    h("[ Lucas ]");
                d("I made a lot of mistakes ",1);
    d("in this life, especially in the way I ",2); 
    d("treated Maria.",3);
}

void dialog_248_1_10(void){
    h("[ Renne ]");
                d("It is okay, I made ",1);
    d("mistakes in past relationships too.",2); 
    d("",3);
}

void dialog_248_1_11(void){
    h("[ Renne ]");
                d("It is by recognizing our ",1);
    d("mistakes and learning from them that ",2); 
    d("we can become better persons.",3);
}

void dialog_248_1_12(void){
    h("[ Lucas ]");
                d("Make sense, sorry about ",1);
    d("that, about before, what you asked",2); 
    d("about  Maria?",3);
}

void dialog_248_1_13(void){
    h("[ Renne ]");
                d("Do you believe that ",1);
    d("Maria would have hidden anything ",2); 
    d("from my investigation?",3);
}

void dialog_248_1_14(void){
    h("[ Lucas ]");
                d("Maria? Impossible, she ",1);
    d("always wants to help others, no ",2); 
    d("matter the cost.",3);
}

void dialog_248_1_15(void){
    h("[ Lucas ]");
                d("This is good to know.",1);
    d("",2); 
    d("",3);
}



void dialog_248_2_01(void){
    h("[ Renne ]");
                d("Tell me more about this ",1);
    d("brother of Cristiano, I want to know ",2); 
    d("everything you know about him.",3);
}

void dialog_248_2_02(void){
    h("[ Lucas ]");
                d("I don't remember his ",1);
    d("first name, as far as I remember he ",2); 
    d("was called Silva Macahado.",3);
}

void dialog_248_2_03(void){
    h("[ Renne ]");
                d("How was his relationship ",1);
    d("with his brother?",2); 
    d("",3);
}

void dialog_248_2_04(void){
    h("[ Lucas ]");
                d("It was very complicated, ",1);
    d("they were always fighting, but not in ",2); 
    d("public.",3);
}

void dialog_248_2_05(void){
    h("[ Renne ]");
                d("I see. What about his  ",1);
    d("body... was he strong... tall... ?",2); 
    d("",3);
}

void dialog_248_2_06(void){
    h("[ Lucas ]");
                d("He was normal like me. I ",1);
    d("remember that he had black hair and a ",2); 
    d("scar on his neck.",3);
}

void dialog_248_2_07(void){
    h("[ Renne ]");
                d("Copy. Do you have any ",1);
    d("other information about him that ",2); 
    d("you want to tell me about?",3);
}

void dialog_248_2_08(void){
    h("[ Lucas ]");
                d("I believe that even if he",1);
    d("is not involved, Silva Macahdo will  ",2); 
    d("know everything about what happened.",3);
}

void dialog_248_2_09(void){
    h("[ Renne ]");
                d("Why you say that?",1);
    d("",2); 
    d("",3);
}

void dialog_248_2_10(void){
    h("[ Lucas ]");
                d("He was well informed, I",1);
    d("remember seeing Cristiano asking him",2); 
    d("information about the city many times",3);
}

void dialog_248_2_11(void){
    h("[ Renne ]");
                d("Noted.",1);
    d("",2); 
    d("",3);
}


void dialog_249(void){
    h("[ Renne ]");
                d("You were of great help ",1);
    d("Lucas. Thanks for everything.",2); 
    d("",3);
}

void dialog_250(void){
    h("[ Lucas ]");
                d("It was nothing.",1);
    d("",2); 
    d("",3);
}

void dialog_251(void){
    h("[ Renne ]");
                d("I will continue my ",1);
    d("investigation from here, have a ",2); 
    d("great day.",3);
}

void dialog_252(void){
    h("[ Lucas ]");
                d("You too.",1);
    d("",2); 
    d("",3);
}

void dialog_253(void){
    jo_clear_screen();
    set_background("FAROL.TGA", "BG");
    dialog_254(); 
}

void dialog_254(void){
  d_n("Sao Bento do Oeste",1); 
    d("City Lighthouse",2); 
    d("Minutes later",3); 
}

void dialog_255(void){
    jo_clear_screen();
    set_background("FAROL3.TGA", "BG");
    dialog_256(); 
}

void dialog_256(void){
    h("[ Renne ]");
                d("You were of great help ",1);
    d("Lucas. Thanks for everything.",2); 
    d("",3);
}


#endif
