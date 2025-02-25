#include <windows.h>
#include <stdio.h>
#include <tchar.h>
#include "helpers.h"

extern "C" {
    __declspec (dllexport) void Init()
    {
        WRITE_MEMORY(0x14027808A, uint8_t, 0x03); // frame_bottom
        WRITE_MEMORY(0x1402781DB, uint8_t, 0xF2); // frame_top

        WRITE_MEMORY(0x151300C71, uint8_t, 0xF3); // chance_frame_bottom
        WRITE_MEMORY(0x151300CC2, uint8_t, 0xF2); // chance_frame_top
    }
}