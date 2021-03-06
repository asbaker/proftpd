/*
 * ProFTPD - FTP server daemon
 * Copyright (c) 2001-2011 The ProFTPD Project team
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
 * Foundation, Inc., 51 Franklin Street, Suite 500, Boston, MA 02110-1335, USA.
 *
 * As a special exemption, The ProFTPD Project team and other respective
 * copyright holders give permission to link this program with OpenSSL, and
 * distribute the resulting executable, without including the source code for
 * OpenSSL in the source distribution.
 */

/* Feature list management
 * $Id: feat.h,v 1.5 2011-05-23 20:35:35 castaglia Exp $
 */

#ifndef PR_FEAT_H
#define PR_FEAT_H

int pr_feat_add(const char *);
const char *pr_feat_get(void);
const char *pr_feat_get_next(void);
int pr_feat_remove(const char *);

#endif /* PR_FEAT_H */
