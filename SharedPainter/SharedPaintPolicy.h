/*                                                                                                                                           
* Copyright (c) 2012, Eunhyuk Kim(gunoodaddy) 
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*
*   * Redistributions of source code must retain the above copyright notice,
*     this list of conditions and the following disclaimer.
*   * Redistributions in binary form must reproduce the above copyright
*     notice, this list of conditions and the following disclaimer in the
*     documentation and/or other materials provided with the distribution.
*   * Neither the name of Redis nor the names of its contributors may be used
*     to endorse or promote products derived from this software without
*     specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
* ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
* LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
* CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
* SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
* INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
* CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
* ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
* POSSIBILITY OF SUCH DAMAGE.
*/

#pragma once 

#define VERSION_TEXT	"0.52"
#define AUTHOR_TEXT		"gunoodaddy"
#define PROGRAME_TEXT	"Shared Painter"

#define NET_MAGIC_CODE	0xBEBE

#define DEFAULT_TEXT_ITEM_POS_REGION_W	9999
#define DEFAULT_TEXT_ITEM_POS_REGION_H	300

#define DEFAULT_PIXMAP_ITEM_SIZE_W	250

#define DEFAULT_TRAY_MESSAGE_DURATION_MSEC	5000
#define DEFAULT_GRID_LINE_SIZE_W	32
#define FINDING_SERVER_TRY_COUNT	20

#if defined(WINDOWS)
#define NATIVE_NEWLINE_STR	"\r\n"
#else
#define NATIVE_NEWLINE_STR	"\n"
#endif
