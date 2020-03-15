#ifndef control
#define control

//dialog pointer
static int start_menu = 1;
static int choice_pause = 0;
static int d_pointer = 999;

//main controller function
void controller(){
    
    //debugger
    //jo_set_printf_color_index(JO_COLOR_INDEX_White);
    //jo_printf(1, 1, "%d", d_pointer);
    
    //main menu
    if (jo_is_pad1_key_down(JO_KEY_START) && start_menu == 1){
        start_menu = 0;
        jo_clear_screen();
        d_pointer = 0;
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

    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 104109){
        jo_clear_screen();
        dialog_105();
        d_pointer = 105;
    } 

    if (jo_is_pad1_key_down(JO_KEY_A) && start_menu == 0 && choice_pause == 0 && d_pointer == 104211){
        jo_clear_screen();
        dialog_105();
        d_pointer = 105;
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

}

#endif