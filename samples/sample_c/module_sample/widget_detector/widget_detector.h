/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef WIDGET_DETECTOR_H
#define WIDGET_DETECTOR_H

/* Includes ------------------------------------------------------------------*/
#include <dji_typedef.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Exported constants --------------------------------------------------------*/

/* Exported types ------------------------------------------------------------*/

/* Exported functions --------------------------------------------------------*/
T_DjiReturnCode DjiTest_WidgetDetectorStartService(void);
T_DjiReturnCode DjiTest_WidgetDetectorSetConfigFilePath(const char *path);
__attribute__((weak)) void DjiTest_WidgetLogAppend(const char *fmt, ...);

#ifdef __cplusplus
}
#endif

#endif 
