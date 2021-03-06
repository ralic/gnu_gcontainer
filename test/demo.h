/* libgcontainer - Test program
 * Copyright (C) 2006, 2008 - Fontana Nicola <ntd@entidi.it>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the 
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA  02110-1301, USA.
 */


#ifndef __GCONTAINER_DEBUG_H__
#define __GCONTAINER_DEBUG_H__

#include <gcontainer/gcontainer.h>


G_BEGIN_DECLS

/* This functions create objects with debugging stuff attached */

GObject *       new_container           (const gchar    *name);
GObject *       new_bin                 (const gchar    *name);
GObject *       new_child               (const gchar    *name);


/* Debugging method to show the contents of GContainerables */

void            show_containerable      (GContainerable *containerable);

G_END_DECLS

#endif /* __GCONTAINER_DEBUG_H__ */
