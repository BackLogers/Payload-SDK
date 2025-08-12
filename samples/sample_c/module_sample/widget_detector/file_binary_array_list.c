/* Includes ------------------------------------------------------------------*/
#include "file_binary_array_list.h"

#include "widget_file_c/en_big_screen/icon_button1_png.h"
#include "widget_file_c/en_big_screen/icon_button2_png.h"
#include "widget_file_c/en_big_screen/icon_list_item1_png.h"
#include "widget_file_c/en_big_screen/icon_list_item2_png.h"
#include "widget_file_c/en_big_screen/icon_scale_png.h"
#include "widget_file_c/en_big_screen/icon_radar_select_png.h"
#include "widget_file_c/en_big_screen/icon_radar_unselect_png.h"
#include "widget_file_c/en_big_screen/widget_config_json.h"

/* Private constants ---------------------------------------------------------*/

/* Export types -------------------------------------------------------------*/
static T_DjiWidgetFileBinaryArray s_EnWidgetFileBinaryArrayList[] = {
    {widget_config_json_fileName, widget_config_json_fileSize, widget_config_json_fileBinaryArray},

    {icon_button1_png_fileName, icon_button1_png_fileSize, icon_button1_png_fileBinaryArray},
    {icon_button2_png_fileName, icon_button2_png_fileSize, icon_button2_png_fileBinaryArray},
    {icon_list_item1_png_fileName, icon_list_item1_png_fileSize, icon_list_item1_png_fileBinaryArray},
    {icon_list_item2_png_fileName, icon_list_item2_png_fileSize, icon_list_item2_png_fileBinaryArray},
    {icon_scale_png_fileName, icon_scale_png_fileSize, icon_scale_png_fileBinaryArray},
    {icon_radar_select_png_fileName, icon_radar_select_png_fileSize, icon_radar_select_png_fileBinaryArray},
    {icon_radar_unselect_png_fileName, icon_radar_unselect_png_fileSize, icon_radar_unselect_png_fileBinaryArray}
};

/* Export values -------------------------------------------------------------*/
uint32_t g_DetectorBinaryArrayCount = sizeof(s_EnWidgetFileBinaryArrayList) / sizeof(T_DjiWidgetFileBinaryArray);
T_DjiWidgetFileBinaryArray * g_DetectorFileBinaryArrayList = s_EnWidgetFileBinaryArrayList;
