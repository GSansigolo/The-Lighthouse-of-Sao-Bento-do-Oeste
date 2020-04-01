#ifndef control
#define control

//dialog pointer
static int start_menu = 1;
static int choice_pause = 0;
static int d_pointer = 999;

//narrative variables
static int knows_about_sabrinas_breakup = 0;
static int knows_about_julias_mental_health = 0;
static int knows_about_sabrina_friendship = 0;
static int knows_about_the_arguing = 0;
static int knows_about_the_brother = 0;

//main controller function
void controller(){
    
    //debugger
    //jo_set_printf_color_index(JO_COLOR_INDEX_White);
    //jo_printf(1, 1, "%d", d_pointer);

    //main menu
    if (jo_is_pad1_key_down(JO_KEY_START) && start_menu == 1){
        start_menu = 0;
        jo_clear_screen();
        d_pointer = 271;
        start();
    } 

    //pointer motion trigger
    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0){
        jo_clear_screen();
        //jo_printf(1, 1, "%d", d_pointer);
        d_pointer++;
    } 
    
    //pointer motion with background
    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 8){
        jo_clear_screen();
        dialog_008();
        d_pointer = 9;
    } 
    
    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 11){
        jo_clear_screen();
        dialog_011();
        d_pointer = 12;
    } 

    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 14){
        jo_clear_screen();
        dialog_014();
        d_pointer = 15;
    } 

    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 67){
        jo_clear_screen();
        dialog_067();
        d_pointer = 68;
    } 
    
    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 69){
        jo_clear_screen();
        dialog_069();
        d_pointer = 70;
    } 
    
    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 74){
        jo_clear_screen();
        dialog_074();
        d_pointer = 75;
    } 

    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 108){
        jo_clear_screen();
        dialog_108();
        d_pointer = 109;
    } 

    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 124){
        jo_clear_screen();
        dialog_124();
        d_pointer = 125;
    } 

    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 126){
        jo_clear_screen();
        dialog_126();
        d_pointer = 127;
    } 

    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 128){
        jo_clear_screen();
        dialog_128();
        d_pointer = 129;
    } 

    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 164){
        jo_clear_screen();
        dialog_164();
        d_pointer = 165;
    } 

    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 167){
        jo_clear_screen();
        dialog_167();
        d_pointer = 168;
    } 
    
    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 211){
        jo_clear_screen();
        dialog_211();
        d_pointer = 212;
    } 

    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 213){
        jo_clear_screen();
        dialog_213();
        d_pointer = 214;
    } 
    
    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 217){
        jo_clear_screen();
        dialog_217();
        d_pointer = 218;
    } 
    
    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 253){
        jo_clear_screen();
        dialog_253();
        d_pointer = 254;
    } 

    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 255){
        jo_clear_screen();
        dialog_255();
        d_pointer = 256;
    } 

    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 271){
        jo_clear_screen();
        dialog_271();
        d_pointer = 272;
    } 

   if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 273){
        jo_clear_screen();
        dialog_273();
        d_pointer = 274;
    } 

   if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 281){
        jo_clear_screen();
        dialog_281();
        d_pointer = 282;
    } 

   if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 283){
        jo_clear_screen();
        dialog_283();
        d_pointer = 284;
    } 

   if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 287){
        jo_clear_screen();
        dialog_287();
        d_pointer = 288;
    } 

   if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 289){
        jo_clear_screen();
        dialog_289();
        d_pointer = 290;
    } 

    if (jo_is_pad1_key_down(JO_KEY_B) && d_pointer == 104 && choice_pause == 1){
        jo_printf(1, 1, "%d", d_pointer);
        d_pointer = 104101;
        choice_pause = 0;
        jo_clear_screen();
    } 

    if (jo_is_pad1_key_down(JO_KEY_C) && d_pointer == 104 && choice_pause == 1){
        jo_printf(1, 1, "%d", d_pointer);
        d_pointer = 104201;
        choice_pause = 0;
        jo_clear_screen();
    } 

    if (jo_is_pad1_key_down(JO_KEY_B) && d_pointer == 191 && choice_pause == 1){
        jo_printf(1, 1, "%d", d_pointer);
        d_pointer = 191101;
        choice_pause = 0;
        jo_clear_screen();
    } 

    if (jo_is_pad1_key_down(JO_KEY_C) && d_pointer == 191 && choice_pause == 1){
        jo_printf(1, 1, "%d", d_pointer);
        d_pointer = 191201;
        choice_pause = 0;
        jo_clear_screen();
    } 

    if (jo_is_pad1_key_down(JO_KEY_B) && d_pointer == 248 && choice_pause == 1){
        jo_printf(1, 1, "%d", d_pointer);
        d_pointer = 248101;
        choice_pause = 0;
        jo_clear_screen();
    } 

    if (jo_is_pad1_key_down(JO_KEY_C) && d_pointer == 248 && choice_pause == 1){
        jo_printf(1, 1, "%d", d_pointer);
        d_pointer = 248201;
        choice_pause = 0;
        knows_about_the_brother = 1;
        jo_clear_screen();
    } 

    if (jo_is_pad1_key_down(JO_KEY_B) && d_pointer == 270 && choice_pause == 1){
        jo_printf(1, 1, "%d", d_pointer);
        d_pointer = 270101;
        choice_pause = 0;
        jo_clear_screen();
    } 

    if (jo_is_pad1_key_down(JO_KEY_C) && d_pointer == 270 && choice_pause == 1){
        jo_printf(1, 1, "%d", d_pointer);
        d_pointer = 270201;
        choice_pause = 0;
        knows_about_the_brother = 1;
        jo_clear_screen();
    } 

    if (jo_is_pad1_key_down(JO_KEY_B) && d_pointer == 301 && choice_pause == 1){
        jo_printf(1, 1, "%d", d_pointer);
        d_pointer = 301101;
        choice_pause = 0;
        jo_clear_screen();
    } 

    if (jo_is_pad1_key_down(JO_KEY_C) && d_pointer == 301 && choice_pause == 1){
        jo_printf(1, 1, "%d", d_pointer);
        d_pointer = 301201;
        choice_pause = 0;
        jo_clear_screen();
    } 

    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 104109){
        jo_clear_screen();
        dialog_105();
        knows_about_sabrinas_breakup = 1;
        d_pointer = 106;
    } 

    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 104211){
        jo_clear_screen();
        dialog_105();
        knows_about_julias_mental_health = 1;
        d_pointer = 106;
    } 

    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 191115){
        jo_clear_screen();
        dialog_192();
        knows_about_sabrina_friendship = 1;
        d_pointer = 192;
    } 
    
    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 191213){
        jo_clear_screen();
        dialog_192();
        knows_about_the_arguing = 1;
        d_pointer = 192;
    } 

    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 248115){
        jo_clear_screen();
        dialog_249();
        d_pointer = 249;
    } 
    
    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 248211){
        jo_clear_screen();
        dialog_249();
        d_pointer = 249;
    } 

    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 270106){
        jo_clear_screen();
        dialog_271();
        d_pointer = 272;
    } 
    
    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 270204){
        jo_clear_screen();
        draw_intro();
        start_menu = 1;
    } 
    
    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 301102){
        jo_clear_screen();
        dialog_302();
        d_pointer = 302;
    } 

    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 301204){
        jo_clear_screen();
        draw_intro();
        start_menu = 1;
    } 

    //pointers jump
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



    if (d_pointer == 13)
        dialog_013();
    
    if (d_pointer == 14)
        dialog_014();



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
                      
    if (d_pointer == 54)
        dialog_054(); 

    if (d_pointer == 55)
        dialog_055();  

    if (d_pointer == 56)
        dialog_056(); 

    if (d_pointer == 57)
        dialog_057(); 

    if (d_pointer == 58)
        dialog_058();  

    if (d_pointer == 59)
        dialog_059(); 

    if (d_pointer == 60)
        dialog_060(); 

    if (d_pointer == 61)
        dialog_061(); 

    if (d_pointer == 62)
        dialog_062();  

    if (d_pointer == 63)
        dialog_063();  
                      
    if (d_pointer == 64)
        dialog_064(); 

    if (d_pointer == 65)
        dialog_065();  

    if (d_pointer == 66)
        dialog_066(); 



    if (d_pointer == 68)
        dialog_068(); 

    if (d_pointer == 69)
        dialog_069(); 
 

 
    if (d_pointer == 71)
        dialog_071(); 
 
    if (d_pointer == 72)
        dialog_072(); 

    if (d_pointer == 73)
        dialog_073(); 

    if (d_pointer == 74)
        dialog_074(); 



    if (d_pointer == 76)
        dialog_076(); 

    if (d_pointer == 77)
        dialog_077(); 

    if (d_pointer == 78)
        dialog_078();  

    if (d_pointer == 79)
        dialog_079(); 

    if (d_pointer == 80)
        dialog_080();

    if (d_pointer == 81)
        dialog_081(); 

    if (d_pointer == 82)
        dialog_082();  

    if (d_pointer == 83)
        dialog_083();  
                      
    if (d_pointer == 84)
        dialog_084(); 

    if (d_pointer == 85)
        dialog_085();  

    if (d_pointer == 86)
        dialog_086(); 

    if (d_pointer == 87)
        dialog_087(); 

    if (d_pointer == 88)
        dialog_088();  

    if (d_pointer == 89)
        dialog_089(); 

    if (d_pointer == 90)
        dialog_090();

    if (d_pointer == 91)
        dialog_091(); 

    if (d_pointer == 92)
        dialog_092();  

    if (d_pointer == 93)
        dialog_093();  
                      
    if (d_pointer == 94)
        dialog_094(); 

    if (d_pointer == 95)
        dialog_095();  

    if (d_pointer == 96)
        dialog_096(); 

    if (d_pointer == 97)
        dialog_097(); 

    if (d_pointer == 98)
        dialog_098(); 

    if (d_pointer == 99)
        dialog_099(); 

    if (d_pointer == 100)
        dialog_100(); 

    if (d_pointer == 101)
        dialog_101(); 

    if (d_pointer == 102)
        dialog_102(); 

    if (d_pointer == 103)
        dialog_103(); 

    if (d_pointer == 104){
        choice_pause = 1;
        dialog_104(); 
    }


    if (d_pointer == 104101)
        dialog_104_1_01(); 

    if (d_pointer == 104102)
        dialog_104_1_02(); 

    if (d_pointer == 104103)
        dialog_104_1_03(); 

    if (d_pointer == 104104)
        dialog_104_1_04(); 

    if (d_pointer == 104105)
        dialog_104_1_05(); 

    if (d_pointer == 104106)
        dialog_104_1_06(); 

    if (d_pointer == 104107)
        dialog_104_1_07(); 

    if (d_pointer == 104108)
        dialog_104_1_08(); 



    if (d_pointer == 104201)
        dialog_104_2_01(); 

    if (d_pointer == 104202)
        dialog_104_2_02(); 
    
    if (d_pointer == 104203)
        dialog_104_2_03(); 
    
    if (d_pointer == 104204)
        dialog_104_2_04(); 
    
    if (d_pointer == 104205)
        dialog_104_2_05(); 
    
    if (d_pointer == 104206)
        dialog_104_2_06(); 
    
    if (d_pointer == 104207)
        dialog_104_2_07(); 
    
    if (d_pointer == 104208)
        dialog_104_2_08(); 
    
    if (d_pointer == 104209)
        dialog_104_2_09(); 
    
    if (d_pointer == 104210)
        dialog_104_2_10(); 
    


    if (d_pointer == 106)
        dialog_106(); 

    if (d_pointer == 107)
        dialog_107(); 

    if (d_pointer == 108)
        dialog_108(); 



    if (d_pointer == 110)
        dialog_110(); 

    if (d_pointer == 111)
        dialog_111(); 

    if (d_pointer == 112)
        dialog_112(); 

    if (d_pointer == 113)
        dialog_113(); 

    if (d_pointer == 114)
        dialog_114(); 

    if (d_pointer == 115)
        dialog_115(); 

    if (d_pointer == 116)
        dialog_116(); 

    if (d_pointer == 117)
        dialog_117(); 

    if (d_pointer == 118)
        dialog_118(); 

    if (d_pointer == 119)
        dialog_119(); 

    if (d_pointer == 120)
        dialog_120(); 

    if (d_pointer == 121)
        dialog_121(); 

    if (d_pointer == 122)
        dialog_122(); 

    if (d_pointer == 123)
        dialog_123(); 

    if (d_pointer == 124)
        dialog_124(); 



    if (d_pointer == 126)
        dialog_126(); 



    if (d_pointer == 128)
        dialog_128(); 
    
    if (d_pointer == 129)
        dialog_129(); 
    
    if (d_pointer == 130)
        dialog_130(); 

    if (d_pointer == 131)
        dialog_131(); 

    if (d_pointer == 132)
        dialog_132(); 
    
    if (d_pointer == 133)
        dialog_133(); 
    
    if (d_pointer == 134)
        dialog_134(); 
    
    if (d_pointer == 135)
        dialog_135(); 
        
    if (d_pointer == 136)
        dialog_136(); 
    
    if (d_pointer == 137)
        dialog_137(); 
    
    if (d_pointer == 138)
        dialog_138(); 
    
    if (d_pointer == 139)
        dialog_139(); 
    
    if (d_pointer == 140)
        dialog_140(); 
        
    if (d_pointer == 141)
        dialog_141(); 
    
    if (d_pointer == 142)
        dialog_142(); 
    
    if (d_pointer == 143)
        dialog_143(); 
    
    if (d_pointer == 144)
        dialog_144(); 
    
    if (d_pointer == 145)
        dialog_145(); 
        
    if (d_pointer == 146)
        dialog_146(); 
    
    if (d_pointer == 147)
        dialog_147(); 
    
    if (d_pointer == 148)
        dialog_148(); 
    
    if (d_pointer == 149)
        dialog_149(); 
    
    if (d_pointer == 150)
        dialog_150(); 

    if (d_pointer == 151)
        dialog_151(); 
    
    if (d_pointer == 152)
        dialog_152(); 
    
    if (d_pointer == 153)
        dialog_153(); 
    
    if (d_pointer == 154)
        dialog_154(); 
    
    if (d_pointer == 155)
        dialog_155(); 
        
    if (d_pointer == 156)
        dialog_156(); 
    
    if (d_pointer == 157)
        dialog_157(); 
    
    if (d_pointer == 158)
        dialog_158(); 
    
    if (d_pointer == 159)
        dialog_159(); 
    
    if (d_pointer == 160)
        dialog_160(); 

    if (d_pointer == 161)
        dialog_161(); 
    
    if (d_pointer == 162)
        dialog_162(); 
    
    if (d_pointer == 163)
        dialog_163(); 

    if (d_pointer == 164)
        dialog_164(); 
        


    if (d_pointer == 166)
        dialog_166(); 

    if (d_pointer == 167)
        dialog_167(); 
                        
    if (d_pointer == 168)
        dialog_168(); 

    if (d_pointer == 169)
        dialog_169(); 
                        
    if (d_pointer == 170)
        dialog_170();    

    if (d_pointer == 171)
        dialog_171(); 
    
    if (d_pointer == 172)
        dialog_172(); 
    
    if (d_pointer == 173)
        dialog_173(); 
    
    if (d_pointer == 174)
        dialog_174(); 
    
    if (d_pointer == 175)
        dialog_175(); 
        
    if (d_pointer == 176)
        dialog_176(); 
    
    if (d_pointer == 177)
        dialog_177(); 
    
    if (d_pointer == 178)
        dialog_178(); 
    
    if (d_pointer == 179)
        dialog_179(); 
    
    if (d_pointer == 180)
        dialog_180(); 

    if (d_pointer == 181)
        dialog_181(); 
    
    if (d_pointer == 182)
        dialog_182(); 
    
    if (d_pointer == 183)
        dialog_183(); 
    
    if (d_pointer == 184)
        dialog_184(); 
    
    if (d_pointer == 185)
        dialog_185(); 
        
    if (d_pointer == 186)
        dialog_186(); 
    
    if (d_pointer == 187)
        dialog_187(); 
    
    if (d_pointer == 188)
        dialog_188(); 
    
    if (d_pointer == 189)
        dialog_189(); 

    if (d_pointer == 190)
        dialog_190(); 

    if (d_pointer == 191){
        dialog_191(); 
        choice_pause = 1;
    }



    if(d_pointer == 191101)
        dialog_191_1_01(); 

    if(d_pointer == 191102)
        dialog_191_1_02(); 

    if(d_pointer == 191103)
        dialog_191_1_03(); 

    if(d_pointer == 191104)
        dialog_191_1_04(); 

    if(d_pointer == 191105)
        dialog_191_1_05(); 

    if(d_pointer == 191106)
        dialog_191_1_06(); 

    if(d_pointer == 191107)
        dialog_191_1_07(); 

    if(d_pointer == 191108)
        dialog_191_1_08(); 

    if(d_pointer == 191109)
        dialog_191_1_09(); 

    if(d_pointer == 191110)
        dialog_191_1_10(); 

    if(d_pointer == 191111)
        dialog_191_1_11(); 

    if(d_pointer == 191112)
        dialog_191_1_12(); 

    if(d_pointer == 191113)
        dialog_191_1_13(); 

    if(d_pointer == 191114)
        dialog_191_1_14(); 

    if(d_pointer == 191115)
        dialog_191_1_15(); 



    if(d_pointer == 191201)
        dialog_191_2_01(); 

    if(d_pointer == 191202)
        dialog_191_2_02(); 

    if(d_pointer == 191203)
        dialog_191_2_03(); 

    if(d_pointer == 191204)
        dialog_191_2_04(); 

    if(d_pointer == 191205)
        dialog_191_2_05(); 

    if(d_pointer == 191206)
        dialog_191_2_06(); 

    if(d_pointer == 191207)
        dialog_191_2_07(); 

    if(d_pointer == 191208)
        dialog_191_2_08(); 

    if(d_pointer == 191209)
        dialog_191_2_09(); 

    if(d_pointer == 191210)
        dialog_191_2_10(); 

    if(d_pointer == 191211)
        dialog_191_2_11(); 

    if(d_pointer == 191212)
        dialog_191_2_12(); 

    if(d_pointer == 191213)
        dialog_191_2_13(); 



    if (d_pointer == 193)
        dialog_193(); 

    if (d_pointer == 194)
        dialog_194(); 

    if (d_pointer == 195)
        dialog_195(); 

    if (d_pointer == 196)
        dialog_196(); 

    if (d_pointer == 197)
        dialog_197(); 

    if (d_pointer == 198)
        dialog_198(); 

    if (d_pointer == 199)
        dialog_199(); 

    if (d_pointer == 200)
        dialog_200(); 

    if (d_pointer == 201)
        dialog_201(); 

    if (d_pointer == 202)
        dialog_202(); 

    if (d_pointer == 203)
        dialog_203(); 

    if (d_pointer == 204)
        dialog_204(); 

    if (d_pointer == 205)
        dialog_205(); 

    if (d_pointer == 206)
        dialog_206(); 

    if (d_pointer == 207)
        dialog_207(); 

    if (d_pointer == 208)
        dialog_208(); 

    if (d_pointer == 209)
        dialog_209(); 

    if (d_pointer == 210)
        dialog_210(); 

    if (d_pointer == 211)
        dialog_211(); 


    if (d_pointer == 213)
        dialog_213(); 
    
    if (d_pointer == 214)
        dialog_214(); 

    if (d_pointer == 215)
        dialog_215(); 

    if (d_pointer == 216)
        dialog_216(); 

    if (d_pointer == 217)
        dialog_217(); 

    if (d_pointer == 218)
        dialog_218(); 

    if (d_pointer == 219)
        dialog_219(); 

    if (d_pointer == 220)
        dialog_220(); 

    if (d_pointer == 221)
        dialog_221(); 

    if (d_pointer == 222)
        dialog_222(); 

    if (d_pointer == 223)
        dialog_223(); 

    if (d_pointer == 224)
        dialog_224(); 

    if (d_pointer == 225)
        dialog_225(); 

    if (d_pointer == 226)
        dialog_226(); 

    if (d_pointer == 227)
        dialog_227(); 

    if (d_pointer == 228)
        dialog_228(); 

    if (d_pointer == 229)
        dialog_229(); 

    if (d_pointer == 230)
        dialog_230(); 

    if (d_pointer == 231)
        dialog_231(); 

    if (d_pointer == 232)
        dialog_232(); 

    if (d_pointer == 233)
        dialog_233(); 

    if (d_pointer == 234)
        dialog_234(); 

    if (d_pointer == 235)
        dialog_235(); 

    if (d_pointer == 236)
        dialog_236(); 

    if (d_pointer == 237)
        dialog_237(); 

    if (d_pointer == 238)
        dialog_238(); 

    if (d_pointer == 239)
        dialog_239(); 

    if (d_pointer == 240)
        dialog_240(); 

    if (d_pointer == 241)
        dialog_241(); 

    if (d_pointer == 242)
        dialog_242(); 

    if (d_pointer == 243)
        dialog_243(); 

    if (d_pointer == 244)
        dialog_244(); 

    if (d_pointer == 245)
        dialog_245(); 

    if (d_pointer == 246)
        dialog_246(); 

    if (d_pointer == 247)
        dialog_247(); 
    
    if (d_pointer == 248){
        dialog_248(); 
        choice_pause = 1;
    }



    if(d_pointer == 248101)
        dialog_248_1_01();

    if(d_pointer == 248102)
        dialog_248_1_02();

    if(d_pointer == 248103)
        dialog_248_1_03();

    if(d_pointer == 248104)
        dialog_248_1_04();

    if(d_pointer == 248105)
        dialog_248_1_05();
        
    if(d_pointer == 248106)
        dialog_248_1_06();
        
    if(d_pointer == 248107)
        dialog_248_1_07();
        
    if(d_pointer == 248108)
        dialog_248_1_08();
        
    if(d_pointer == 248109)
        dialog_248_1_09();
        
    if(d_pointer == 248110)
        dialog_248_1_10();
        
    if(d_pointer == 248111)
        dialog_248_1_11();
        
    if(d_pointer == 248112)
        dialog_248_1_12();
        
    if(d_pointer == 248113)
        dialog_248_1_13();
        
    if(d_pointer == 248114)
        dialog_248_1_14();
        
    if(d_pointer == 248115)
        dialog_248_1_15();
        


    if(d_pointer == 248201)
        dialog_248_2_01();

    if(d_pointer == 248202)
        dialog_248_2_02();

    if(d_pointer == 248203)
        dialog_248_2_03();

    if(d_pointer == 248204)
        dialog_248_2_04();

    if(d_pointer == 248205)
        dialog_248_2_05();

    if(d_pointer == 248206)
        dialog_248_2_06();

    if(d_pointer == 248207)
        dialog_248_2_07();

    if(d_pointer == 248208)
        dialog_248_2_08();

    if(d_pointer == 248209)
        dialog_248_2_09();

    if(d_pointer == 248210)
        dialog_248_2_10();

    if(d_pointer == 248211)
        dialog_248_2_11();



    if(d_pointer == 249)
        dialog_249();
        
    if(d_pointer == 250)
        dialog_250();

    if(d_pointer == 251)
        dialog_251();
    
    if(d_pointer == 252)
        dialog_252();
        
    if(d_pointer == 253)
        dialog_253();
        

    if(d_pointer == 255)
        dialog_255();
        



    if(d_pointer == 257)
        dialog_257();
        
    if(d_pointer == 258)
        dialog_258();

    if(d_pointer == 259)
        dialog_259();

    if(d_pointer == 260)
        dialog_260();

    if(d_pointer == 261)
        dialog_261();
        
    if(d_pointer == 262)
        dialog_262();
   
    if(d_pointer == 263)
        dialog_263();
   
    if(d_pointer == 264){
        if (knows_about_the_arguing == 1)
            dialog_264();
        else{
            jo_clear_screen();
            dialog_267();
            d_pointer = 267;
        }
    }

    if(d_pointer == 265)
        dialog_265();
   
    if(d_pointer == 266)
        dialog_266();
   
    if(d_pointer == 267)
        dialog_267();
       
    if(d_pointer == 268){
        if (knows_about_the_brother == 1)
            dialog_268();
        else{
            jo_clear_screen();
            dialog_270();
            d_pointer = 270;
        }
    }

    if(d_pointer == 269)
        dialog_269();
   
    if(d_pointer == 270){
        dialog_270();
        choice_pause = 1;
    }

    if(d_pointer == 270101)
        dialog_270_1_01();

    if(d_pointer == 270102)
        dialog_270_1_02();
    
    if(d_pointer == 270103)
        dialog_270_1_03();
    
    if(d_pointer == 270104)
        dialog_270_1_04();
    
    if(d_pointer == 270105)
        dialog_270_1_05();
    
    if(d_pointer == 270106)
        dialog_270_1_06();
   
    if(d_pointer == 270106)
        dialog_270_1_06();
   

    if(d_pointer == 270201)
        dialog_270_2_01();

    if(d_pointer == 270202)
        dialog_270_2_02();

    if(d_pointer == 270203)
        dialog_270_2_03();


    if(d_pointer == 272)
        dialog_272();

    if(d_pointer == 273)
        dialog_273();


    if(d_pointer == 275)
        dialog_275();

    if(d_pointer == 276)
        dialog_276();

    if(d_pointer == 277)
        dialog_277();

    if(d_pointer == 278)
        dialog_278();

    if(d_pointer == 279)
        dialog_279();

    if(d_pointer == 280)
        dialog_280();

    if(d_pointer == 281)
        dialog_281();



    if(d_pointer == 283)
        dialog_283();


    if(d_pointer == 285)
        dialog_285();

    if(d_pointer == 286)
        dialog_286();

    if(d_pointer == 287){
        dialog_287();
    }


    if(d_pointer == 289)
        dialog_289();



    if(d_pointer == 291)
        dialog_291();

    if(d_pointer == 292)
        dialog_292();

    if(d_pointer == 293)
        dialog_293();

    if(d_pointer == 294)
        dialog_294();

    if(d_pointer == 295)
        dialog_295();

    if(d_pointer == 296)
        dialog_296();

    if(d_pointer == 297)
        dialog_297();

    if(d_pointer == 298)
        dialog_298();

    if(d_pointer == 299)
        dialog_299();

    if(d_pointer == 300)
        dialog_300();

    if (d_pointer == 301){
        dialog_301(); 
        choice_pause = 1;
    }


    if (d_pointer == 301101)
        dialog_301_1_01();

    if (d_pointer == 301201)
        dialog_301_2_01();

    if (d_pointer == 301202)
        dialog_301_2_02();

    if (d_pointer == 301203)
        dialog_301_2_03();




    if(d_pointer == 303)
        dialog_303();

    if(d_pointer == 304)
        dialog_304();

}

#endif
