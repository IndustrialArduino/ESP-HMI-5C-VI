// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: PROJECT1

#include "ui.h"

void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Digi_In = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Digi_In, 354);
    lv_obj_set_height(ui_Digi_In, 391);
    lv_obj_set_x(ui_Digi_In, -179);
    lv_obj_set_y(ui_Digi_In, -3);
    lv_obj_set_align(ui_Digi_In, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Digi_In, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Digi_In, lv_color_hex(0x88BED5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Digi_In, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label1 = lv_label_create(ui_Digi_In);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label1, -12);
    lv_obj_set_y(ui_Label1, -167);
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label1, "DIGITAL INPUTS");
    lv_obj_set_style_text_font(ui_Label1, &ui_font_arial20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Digi_1 = lv_obj_create(ui_Digi_In);
    lv_obj_set_width(ui_Digi_1, 295);
    lv_obj_set_height(ui_Digi_1, 60);
    lv_obj_set_x(ui_Digi_1, -5);
    lv_obj_set_y(ui_Digi_1, -111);
    lv_obj_set_align(ui_Digi_1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Digi_1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Digi_1, lv_color_hex(0xA6D4D3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Digi_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label2 = lv_label_create(ui_Digi_In);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label2, -65);
    lv_obj_set_y(ui_Label2, -112);
    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label2, "Digital Input 1");
    lv_obj_set_style_text_font(ui_Label2, &ui_font_arial20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label6 = lv_label_create(ui_Digi_In);
    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label6, 91);
    lv_obj_set_y(ui_Label6, -112);
    lv_obj_set_align(ui_Label6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label6, "1");
    lv_obj_set_style_text_font(ui_Label6, &ui_font_arialceb16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Digi_2 = lv_obj_create(ui_Digi_In);
    lv_obj_set_width(ui_Digi_2, 295);
    lv_obj_set_height(ui_Digi_2, 60);
    lv_obj_set_x(ui_Digi_2, -5);
    lv_obj_set_y(ui_Digi_2, -30);
    lv_obj_set_align(ui_Digi_2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Digi_2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Digi_2, lv_color_hex(0xA6D4D3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Digi_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label3 = lv_label_create(ui_Digi_In);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label3, -65);
    lv_obj_set_y(ui_Label3, -30);
    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label3, "Digital Input 2");
    lv_obj_set_style_text_font(ui_Label3, &ui_font_arial20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label7 = lv_label_create(ui_Digi_In);
    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label7, 91);
    lv_obj_set_y(ui_Label7, -30);
    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label7, "1");
    lv_obj_set_style_text_font(ui_Label7, &ui_font_arialceb16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Digi_3 = lv_obj_create(ui_Digi_In);
    lv_obj_set_width(ui_Digi_3, 295);
    lv_obj_set_height(ui_Digi_3, 60);
    lv_obj_set_x(ui_Digi_3, -5);
    lv_obj_set_y(ui_Digi_3, 53);
    lv_obj_set_align(ui_Digi_3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Digi_3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Digi_3, lv_color_hex(0xA6D4D3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Digi_3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label4 = lv_label_create(ui_Digi_In);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label4, -65);
    lv_obj_set_y(ui_Label4, 53);
    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label4, "Digital Input 3");
    lv_obj_set_style_text_font(ui_Label4, &ui_font_arial20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label8 = lv_label_create(ui_Digi_In);
    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label8, 91);
    lv_obj_set_y(ui_Label8, 53);
    lv_obj_set_align(ui_Label8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label8, "1");
    lv_obj_set_style_text_font(ui_Label8, &ui_font_arialceb16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Digi_4 = lv_obj_create(ui_Digi_In);
    lv_obj_set_width(ui_Digi_4, 295);
    lv_obj_set_height(ui_Digi_4, 60);
    lv_obj_set_x(ui_Digi_4, -5);
    lv_obj_set_y(ui_Digi_4, 137);
    lv_obj_set_align(ui_Digi_4, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Digi_4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Digi_4, lv_color_hex(0xA6D4D3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Digi_4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label5 = lv_label_create(ui_Digi_In);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label5, -65);
    lv_obj_set_y(ui_Label5, 135);
    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label5, "Digital Input 4");
    lv_obj_set_style_text_font(ui_Label5, &ui_font_arial20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label9 = lv_label_create(ui_Digi_In);
    lv_obj_set_width(ui_Label9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label9, 91);
    lv_obj_set_y(ui_Label9, 135);
    lv_obj_set_align(ui_Label9, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label9, "1");
    lv_obj_set_style_text_font(ui_Label9, &ui_font_arialceb16, LV_PART_MAIN | LV_STATE_DEFAULT);

}