/* GAIL - The GNOME Accessibility Implementation Library
 * Copyright 2001 Sun Microsystems Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef __GAIL_MENU_SHELL_H__
#define __GAIL_MENU_SHELL_H__

#include <gail/gailcontainer.h>

G_BEGIN_DECLS

#define GAIL_TYPE_MENU_SHELL                    (gail_menu_shell_get_type ())
#define GAIL_MENU_SHELL(obj)                    (G_TYPE_CHECK_INSTANCE_CAST ((obj), GAIL_TYPE_MENU_SHELL, GailMenuShell))
#define GAIL_MENU_SHELL_CLASS(klass)            (G_TYPE_CHECK_CLASS_CAST ((klass), GAIL_TYPE_MENU_SHELL, GailMenuShellClass))
#define GAIL_IS_MENU_SHELL(obj)                 (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GAIL_TYPE_MENU_SHELL))
#define GAIL_IS_MENU_SHELL_CLASS(klass)         (G_TYPE_CHECK_CLASS_TYPE ((klass), GAIL_TYPE_MENU_SHELL))
#define GAIL_MENU_SHELL_GET_CLASS(obj)          (G_TYPE_INSTANCE_GET_CLASS ((obj), GAIL_TYPE_MENU_SHELL, GailMenuShellClass))

typedef struct _GailMenuShell                   GailMenuShell;
typedef struct _GailMenuShellClass              GailMenuShellClass;

struct _GailMenuShell
{
  GailContainer parent;
};

GType gail_menu_shell_get_type (void);

struct _GailMenuShellClass
{
  GailContainerClass parent_class;
};

G_END_DECLS

#endif /* __GAIL_MENU_SHELL_H__ */
