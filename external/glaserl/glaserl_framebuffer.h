/*
 * This file is part of NumptyPhysics <http://thp.io/2015/numptyphysics/>
 * Coyright (c) 2014 Thomas Perl <m@thp.io>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 3 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 */

#ifndef GLASERL_FRAMEBUFFER_H
#define GLASERL_FRAMEBUFFER_H

#include "glaserl_gl.h"
#include "glaserl_texture.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct glaserl_framebuffer_t {
    int width;
    int height;

    GLuint id;

    GLint old_framebuffer;
    GLint old_viewport[4];
};

typedef struct glaserl_framebuffer_t glaserl_framebuffer_t;

glaserl_framebuffer_t *
glaserl_framebuffer_new(int width, int height);

void
glaserl_framebuffer_attach(glaserl_framebuffer_t *framebuffer,
        glaserl_texture_t *texture);

void
glaserl_framebuffer_enable(glaserl_framebuffer_t *framebuffer);

void
glaserl_framebuffer_disable(glaserl_framebuffer_t *framebuffer);

void
glaserl_framebuffer_destroy(glaserl_framebuffer_t *framebuffer);

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* GLASERL_FRAMEBUFFER_H */
