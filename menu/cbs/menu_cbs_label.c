/*  RetroArch - A frontend for libretro.
 *  Copyright (C) 2011-2016 - Daniel De Matteis
 *
 *  RetroArch is free software: you can redistribute it and/or modify it under the terms
 *  of the GNU General Public License as published by the Free Software Found-
 *  ation, either version 3 of the License, or (at your option) any later version.
 *
 *  RetroArch is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *  PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with RetroArch.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

#include "../menu_driver.h"
#include "../menu_cbs.h"
#include "../menu_navigation.h"

#ifndef BIND_ACTION_LABEL
#define BIND_ACTION_LABEL(cbs, name) \
   cbs->action_label = name; \
   cbs->action_label_ident = #name;
#endif

static int action_bind_label_generic(char *s, size_t len)
{
   return 0;
}

int menu_cbs_init_bind_label(menu_file_list_cbs_t *cbs,
      const char *path, const char *label, unsigned type, size_t idx)
{
   if (!cbs)
      return -1;

   if (cbs->enum_idx != MSG_UNKNOWN)
   {
      switch (cbs->enum_idx)
      {
         case 0:
         default:
            break;
      }
   }

   BIND_ACTION_LABEL(cbs, action_bind_label_generic);

   return -1;
}