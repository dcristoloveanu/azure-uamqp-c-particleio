// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#include <stdlib.h>
#ifdef _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#endif
#include <stdarg.h>
#include <stdio.h>
#include "azure_c_shared_utility/xlogging.h"

extern void log_serial(char* log_line);

void consolelogger_log(unsigned int options, char* format, ...)
{
        char temp_buf[256];
	va_list args;
	va_start(args, format);
	vsprintf(temp_buf, format, args);
	va_end(args);
        //log_serial(temp_buf);

	if (options & LOG_LINE)
	{
		//log_serial("\r\n");
	}
}
