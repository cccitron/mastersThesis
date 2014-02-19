/*
 * Copyright (C) 2009 Chris McClelland
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef MAKESTUFF_H
#define MAKESTUFF_H

#ifndef __cplusplus
	#ifdef WIN32
		typedef char bool;
		enum {
			false = 0,
			true = 1
		};
	#else
		#include <stdbool.h>
	#endif
#endif

#ifdef WIN32
	#define WARN_UNUSED_RESULT
	#define DLLEXPORT(t) __declspec(dllexport) t __stdcall
#else
	#define WARN_UNUSED_RESULT __attribute__((warn_unused_result))
	#define DLLEXPORT(t) t
#endif

#ifndef NULL
	#define NULL ((void*)0)
#endif

typedef unsigned char      uint8;
typedef unsigned short     uint16;
#ifndef __cplusplus
	typedef unsigned long long uint64;
#endif

typedef signed char        int8;
typedef signed short       int16;

#if (defined __AVR__ && defined __GNUC__) || defined SDCC
	// The embedded platforms have sizeof(int) = 2, so use long
	typedef signed long    int32;
	typedef unsigned long  uint32;
#else
	// The i686 & x86_64 have sizeof(int) = 4
	typedef signed int     int32;
	typedef unsigned int   uint32;
#endif

#ifndef __cplusplus
	typedef signed long long   int64;
#endif

typedef unsigned int       bitfield;

#if defined __GNUC__
	#define swap32(x) __builtin_bswap32(x)
#elif defined WIN32
	#define swap32(x) _byteswap_ulong(x)
#define inline __inline
#endif
#define swap16(x) ((((x) & 0x00FF) << 8) | (((x) >> 8) & 0x00FF))

#ifdef BYTE_ORDER
	#if BYTE_ORDER == 1234
		// Little-endian machines
		static inline uint16 bigEndian16(uint16 x) {
			return swap16(x);
		}
		static inline uint32 bigEndian32(uint32 x) {
			return swap32(x);
		}
		static inline uint16 littleEndian16(uint16 x) {
			return x;
		}
		static inline uint32 littleEndian32(uint32 x) {
			return x;
		}
	#elif BYTE_ORDER == 4321
		// Big-endian machines
		static inline uint16 bigEndian16(uint16 x) {
			return x;
		}
		static inline uint32 bigEndian32(uint32 x) {
			return x;
		}
		static inline uint16 littleEndian16(uint16 x) {
			return swap16(x);
		}
		static inline uint32 littleEndian32(uint32 x) {
			return swap32(x);
		}
	#else
		#error Unsupported BYTE_ORDER
	#endif
#endif

#endif
