/*-*- Mode: C; c-basic-offset: 8; indent-tabs-mode: nil -*-*/

#ifndef foovirthfoo
#define foovirthfoo

/***
  This file is part of systemd.

  Copyright 2011 Lennart Poettering

  systemd is free software; you can redistribute it and/or modify it
  under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  systemd is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
  General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with systemd; If not, see <http://www.gnu.org/licenses/>.
***/

int detect_vm(const char **id);
int detect_container(const char **id);

typedef enum Virtualization {
        VIRTUALIZATION_NONE = 0,
        VIRTUALIZATION_VM,
        VIRTUALIZATION_CONTAINER,
        _VIRTUALIZATION_MAX,
        _VIRTUALIZATION_INVALID = -1
} Virtualization;

Virtualization detect_virtualization(const char **id);

#endif
