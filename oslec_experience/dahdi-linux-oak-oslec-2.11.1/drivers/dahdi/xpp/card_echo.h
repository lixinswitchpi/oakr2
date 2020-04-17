#ifndef	CARD_ECHO_H
#define	CARD_ECHO_H
/*
 * Written by Oron Peled <oron@actcom.co.il>
 * Copyright (C) 2011, Xorcom
 *
 * All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */
#include "xpd.h"

enum echo_opcodes {
	XPROTO_NAME(ECHO, SET) = 0x39,
	XPROTO_NAME(ECHO, SET_REPLY) = 0x3A,
};

#endif /* CARD_ECHO_H */
