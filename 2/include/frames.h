/*****************************************************************************
*                                                                            *
*  ------------------------------- frames.h -------------------------------  *
*                                                                            *
*****************************************************************************/

#ifndef FRAMES_H
#define FRAMES_H

#include "list.h"

/*****************************************************************************
*                                                                            *
*  --------------------------- Public Interface ---------------------------  *
*                                                                            *
*****************************************************************************/

int alloc_frame(List * frames);

int free_frame(List * frames, int frame_number);

#endif
