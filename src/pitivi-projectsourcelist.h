/* 
 * PiTiVi
 * Copyright (C) <2004> Edward G. Hervey <hervey_e@epita.fr>
 *                      Guillaume Casanova <casano_g@epita.fr>
 *
 * This software has been written in EPITECH <http://www.epitech.net>
 * EPITECH is a computer science school in Paris - FRANCE -
 * under the direction of Flavien Astraud and Jerome Landrieu.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef PITIVI_PROJECTSOURCELIST_H
#define PITIVI_PROJECTSOURCELIST_H

/*
 * Potentially, include other headers on which this header depends.
 */

/*
 * Type macros.
 */

#define PITIVI_PROJECTSOURCELIST_TYPE (pitivi_projectsourcelist_get_type ())
#define PITIVI_PROJECTSOURCELIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PITIVI_PROJECTSOURCELIST_TYPE, PitiviProjectSourceList))
#define PITIVI_PROJECTSOURCELIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PITIVI_PROJECTSOURCELIST_TYPE, PitiviProjectSourceListClass))
#define PITIVI_IS_PROJECTSOURCELIST(obj) (G_TYPE_CHECK_TYPE ((obj), PITIVI_PROJECTSOURCELIST_TYPE))
#define PITIVI_IS_PROJECTSOURCELIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PITIVI_PROJECTSOURCELIST_TYPE))
#define PITIVI_PROJECTSOURCELIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PITIVI_PROJECTSOURCELIST_TYPE, PitiviProjectSourceListClass))

typedef struct _PitiviProjectSourceList PitiviProjectSourceList;
typedef struct _PitiviProjectSourceListClass PitiviProjectSourceListClass;
typedef struct _PitiviProjectSourceListPrivate PitiviProjectSourceListPrivate;
typedef struct _PitiviSourceBin PitiviSourceBin;


struct _PitiviProjectSourceList
{
  GObject parent;

  /* instance public members */

  /* private */
  PitiviProjectSourceListPrivate *private;
};

struct _PitiviProjectSourceListClass
{
  GObjectClass parent;
  /* class members */

};

/* used by PITIVI_PROJECTSOURCELIST_TYPE */
GType pitivi_projectsourcelist_get_type (void);

/*
 * Method definitions.
 */

PitiviProjectSourceList	*pitivi_projectsourcelist_new(void);
gboolean pitivi_projectsourcelist_add_file_to_bin(PitiviProjectSourceList *self, guint bin_pos, gchar *source);
void pitivi_projectsourcelist_new_bin(PitiviProjectSourceList *self, gchar *bin_name);
gchar *pitivi_projectsourcelist_get_file_info(PitiviProjectSourceList *self, guint bin_pos, guint next_file);
/* only for debug */
void	pitivi_projectsourcelist_showfile(PitiviProjectSourceList *self, 
					  guint bin_pos);
#endif
