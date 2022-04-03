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

#define TRANSPARENT_COLOR_INDEX_IN_FONT_PALETTE (2)

jo_palette font_palette;

/**
 * load_nbg2_font()
 * load a nbg2 font which supports English, Portuguese, Spanish and related languages
 */
void load_nbg2_font(void){
    jo_img_8bits img;
    img.data = NULL;
    jo_tga_8bits_loader(&img, JO_ROOT_DIR, "FONT.TGA", TRANSPARENT_COLOR_INDEX_IN_FONT_PALETTE);
    jo_vdp2_set_nbg2_8bits_font(&img, " 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!_?/@',.[]=+-)(*&|$#^~{}[]<>", font_palette.id, false, true);
    jo_free_img(&img);
}

/**
 * tga_palette_handling()
 * function that handle tga palette
 */
jo_palette *tga_palette_handling(void){
    jo_create_palette(&font_palette);
    return (&font_palette);
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
 * d()
 * draw text on the screen
 */
void d(char* text, int line){
    if (line == 1)
        jo_nbg2_printf(12, 21+(2), text);
    else
        jo_nbg2_printf(1, 21+(2*line), text);
}

/**
 * h()
 * draw text on the screen
 */
void h(char* text){
    jo_nbg2_printf(1, 21+(2*1), text);
}

/**
 * d_n()
 * draw text on the screen
 */
void d_n(char* text, int line){
    if (line == 1)
        jo_nbg2_printf(1, 21+(2), text);
    else
        jo_nbg2_printf(1, 21+(2*line), text);
}

#endif
