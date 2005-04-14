/*  DreamChess
**  Copyright (C) 2005  The DreamChess project
**
**  This program is free software; you can redistribute it and/or modify
**  it under the terms of the GNU General Public License as published by
**  the Free Software Foundation; either version 2 of the License, or
**  (at your option) any later version.
**
**  This program is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU General Public License for more details.
**
**  You should have received a copy of the GNU General Public License
**  along with this program; if not, write to the Free Software
**  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#include <stdlib.h>

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif /* HAVE_CONFIG_H */

static char* programming[] = { "Programming by",
                               "Kris McAulay",
                               "Walter van Niftrik",
                               NULL };

static char* graphics[] = { "Graphics by",
                            "Andrew Ball",
                            "Rogier van Schaijk",
                            NULL };

static char* thanks[] = { "Special thanks to",
                          "Fran�ois-Dominic Laram�e",
                          "Armando Hern�ndez Marroqu�n",
                          NULL };

static char* copyright[] = { "DreamChess",
                             "Version " PACKAGE_VERSION,
                             "� 2003-2005 The DreamChess project",
                             NULL };

static char **credits[] = { copyright, programming, graphics, thanks, NULL };

char ***get_credits()
{
    return credits;
}
