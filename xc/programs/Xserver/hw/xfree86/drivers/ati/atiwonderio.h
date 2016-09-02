/* $XFree86: xc/programs/Xserver/hw/xfree86/drivers/ati/atiwonderio.h,v 1.4 2003/01/01 19:16:35 tsi Exp $ */
/*
 * Copyright 2000 through 2003 by Marc Aurele La France (TSI @ UQV), tsi@xfree86.org
 *
 * Permission to use, copy, modify, distribute, and sell this software and its
 * documentation for any purpose is hereby granted without fee, provided that
 * the above copyright notice appear in all copies and that both that copyright
 * notice and this permission notice appear in supporting documentation, and
 * that the name of Marc Aurele La France not be used in advertising or
 * publicity pertaining to distribution of the software without specific,
 * written prior permission.  Marc Aurele La France makes no representations
 * about the suitability of this software for any purpose.  It is provided
 * "as-is" without express or implied warranty.
 *
 * MARC AURELE LA FRANCE DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE,
 * INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS.  IN NO
 * EVENT SHALL MARC AURELE LA FRANCE BE LIABLE FOR ANY SPECIAL, INDIRECT OR
 * CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE,
 * DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef ___ATIWONDERIO_H___

#if !defined(___ATI_H___) && defined(XFree86Module)
# error missing #include "ati.h" before #include "atiwonderio.h"
# undef XFree86Module
#endif

#define ___ATIWONDERIO_H___ 1

#include "atistruct.h"
#include "ativgaio.h"

#ifndef AVOID_CPIO

extern void ATIModifyExtReg FunctionPrototype((ATIPtr, const CARD8, int,
                                               const CARD8, CARD8));

#define ATIGetExtReg(_Index)                    \
    GetReg(pATI->CPIO_VGAWonder, _Index)
#define ATIPutExtReg(_Index, _Value)            \
    PutReg(pATI->CPIO_VGAWonder, _Index, _Value)

#endif /* AVOID_CPIO */

#endif /* ___ATIWONDERIO_H___ */
