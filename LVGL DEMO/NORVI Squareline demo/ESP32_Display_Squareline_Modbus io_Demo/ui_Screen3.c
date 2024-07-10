// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: SquareLine_Project2

#include "ui.h"

void ui_Screen3_screen_init(void)
{
    ui_Screen3 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_MODBUS_OUTPUT_LABEL1 = lv_label_create(ui_Screen3);
    lv_obj_set_width(ui_MODBUS_OUTPUT_LABEL1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MODBUS_OUTPUT_LABEL1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MODBUS_OUTPUT_LABEL1, -7);
    lv_obj_set_y(ui_MODBUS_OUTPUT_LABEL1, -193);
    lv_obj_set_align(ui_MODBUS_OUTPUT_LABEL1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MODBUS_OUTPUT_LABEL1, "HMI MODBUS OUTPUTS");
    lv_obj_set_style_text_color(ui_MODBUS_OUTPUT_LABEL1, lv_color_hex(0xB16161), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MODBUS_OUTPUT_LABEL1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MODBUS_OUTPUT_LABEL1, &ui_font_arial40, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_OUT5 = lv_obj_create(ui_Screen3);
    lv_obj_set_width(ui_OUT5, 334);
    lv_obj_set_height(ui_OUT5, 144);
    lv_obj_set_x(ui_OUT5, -183);
    lv_obj_set_y(ui_OUT5, -83);
    lv_obj_set_align(ui_OUT5, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_OUT5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_OUT5, lv_color_hex(0xA6D7CF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_OUT5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ON5 = lv_obj_create(ui_OUT5);
    lv_obj_set_width(ui_ON5, 85);
    lv_obj_set_height(ui_ON5, 85);
    lv_obj_set_x(ui_ON5, 2);
    lv_obj_set_y(ui_ON5, 5);
    lv_obj_set_align(ui_ON5, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ON5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ON5, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ON5, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ON5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ON5, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ON5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_on1test1 = lv_label_create(ui_ON5);
    lv_obj_set_width(ui_on1test1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_on1test1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_on1test1, -2);
    lv_obj_set_y(ui_on1test1, 3);
    lv_obj_set_align(ui_on1test1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_on1test1, "ON");
    lv_obj_set_style_text_color(ui_on1test1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_on1test1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_on1test1, &ui_font_arial30B8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_OFF5 = lv_obj_create(ui_OUT5);
    lv_obj_set_width(ui_OFF5, 85);
    lv_obj_set_height(ui_OFF5, 85);
    lv_obj_set_x(ui_OFF5, 106);
    lv_obj_set_y(ui_OFF5, 5);
    lv_obj_set_align(ui_OFF5, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_OFF5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_OFF5, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_OFF5, lv_color_hex(0x0026FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_OFF5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_OFF5, lv_color_hex(0x0026FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_OFF5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_off1test1 = lv_label_create(ui_OFF5);
    lv_obj_set_width(ui_off1test1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_off1test1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_off1test1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_off1test1, "OFF");
    lv_obj_set_style_text_color(ui_off1test1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_off1test1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_off1test1, &ui_font_arial30B8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_out5 = lv_label_create(ui_OUT5);
    lv_obj_set_width(ui_out5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_out5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_out5, -105);
    lv_obj_set_y(ui_out5, 4);
    lv_obj_set_align(ui_out5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_out5, "Output 1");
    lv_obj_set_style_text_font(ui_out5, &ui_font_arial20B8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_OUT6 = lv_obj_create(ui_Screen3);
    lv_obj_set_width(ui_OUT6, 334);
    lv_obj_set_height(ui_OUT6, 144);
    lv_obj_set_x(ui_OUT6, 176);
    lv_obj_set_y(ui_OUT6, -83);
    lv_obj_set_align(ui_OUT6, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_OUT6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_OUT6, lv_color_hex(0xA6D7CF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_OUT6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_out6 = lv_label_create(ui_OUT6);
    lv_obj_set_width(ui_out6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_out6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_out6, -105);
    lv_obj_set_y(ui_out6, 4);
    lv_obj_set_align(ui_out6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_out6, "Output 3");
    lv_obj_set_style_text_font(ui_out6, &ui_font_arial20B8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ON6 = lv_obj_create(ui_OUT6);
    lv_obj_set_width(ui_ON6, 85);
    lv_obj_set_height(ui_ON6, 85);
    lv_obj_set_x(ui_ON6, 2);
    lv_obj_set_y(ui_ON6, 5);
    lv_obj_set_align(ui_ON6, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ON6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ON6, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ON6, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ON6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ON6, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ON6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_on3test1 = lv_label_create(ui_ON6);
    lv_obj_set_width(ui_on3test1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_on3test1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_on3test1, -2);
    lv_obj_set_y(ui_on3test1, 5);
    lv_obj_set_align(ui_on3test1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_on3test1, "ON");
    lv_obj_set_style_text_color(ui_on3test1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_on3test1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_on3test1, &ui_font_arial30B8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_OFF6 = lv_obj_create(ui_OUT6);
    lv_obj_set_width(ui_OFF6, 85);
    lv_obj_set_height(ui_OFF6, 85);
    lv_obj_set_x(ui_OFF6, 106);
    lv_obj_set_y(ui_OFF6, 5);
    lv_obj_set_align(ui_OFF6, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_OFF6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_OFF6, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_OFF6, lv_color_hex(0x0026FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_OFF6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_OFF6, lv_color_hex(0x0026FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_OFF6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_off3test1 = lv_label_create(ui_OFF6);
    lv_obj_set_width(ui_off3test1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_off3test1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_off3test1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_off3test1, "OFF");
    lv_obj_set_style_text_color(ui_off3test1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_off3test1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_off3test1, &ui_font_arial30B8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_OUT7 = lv_obj_create(ui_Screen3);
    lv_obj_set_width(ui_OUT7, 334);
    lv_obj_set_height(ui_OUT7, 144);
    lv_obj_set_x(ui_OUT7, -183);
    lv_obj_set_y(ui_OUT7, 86);
    lv_obj_set_align(ui_OUT7, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_OUT7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_OUT7, lv_color_hex(0xA6D7CF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_OUT7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_out7 = lv_label_create(ui_OUT7);
    lv_obj_set_width(ui_out7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_out7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_out7, -105);
    lv_obj_set_y(ui_out7, 4);
    lv_obj_set_align(ui_out7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_out7, "Output 2");
    lv_obj_set_style_text_font(ui_out7, &ui_font_arial20B8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ON7 = lv_obj_create(ui_OUT7);
    lv_obj_set_width(ui_ON7, 85);
    lv_obj_set_height(ui_ON7, 85);
    lv_obj_set_x(ui_ON7, 2);
    lv_obj_set_y(ui_ON7, 5);
    lv_obj_set_align(ui_ON7, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ON7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ON7, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ON7, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ON7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ON7, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ON7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_on2test1 = lv_label_create(ui_ON7);
    lv_obj_set_width(ui_on2test1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_on2test1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_on2test1, 0);
    lv_obj_set_y(ui_on2test1, 3);
    lv_obj_set_align(ui_on2test1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_on2test1, "ON");
    lv_obj_set_style_text_color(ui_on2test1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_on2test1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_on2test1, &ui_font_arial30B8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_OFF7 = lv_obj_create(ui_OUT7);
    lv_obj_set_width(ui_OFF7, 85);
    lv_obj_set_height(ui_OFF7, 85);
    lv_obj_set_x(ui_OFF7, 106);
    lv_obj_set_y(ui_OFF7, 5);
    lv_obj_set_align(ui_OFF7, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_OFF7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_OFF7, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_OFF7, lv_color_hex(0x0026FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_OFF7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_OFF7, lv_color_hex(0x0026FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_OFF7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_off2test1 = lv_label_create(ui_OFF7);
    lv_obj_set_width(ui_off2test1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_off2test1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_off2test1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_off2test1, "OFF");
    lv_obj_set_style_text_color(ui_off2test1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_off2test1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_off2test1, &ui_font_arial30B8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_OUT8 = lv_obj_create(ui_Screen3);
    lv_obj_set_width(ui_OUT8, 334);
    lv_obj_set_height(ui_OUT8, 144);
    lv_obj_set_x(ui_OUT8, 176);
    lv_obj_set_y(ui_OUT8, 88);
    lv_obj_set_align(ui_OUT8, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_OUT8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_OUT8, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_OUT8, lv_color_hex(0xA6D7CF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_OUT8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_out8 = lv_label_create(ui_OUT8);
    lv_obj_set_width(ui_out8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_out8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_out8, -105);
    lv_obj_set_y(ui_out8, 4);
    lv_obj_set_align(ui_out8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_out8, "Output 4");
    lv_obj_set_style_text_font(ui_out8, &ui_font_arial20B8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ON8 = lv_obj_create(ui_OUT8);
    lv_obj_set_width(ui_ON8, 85);
    lv_obj_set_height(ui_ON8, 85);
    lv_obj_set_x(ui_ON8, 2);
    lv_obj_set_y(ui_ON8, 5);
    lv_obj_set_align(ui_ON8, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ON8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ON8, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ON8, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ON8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ON8, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ON8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_on4test1 = lv_label_create(ui_ON8);
    lv_obj_set_width(ui_on4test1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_on4test1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_on4test1, 0);
    lv_obj_set_y(ui_on4test1, 3);
    lv_obj_set_align(ui_on4test1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_on4test1, "ON");
    lv_obj_set_style_text_color(ui_on4test1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_on4test1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_on4test1, &ui_font_arial30B8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_OFF8 = lv_obj_create(ui_OUT8);
    lv_obj_set_width(ui_OFF8, 85);
    lv_obj_set_height(ui_OFF8, 85);
    lv_obj_set_x(ui_OFF8, 106);
    lv_obj_set_y(ui_OFF8, 5);
    lv_obj_set_align(ui_OFF8, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_OFF8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_OFF8, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_OFF8, lv_color_hex(0x0026FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_OFF8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_OFF8, lv_color_hex(0x0026FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_OFF8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_off4test1 = lv_label_create(ui_OFF8);
    lv_obj_set_width(ui_off4test1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_off4test1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_off4test1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_off4test1, "OFF");
    lv_obj_set_style_text_color(ui_off4test1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_off4test1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_off4test1, &ui_font_arial30B8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PREVIOUS3 = lv_obj_create(ui_Screen3);
    lv_obj_set_width(ui_PREVIOUS3, 101);
    lv_obj_set_height(ui_PREVIOUS3, 37);
    lv_obj_set_x(ui_PREVIOUS3, 291);
    lv_obj_set_y(ui_PREVIOUS3, 188);
    lv_obj_set_align(ui_PREVIOUS3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PREVIOUS3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_PREVIOUS4 = lv_label_create(ui_PREVIOUS3);
    lv_obj_set_width(ui_PREVIOUS4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PREVIOUS4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PREVIOUS4, 1);
    lv_obj_set_y(ui_PREVIOUS4, 2);
    lv_obj_set_align(ui_PREVIOUS4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_PREVIOUS4, "PREVIOUS");
    lv_obj_set_style_text_color(ui_PREVIOUS4, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PREVIOUS4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_PREVIOUS4, &ui_font_arial16B8, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_ON5, ui_event_ON5, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_OFF5, ui_event_OFF5, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ON6, ui_event_ON6, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_OFF6, ui_event_OFF6, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ON7, ui_event_ON7, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_OFF7, ui_event_OFF7, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ON8, ui_event_ON8, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_OFF8, ui_event_OFF8, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_PREVIOUS3, ui_event_PREVIOUS3, LV_EVENT_ALL, NULL);

}
