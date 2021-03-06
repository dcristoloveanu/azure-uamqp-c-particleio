// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#ifndef LOGGER_H
#define LOGGER_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

	typedef void(*LOGGER_LOG)(unsigned int options, char* format, ...);

#define LOG_LINE 0x01

#define LOG(logger, ...) if (logger != NULL) logger(__VA_ARGS__)
#define LOGX(logger, ...) if (logger != NULL) logger(__VA_ARGS__)
//#define LOG(logger, ...)

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* LOGGER_H */
