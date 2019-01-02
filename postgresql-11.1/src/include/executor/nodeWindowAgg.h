/*-------------------------------------------------------------------------
 *
 * nodeWindowAgg.h
 *	  prototypes for nodeWindowAgg.c
 *
 *
 * Portions Copyright (c) 1996-2018, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/include/executor/nodeWindowAgg.h
 *
 *-------------------------------------------------------------------------
 */
#ifndef NODEWINDOWAGG_H
#define NODEWINDOWAGG_H

#include "nodes/execnodes.h"
/* added by qww for windows sample */
double		sample_percent;
extern WindowAggState *ExecInitWindowAgg(WindowAgg *node, EState *estate, int eflags);
extern void ExecEndWindowAgg(WindowAggState *node);
extern void ExecReScanWindowAgg(WindowAggState *node);

#endif							/* NODEWINDOWAGG_H */
