/* Inotify
*
* Project : minidlna
* Website : http://sourceforge.net/projects/minidlna/
* Author  : Justin Maggard
*
* MiniDLNA media server
* Copyright (C) 2008-2009  Justin Maggard
*
* This file is part of MiniDLNA.
*
* MiniDLNA is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License version 2 as
* published by the Free Software Foundation.
*
* MiniDLNA is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with MiniDLNA. If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef __INOTIFY_H__
#define __INOTIFY_H__

#ifdef HAVE_INOTIFY
void *start_inotify();
#endif

#endif
