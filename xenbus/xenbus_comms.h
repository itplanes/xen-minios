/*
 * Private include for xenbus communications.
 * 
 * Copyright (C) 2005 Rusty Russell, IBM Corporation
 *
 * This file may be distributed separately from the Linux kernel, or
 * incorporated into other software packages, subject to the following license:
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this source file (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy, modify,
 * merge, publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

#ifndef _XENBUS_COMMS_H
#define _XENBUS_COMMS_H

int xb_init_comms(void);
void xb_suspend_comms(void);

/* Low level routines. */
int xb_write(const void *data, unsigned len);
int xb_read(void *data, unsigned len);
int xs_input_avail(void);
extern struct wait_queue_head xb_waitq;

#endif /* _XENBUS_COMMS_H */
