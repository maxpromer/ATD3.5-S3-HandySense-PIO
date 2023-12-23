// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: HandySense

#ifndef _HANDYSENSE_UI_H
#define _HANDYSENSE_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"
// SCREEN: ui_Index
void ui_Index_screen_init(void);
void ui_event_Index(lv_event_t * e);
extern lv_obj_t * ui_Index;
extern lv_obj_t * ui_body;
extern lv_obj_t * ui_menu_box;
void ui_event_home_btn(lv_event_t * e);
extern lv_obj_t * ui_home_btn;
void ui_event_switch_btn(lv_event_t * e);
extern lv_obj_t * ui_switch_btn;
void ui_event_wifi_btn(lv_event_t * e);
extern lv_obj_t * ui_wifi_btn;
void ui_event_sensor_btn(lv_event_t * e);
extern lv_obj_t * ui_sensor_btn;
extern lv_obj_t * ui_main_container;
extern lv_obj_t * ui_home_container;
extern lv_obj_t * ui_Panel4;
extern lv_obj_t * ui_time_now_label;
extern lv_obj_t * ui_wifi_status_icon;
extern lv_obj_t * ui_cloud_status_icon;
extern lv_obj_t * ui_Container22;
extern lv_obj_t * ui_Panel5;
extern lv_obj_t * ui_Label51;
extern lv_obj_t * ui_temp_sensor_box;
extern lv_obj_t * ui_temp_sensor_label;
extern lv_obj_t * ui_temp_sensor_value;
extern lv_obj_t * ui_humi_sensor_box;
extern lv_obj_t * ui_humi_sensor_label;
extern lv_obj_t * ui_humi_sensor_value;
extern lv_obj_t * ui_soil_sensor_box;
extern lv_obj_t * ui_soil_sensor_label;
extern lv_obj_t * ui_soil_sensor_value;
extern lv_obj_t * ui_light_sensor_box;
extern lv_obj_t * ui_light_sensor_label;
extern lv_obj_t * ui_light_sensor_value;
extern lv_obj_t * ui_switch_status;
extern lv_obj_t * ui_Label50;
extern lv_obj_t * ui_o1_switch;
extern lv_obj_t * ui_o2_switch;
extern lv_obj_t * ui_o3_switch;
extern lv_obj_t * ui_o4_switch;
extern lv_obj_t * ui_switch_container;
extern lv_obj_t * ui_Container9;
extern lv_obj_t * ui_Label9;
extern lv_obj_t * ui_Container10;
void ui_event_switch1_select(lv_event_t * e);
extern lv_obj_t * ui_switch1_select;
extern lv_obj_t * ui_Label10;
void ui_event_switch2_select(lv_event_t * e);
extern lv_obj_t * ui_switch2_select;
extern lv_obj_t * ui_Label2;
void ui_event_switch3_select(lv_event_t * e);
extern lv_obj_t * ui_switch3_select;
extern lv_obj_t * ui_Label11;
extern lv_obj_t * ui_Container1;
extern lv_obj_t * ui_Container2;
void ui_event_auto_select_btn(lv_event_t * e);
extern lv_obj_t * ui_auto_select_btn;
extern lv_obj_t * ui_Label4;
void ui_event_timer_select_btn(lv_event_t * e);
extern lv_obj_t * ui_timer_select_btn;
extern lv_obj_t * ui_Label5;
extern lv_obj_t * ui_timer_number_select_box;
void ui_event_switch1_select2(lv_event_t * e);
extern lv_obj_t * ui_switch1_select2;
extern lv_obj_t * ui_Label3;
void ui_event_switch2_select2(lv_event_t * e);
extern lv_obj_t * ui_switch2_select2;
extern lv_obj_t * ui_Label7;
void ui_event_switch3_select2(lv_event_t * e);
extern lv_obj_t * ui_switch3_select2;
extern lv_obj_t * ui_Label8;
extern lv_obj_t * ui_auto_body;
extern lv_obj_t * ui_Label6;
extern lv_obj_t * ui_Container30;
extern lv_obj_t * ui_Container31;
extern lv_obj_t * ui_Label1;
extern lv_obj_t * ui_Label24;
extern lv_obj_t * ui_Container32;
extern lv_obj_t * ui_Label28;
extern lv_obj_t * ui_Label29;
extern lv_obj_t * ui_Label41;
extern lv_obj_t * ui_Container21;
extern lv_obj_t * ui_Container33;
extern lv_obj_t * ui_Label30;
extern lv_obj_t * ui_Label37;
extern lv_obj_t * ui_Container34;
extern lv_obj_t * ui_Label38;
extern lv_obj_t * ui_Label39;
extern lv_obj_t * ui_timer_body;
extern lv_obj_t * ui_Container5;
extern lv_obj_t * ui_Label36;
extern lv_obj_t * ui_Switch1;
extern lv_obj_t * ui_Container12;
extern lv_obj_t * ui_Label12;
extern lv_obj_t * ui_Label13;
extern lv_obj_t * ui_Container13;
extern lv_obj_t * ui_Label40;
extern lv_obj_t * ui_Label35;
extern lv_obj_t * ui_Container11;
extern lv_obj_t * ui_Label14;
extern lv_obj_t * ui_Container14;
extern lv_obj_t * ui_Button4;
extern lv_obj_t * ui_Label15;
extern lv_obj_t * ui_Button5;
extern lv_obj_t * ui_Label16;
extern lv_obj_t * ui_Button6;
extern lv_obj_t * ui_Label17;
extern lv_obj_t * ui_Button7;
extern lv_obj_t * ui_Label18;
extern lv_obj_t * ui_Button8;
extern lv_obj_t * ui_Label19;
extern lv_obj_t * ui_Button9;
extern lv_obj_t * ui_Label20;
extern lv_obj_t * ui_Button10;
extern lv_obj_t * ui_Label21;
extern lv_obj_t * ui_wifi_container;
extern lv_obj_t * ui_Label22;
extern lv_obj_t * ui_Container15;
extern lv_obj_t * ui_wifi_name;
extern lv_obj_t * ui_wifi_refresh;
extern lv_obj_t * ui_Label23;
void ui_event_wifi_password(lv_event_t * e);
extern lv_obj_t * ui_wifi_password;
extern lv_obj_t * ui_Container16;
extern lv_obj_t * ui_wifi_save;
extern lv_obj_t * ui_sensor_container;
extern lv_obj_t * ui_Label31;
extern lv_obj_t * ui_Dropdown1;
extern lv_obj_t * ui_Label32;
extern lv_obj_t * ui_Dropdown2;
extern lv_obj_t * ui_Label33;
extern lv_obj_t * ui_Dropdown3;
extern lv_obj_t * ui_Label34;
extern lv_obj_t * ui_Dropdown4;
extern lv_obj_t * ui_number_and_time_dialog;
extern lv_obj_t * ui_Panel2;
extern lv_obj_t * ui_Container18;
extern lv_obj_t * ui_number_digit1_input;
extern lv_obj_t * ui_number_digit2_input;
extern lv_obj_t * ui_number_split_label;
extern lv_obj_t * ui_number_digit3_input;
extern lv_obj_t * ui_number_digit4_input;
extern lv_obj_t * ui_Container19;
void ui_event_Button13(lv_event_t * e);
extern lv_obj_t * ui_Button13;
extern lv_obj_t * ui_Label26;
void ui_event_Button14(lv_event_t * e);
extern lv_obj_t * ui_Button14;
extern lv_obj_t * ui_Label27;
extern lv_obj_t * ui_loading;
extern lv_obj_t * ui_Spinner1;
extern lv_obj_t * ui_main_keyboard;
extern lv_obj_t * ui____initial_actions0;

LV_IMG_DECLARE(ui_img_1344368723);    // assets\home-icon.png
LV_IMG_DECLARE(ui_img_420491115);    // assets\power-off-icon.png
LV_IMG_DECLARE(ui_img_1756937144);    // assets\wifi-line-icon.png
LV_IMG_DECLARE(ui_img_2021756275);    // assets\speedometer-icon.png
LV_IMG_DECLARE(ui_img_2004695613);    // assets\globe-icon.png
LV_IMG_DECLARE(ui_img_504422231);    // assets\cloud-icon.png
LV_IMG_DECLARE(ui_img_750881228);    // assets\redo-arrow-icon.png
LV_IMG_DECLARE(ui_img_361352527);    // assets\check-mark-line-icon.png

LV_FONT_DECLARE(ui_font_Kanit20);
LV_FONT_DECLARE(ui_font_Kanit24);

void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
