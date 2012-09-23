#ifndef VIDEO_H
#define VIDEO_H

#include "global.h"

boolean Alt_VideoModule_Init ();
void    Alt_VideoModule_Drop ();

boolean Alt_VideoModule_InitVideoMode (char* windowTitle, Coordinate2 windowSize, boolean fullscreen);
void    Alt_VideoModule_DropVideoMode ();

boolean Alt_VideoModule_SetWindowTitle (char* windowTitle);
char*   Alt_VideoModule_GetWindowTitle ();

boolean     Alt_VideoModule_SetWindowSize (Coordinate2 windowSize);
Coordinate2 Alt_VideoModule_GetWindowSize ();

boolean Alt_VideoModule_SetFullscreen (boolean fullscreen);
boolean Alt_VideoModule_IsFullscreen  ();

#endif // VIDEO_H
