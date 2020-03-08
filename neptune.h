/*-------------------------------------------------------------------------------+
|   ~+         *       +                                                         |
|      '                  |     _   _  ___________ _____ _   _ _   _  _____      |
|  ()    .-.,="``"=.    - o -  | \ | ||  ___| ___ \_   _| | | | \ | ||  ___|     |
|        '=/_       \     |    |  \| || |__ | |_/ / | | | | | |  \| || |__       |
|     *   |  '=._    |         | . ` ||  __||  __/  | | | | | | . ` ||  __|      |
|          \     `=./`,     '  | |\  || |___| |     | | | |_| | |\  || |___      |
|  +    .   '=.__.=' `='   *   \_| \_/\____/\_|     \_/  \___/\_| \_/\____/      |
|                                                              BY: @G_Sansigolo  |
+-------------------------------------------------------------------------------*/
#ifndef neptune
#define neptune

static int HUD_ID;
static int FACESET_ID;

/**
 * draw_hud()
 * plot dialog box
 */
void draw_hud(){
    load_hud("HUD.TGA", "TEX");
}

/**
 * set_background()
 * plot background image
 */
void set_background(char* filename, char* folder){
    jo_img bg;

    bg.data = NULL;
    jo_tga_loader(&bg, folder, filename, JO_COLOR_Green);
    jo_set_background_sprite(&bg, 0, 0);
    jo_free_img(&bg);
}

/**
 * draw()
 * draw sprites on screen
 */
void draw(void){
	jo_sprite_draw3D(HUD_ID, 0, 0, 500);
}

/**
 * draw2()
 * draw sprites on screen
 */
void draw2(void){
	jo_sprite_draw3D(FACESET_ID, -85, -28, 300);
}

/**
 * add_hud()
 * add dialog box to screen
 */
void load_hud(char* filename, char* folder){
    HUD_ID = jo_sprite_add_tga(folder, filename, JO_COLOR_Green);
}

/**
 * set_sprite()
 * set sprite image
 */
void load_sprites(char* filename, char* folder){
    FACESET_ID = jo_sprite_add_tga(folder, filename, JO_COLOR_Green);
}

/**
 * d()
 * draw text on the screen
 */
void d(char* text, int line){
    jo_set_printf_color_index(JO_COLOR_INDEX_White);
    if (line == 1)
        jo_printf(12, 21+(2), text);
    else
        jo_printf(1, 21+(2*line), text);
}

/**
 * h()
 * draw text on the screen
 */
void h(char* text){
    jo_set_printf_color_index(JO_COLOR_INDEX_Red);
    jo_printf(1, 21+(2*1), text);
}

/**
 * d_n()
 * draw text on the screen
 */
void d_n(char* text, int line){
    jo_set_printf_color_index(JO_COLOR_INDEX_White);
    if (line == 1)
        jo_printf(1, 21+(2), text);
    else
        jo_printf(1, 21+(2*line), text);
}

#endif