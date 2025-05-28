/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright(c) 2024 Your Name/Company Here  // Replace with actual contributor if known, else use a placeholder
 */

#ifndef _RTE_RING_RTS_TRACE_PVT_H_
#define _RTE_RING_RTS_TRACE_PVT_H_

#include <rte_trace_point.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Tracepoint for __rte_ring_rts_update_tail function events.
 * This helps in debugging the sequence of operations, especially
 * for understanding head/tail counter and position synchronization.
 */
RTE_TRACE_POINT(
	rte_ring_trace_rts_update_tail_event,
	RTE_TRACE_POINT_ARGS(
		uint8_t trace_point_id, /* 0: loop entry, 1: before CAS, 2: CAS failed/re-loop */
		uint32_t ot_cnt,
		uint32_t ot_pos,
		uint32_t h_cnt,
		uint32_t h_pos,
		uint32_t nt_cnt,
		uint32_t nt_pos
	),
	rte_trace_point_emit_u8(trace_point_id);
	rte_trace_point_emit_u32(ot_cnt);
	rte_trace_point_emit_u32(ot_pos);
	rte_trace_point_emit_u32(h_cnt);
	rte_trace_point_emit_u32(h_pos);
	rte_trace_point_emit_u32(nt_cnt);
	rte_trace_point_emit_u32(nt_pos);
)

#ifdef __cplusplus
}
#endif

#endif /* _RTE_RING_RTS_TRACE_PVT_H_ */
