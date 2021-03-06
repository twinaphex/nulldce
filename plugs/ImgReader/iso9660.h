#pragma once
#include "common.h"

void iso_DriveReadSector(u8 * buff,u32 StartSector,u32 SectorCount,u32 secsz);
void iso_DriveGetTocInfo(TocInfo* toc,DiskArea area);
u32 iso_DriveGetDiscType();
void iso_GetSessionsInfo(SessionInfo* sessions);
bool iso_init(wchar* file);
void iso_term(); 
