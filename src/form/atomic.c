
#include "form/atomic.h"

#include "form/generic.h"
#include "parse.h"

const struct formation rv32a[] = {
	{ "lr.w", &form_rtype, &parse_al, { 4, OP_AMO, 0x2, 0x08 } },
	{ "lr.w.rl", &form_rtype, &parse_al, { 4, OP_AMO, 0x2, 0x09 } },
	{ "lr.w.aq", &form_rtype, &parse_al, { 4, OP_AMO, 0x2, 0x0A } },
	{ "lr.w.aqrl", &form_rtype, &parse_al, { 4, OP_AMO, 0x2, 0x0B } },
	{ "sc.w", &form_rtype, &parse_as, { 4, OP_AMO, 0x2, 0x0C } },
	{ "sc.w.rl", &form_rtype, &parse_as, { 4, OP_AMO, 0x2, 0x0D } },
	{ "sc.w.aq", &form_rtype, &parse_as, { 4, OP_AMO, 0x2, 0x0E } },
	{ "sc.w.aqrl", &form_rtype, &parse_as, { 4, OP_AMO, 0x2, 0x0F } },

	{ "amoswap.w", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x04 } },
	{ "amoswap.w.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x05 } },
	{ "amoswap.w.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x06 } },
	{ "amoswap.w.aqrl",
	  &form_rtype,
	  &parse_rtype,
	  { 4, OP_AMO, 0x2, 0x07 } },
	{ "amoadd.w", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x00 } },
	{ "amoadd.w.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x01 } },
	{ "amoadd.w.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x02 } },
	{ "amoadd.w.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x03 } },
	{ "amoxor.w", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x10 } },
	{ "amoxor.w.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x12 } },
	{ "amoxor.w.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x11 } },
	{ "amoxor.w.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x13 } },
	{ "amoor.w", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x20 } },
	{ "amoor.w.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x21 } },
	{ "amoor.w.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x22 } },
	{ "amoor.w.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x23 } },
	{ "amoand.w", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x30 } },
	{ "amoand.w.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x31 } },
	{ "amoand.w.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x32 } },
	{ "amoand.w.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x33 } },
	{ "amomin.w", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x40 } },
	{ "amomin.w.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x41 } },
	{ "amomin.w.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x42 } },
	{ "amomin.w.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x43 } },
	{ "amomax.w", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x50 } },
	{ "amomax.w.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x51 } },
	{ "amomax.w.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x52 } },
	{ "amomax.w.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x53 } },
	{ "amominu.w", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x60 } },
	{ "amominu.w.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x61 } },
	{ "amominu.w.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x62 } },
	{ "amominu.w.aqrl",
	  &form_rtype,
	  &parse_rtype,
	  { 4, OP_AMO, 0x2, 0x63 } },
	{ "amomaxu.w", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x70 } },
	{ "amomaxu.w.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x71 } },
	{ "amomaxu.w.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x2, 0x72 } },
	{ "amomaxu.w.aqrl",
	  &form_rtype,
	  &parse_rtype,
	  { 4, OP_AMO, 0x2, 0x73 } },

	END_FORMATION
};

const struct formation rv64a[] = {
	{ "lr.d", &form_rtype, &parse_al, { 4, OP_AMO, 0x3, 0x08 } },
	{ "lr.d.rl", &form_rtype, &parse_al, { 4, OP_AMO, 0x3, 0x09 } },
	{ "lr.d.aq", &form_rtype, &parse_al, { 4, OP_AMO, 0x3, 0x0A } },
	{ "lr.d.aqrl", &form_rtype, &parse_al, { 4, OP_AMO, 0x3, 0x0B } },
	{ "sc.d", &form_rtype, &parse_as, { 4, OP_AMO, 0x3, 0x0C } },
	{ "sc.d.rl", &form_rtype, &parse_as, { 4, OP_AMO, 0x3, 0x0D } },
	{ "sc.d.aq", &form_rtype, &parse_as, { 4, OP_AMO, 0x3, 0x0E } },
	{ "sc.d.aqrl", &form_rtype, &parse_as, { 4, OP_AMO, 0x3, 0x0F } },

	{ "amoswap.d", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x04 } },
	{ "amoswap.d.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x05 } },
	{ "amoswap.d.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x06 } },
	{ "amoswap.d.aqrl",
	  &form_rtype,
	  &parse_rtype,
	  { 4, OP_AMO, 0x3, 0x07 } },
	{ "amoadd.d", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x00 } },
	{ "amoadd.d.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x01 } },
	{ "amoadd.d.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x02 } },
	{ "amoadd.d.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x03 } },
	{ "amoxor.d", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x10 } },
	{ "amoxor.d.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x12 } },
	{ "amoxor.d.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x11 } },
	{ "amoxor.d.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x13 } },
	{ "amoor.d", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x20 } },
	{ "amoor.d.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x21 } },
	{ "amoor.d.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x22 } },
	{ "amoor.d.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x23 } },
	{ "amoand.d", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x30 } },
	{ "amoand.d.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x31 } },
	{ "amoand.d.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x32 } },
	{ "amoand.d.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x33 } },
	{ "amomin.d", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x40 } },
	{ "amomin.d.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x41 } },
	{ "amomin.d.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x42 } },
	{ "amomin.d.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x43 } },
	{ "amomax.d", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x50 } },
	{ "amomax.d.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x51 } },
	{ "amomax.d.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x52 } },
	{ "amomax.d.aqrl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x53 } },
	{ "amominu.d", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x60 } },
	{ "amominu.d.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x61 } },
	{ "amominu.d.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x62 } },
	{ "amominu.d.aqrl",
	  &form_rtype,
	  &parse_rtype,
	  { 4, OP_AMO, 0x3, 0x63 } },
	{ "amomaxu.d", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x70 } },
	{ "amomaxu.d.rl", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x71 } },
	{ "amomaxu.d.aq", &form_rtype, &parse_rtype, { 4, OP_AMO, 0x3, 0x72 } },
	{ "amomaxu.d.aqrl",
	  &form_rtype,
	  &parse_rtype,
	  { 4, OP_AMO, 0x3, 0x73 } },

	END_FORMATION
};