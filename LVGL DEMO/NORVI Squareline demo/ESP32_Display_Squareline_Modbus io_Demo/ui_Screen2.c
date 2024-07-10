// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: SquareLine_Project2

#include "ui.h"

void ui_Screen2_screen_init(void)
{
    ui_Screen2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_OUTPUT_LABEL = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_OUTPUT_LABEL, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_OUTPUT_LABEL, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_OUTPUT_LABEL, -7);
    lv_obj_set_y(ui_OUTPUT_LABEL, -193);
    lv_obj_set_align(ui_OUTPUT_LABEL, LV_ALIGN_CENTER);
    lv_label_set_text(ui_OUTPUT_LABEL, "HMI OUTPUTS");
    lv_obj_set_style_text_color(ui_OUTPUT_LABEL, lv_color_hex(0xB16161), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_OUTPUT_LABEL, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_OUTPUT_LABEL, &ui_font_arial40, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_OUT1 = lv_obj_create(ui_Screen2);
    lv_obj_set_width(ui_OUT1, 334);
    lv_obj_set_height(ui_OUT1, 144);
    lv_obj_set_x(ui_OUT1, -183);
    lv_obj_set_y(ui_OUT1, -83);
    lv_obj_set_align(ui_OUT1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_OUT1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_OUT1, lv_color_hex(0xA6D7CF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_OUT1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ON1 = lv_obj_create(ui_OUT1);
    lv_obj_set_width(ui_ON1, 85);
    lv_obj_set_height(ui_ON1, 85);
    lv_obj_set_x(ui_ON1, 2);
    lv_obj_set_y(ui_ON1, 5);
    lv_obj_set_align(ui_ON1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ON1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ON1, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ON1, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ON1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ON1, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ON1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_on1test = lv_label_create(ui_ON1);
    lv_obj_set_width(ui_on1test, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_on1test, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_on1test, -2);
    lv_obj_set_y(ui_on1test, 3);
    lv_obj_set_align(ui_on1test, LV_ALIGN_CENTER);
    lv_label_set_text(ui_on1test, "ON");
    lv_obj_set_style_text_color(ui_on1test, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_on1test, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_on1test, &ui_font_arial30B8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_OFF1 = lv_obj_create(ui_OUT1);
    lv_obj_set_width(ui_OFF1, 85);
    lv_obj_set_height(ui_OFF1, 85);
    lv_obj_set_x(ui_OFF1, 106);
    lv_obj_set_y(ui_OFF1, 5);
    lv_obj_set_align(ui_OFF1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_OFF1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_OFF1, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_OFF1, lv_color_hex(0x0026FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_OFF1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_OFF1, lv_color_hex(0x0026FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_OFF1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_off1test = lv_label_create(ui_OFF1);
    lv_obj_set_width(ui_off1test, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_off1test, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_off1test, LV_ALIGN_CENTER);
    lv_label_set_text(ui_off1test, "OFF");
    lv_obj_set_style_text_color(ui_off1test, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_off1test, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_off1test, &ui_font_arial30B8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_out1 = lv_label_create(ui_OUT1);
    lv_obj_set_width(ui_out1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_out1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_out1, -105);
    lv_obj_set_y(ui_out1, 4);
    lv_obj_set_align(ui_out1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_out1, "Output 1");
    lv_obj_set_style_text_font(ui_out1, &ui_font_arial20B8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_OUT3 = lv_obj_create(ui_Screen2);
    lv_obj_set_width(ui_OUT3, 334);
    lv_obj_set_height(ui_OUT3, 144);
    lv_obj_set_x(ui_OUT3, 176);
    lv_obj_set_y(ui_OUT3, -83);
    lv_obj_set_align(ui_OUT3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_OUT3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_OUT3, lv_color_hex(0xA6D7CF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_OUT3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_out3 = lv_label_create(ui_OUT3);
    lv_obj_set_width(ui_out3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_out3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_out3, -105);
    lv_obj_set_y(ui_out3, 4);
    lv_obj_set_align(ui_out3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_out3, "Output 3");
    lv_obj_set_style_text_font(ui_out3, &ui_font_arial20B8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ON3 = lv_obj_create(ui_OUT3);
    lv_obj_set_width(ui_ON3, 85);
    lv_obj_set_height(ui_ON3, 85);
    lv_obj_set_x(ui_ON3, 2);
    lv_obj_set_y(ui_ON3, 5);
    lv_obj_set_align(ui_ON3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ON3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ON3, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ON3, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ON3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ON3, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ON3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_on3test = lv_label_create(ui_ON3);
    lv_obj_set_width(ui_on3test, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_on3test, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_on3test, -2);
    lv_obj_set_y(ui_on3test, 5);
    lv_obj_set_align(ui_on3test, LV_ALIGN_CENTER);
    lv_label_set_text(ui_on3test, "ON");
    lv_obj_set_style_text_color(ui_on3test, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_on3test, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_on3test, &ui_font_arial30B8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_OFF3 = lv_obj_create(ui_OUT3);
    lv_obj_set_width(ui_OFF3, 85);
    lv_obj_set_height(ui_OFF3, 85);
    lv_obj_set_x(ui_OFF3, 106);
    lv_obj_set_y(ui_OFF3, 5);
    lv_obj_set_align(ui_OFF3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_OFF3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_OFF3, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_OFF3, lv_color_hex(0x0026FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_OFF3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_OFF3, lv_color_hex(0x0026FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_OFF3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_off3test = lv_label_create(ui_OFF3);
    lv_obj_set_width(ui_off3test, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_off3test, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_off3test, LV_ALIGN_CENTER);
    lv_label_set_text(ui_off3test, "OFF");
    lv_obj_set_style_text_color(ui_off3test, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_off3test, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_off3test, &ui_font_arial30B8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_OUT2 = lv_obj_create(ui_Screen2);
    lv_obj_set_width(ui_OUT2, 334);
    lv_obj_set_height(ui_OUT2, 144);
    lv_obj_set_x(ui_OUT2, -183);
    lv_obj_set_y(ui_OUT2, 86);
    lv_obj_set_align(ui_OUT2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_OUT2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_OUT2, lv_color_hex(0xA6D7CF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_OUT2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_out2 = lv_label_create(ui_OUT2);
    lv_obj_set_width(ui_out2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_out2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_out2, -105);
    lv_obj_set_y(ui_out2, 4);
    lv_obj_set_align(ui_out2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_out2, "Output 2");
    lv_obj_set_style_text_font(ui_out2, &ui_font_arial20B8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ON2 = lv_obj_create(ui_OUT2);
    lv_obj_set_width(ui_ON2, 85);
    lv_obj_set_height(ui_ON2, 85);
    lv_obj_set_x(ui_ON2, 2);
    lv_obj_set_y(ui_ON2, 5);
    lv_obj_set_align(ui_ON2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ON2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ON2, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ON2, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ON2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ON2, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ON2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_on2test = lv_label_create(ui_ON2);
    lv_obj_set_width(ui_on2test, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_on2test, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_on2test, 0);
    lv_obj_set_y(ui_on2test, 3);
    lv_obj_set_align(ui_on2test, LV_ALIGN_CENTER);
    lv_label_set_text(ui_on2test, "ON");
    lv_obj_set_style_text_color(ui_on2test, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_on2test, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_on2test, &ui_font_arial30B8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_OFF2 = lv_obj_create(ui_OUT2);
    lv_obj_set_width(ui_OFF2, 85);
    lv_obj_set_height(ui_OFF2, 85);
    lv_obj_set_x(ui_OFF2, 106);
    lv_obj_set_y(ui_OFF2, 5);
    lv_obj_set_align(ui_OFF2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_OFF2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_OFF2, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_OFF2, lv_color_hex(0x0026FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_OFF2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_OFF2, lv_color_hex(0x0026FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_OFF2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_off2test = lv_label_create(ui_OFF2);
    lv_obj_set_width(ui_off2test, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_off2test, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_off2test, LV_ALIGN_CENTER);
    lv_label_set_text(ui_off2test, "OFF");
    lv_obj_set_style_text_color(ui_off2test, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_off2test, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_off2test, &ui_font_arial30B8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_OUT4 = lv_obj_create(ui_Screen2);
    lv_obj_set_width(ui_OUT4, 334);
    lv_obj_set_height(ui_OUT4, 144);
    lv_obj_set_x(ui_OUT4, 176);
    lv_obj_set_y(ui_OUT4, 88);
    lv_obj_set_align(ui_OUT4, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_OUT4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_OUT4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_OUT4, lv_color_hex(0xA6D7CF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_OUT4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_out4 = lv_label_create(ui_OUT4);
    lv_obj_set_width(ui_out4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_out4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_out4, -105);
    lv_obj_set_y(ui_out4, 4);
    lv_obj_set_align(ui_out4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_out4, "Output 4");
    lv_obj_set_style_text_font(ui_out4, &ui_font_arial20B8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ON4 = lv_obj_create(ui_OUT4);
    lv_obj_set_width(ui_ON4, 85);
    lv_obj_set_height(ui_ON4, 85);
    lv_obj_set_x(ui_ON4, 2);
    lv_obj_set_y(ui_ON4, 5);
    lv_obj_set_align(ui_ON4, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ON4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ON4, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ON4, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ON4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ON4, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ON4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_on4test = lv_label_create(ui_ON4);
    lv_obj_set_width(ui_on4test, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_on4test, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_on4test, 0);
    lv_obj_set_y(ui_on4test, 3);
    lv_obj_set_align(ui_on4test, LV_ALIGN_CENTER);
    lv_label_set_text(ui_on4test, "ON");
    lv_obj_set_style_text_color(ui_on4test, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_on4test, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_on4test, &ui_font_arial30B8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_OFF4 = lv_obj_create(ui_OUT4);
    lv_obj_set_width(ui_OFF4, 85);
    lv_obj_set_height(ui_OFF4, 85);
    lv_obj_set_x(ui_OFF4, 106);
    lv_obj_set_y(ui_OFF4, 5);
    lv_obj_set_align(ui_OFF4, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_OFF4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_OFF4, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_OFF4, lv_color_hex(0x0026FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_OFF4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_OFF4, lv_color_hex(0x0026FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_OFF4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_off4test = lv_label_create(ui_OFF4);
    lv_obj_set_width(ui_off4test, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_off4test, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_off4test, LV_ALIGN_CENTER);
    lv_label_set_text(ui_off4test, "OFF");
    lv_obj_set_style_text_color(ui_off4test, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_off4test, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_off4test, &ui_font_arial30B8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_NEXT3 = lv_obj_create(ui_Screen2);
    lv_obj_set_width(ui_NEXT3, 101);
    lv_obj_set_height(ui_NEXT3, 37);
    lv_obj_set_x(ui_NEXT3, 290);
    lv_obj_set_y(ui_NEXT3, 189);
    lv_obj_set_align(ui_NEXT3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_NEXT3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_NEXT4 = lv_label_create(ui_NEXT3);
    lv_obj_set_width(ui_NEXT4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_NEXT4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_NEXT4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_NEXT4, "NEXT");
    lv_obj_set_style_text_color(ui_NEXT4, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_NEXT4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_NEXT4, &ui_font_arial16B8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PREVIOUS1 = lv_obj_create(ui_Screen2);
    lv_obj_set_width(ui_PREVIOUS1, 101);
    lv_obj_set_height(ui_PREVIOUS1, 37);
    lv_obj_set_x(ui_PREVIOUS1, 183);
    lv_obj_set_y(ui_PREVIOUS1, 189);
    lv_obj_set_align(ui_PREVIOUS1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PREVIOUS1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_PREVIOUS2 = lv_label_create(ui_PREVIOUS1);
    lv_obj_set_width(ui_PREVIOUS2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PREVIOUS2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_PREVIOUS2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_PREVIOUS2, "PREVIOUS");
    lv_obj_set_style_text_color(ui_PREVIOUS2, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PREVIOUS2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_PREVIOUS2, &ui_font_arial16B8, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_ON1, ui_event_ON1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_OFF1, ui_event_OFF1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ON3, ui_event_ON3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_OFF3, ui_event_OFF3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ON2, ui_event_ON2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_OFF2, ui_event_OFF2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ON4, ui_event_ON4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_OFF4, ui_event_OFF4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_NEXT3, ui_event_NEXT3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_PREVIOUS1, ui_event_PREVIOUS1, LV_EVENT_ALL, NULL);

}
