/* GTK - The GIMP Toolkit
 * Copyright (C) 2010 Carlos Garnacho <carlosg@gnome.org>
 * Copyright (C) 2011 Red Hat, Inc.
 *
 * Authors: Carlos Garnacho <carlosg@gnome.org>
 *          Cosimo Cecchi <cosimoc@gnome.org>
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
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __GTK_RENDER_BORDER_H__
#define __GTK_RENDER_BORDER_H__

#include "gtkborder.h"
#include "gtkcssimageprivate.h"
#include "gtkcssvalueprivate.h"
#include "gtktypes.h"

G_BEGIN_DECLS

void            gtk_css_style_snapshot_border           (GtkCssStyle            *style,
                                                         GtkSnapshot            *snapshot,
                                                         gdouble                 width,
                                                         gdouble                 height);

void            gtk_css_style_snapshot_outline          (GtkCssStyle            *style,
                                                         GtkSnapshot            *snapshot,
                                                         gdouble                 width,
                                                         gdouble                 height);

G_END_DECLS

#endif /* __GTK_RENDER_BORDER_H__ */