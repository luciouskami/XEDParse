#pragma once

struct MnemonicEntry
{
	const char *Name;
	const char *XedName;
};

static MnemonicEntry XedMnemonicTable[] =
{
	{ "retf",	"ret_far"	},
	{ "ret",	"ret_near"	},
	{ "retn",	"ret_near"	},
	{ "call",	"call_near" },
	{ "callf",	"call_far"	},
	{ "jmpf",	"jmp_far"	},
	{ "pushf",	"pushfd"	},
	{ "popf",	"popfd"		},
	{ "pusha",	"pushad"	},
	{ "popa",	"popad"		},

	{ "jnae",	"jb"	},
	{ "jc",		"jb"	},
	{ "jae",	"jnb"	},
	{ "jnc",	"jnb"	},
	{ "je",		"jz"	},
	{ "jne",	"jnz"	},
	{ "jna",	"jbe"	},
	{ "ja",		"jnbe"	},
	{ "jpe",	"jp"	},
	{ "jpo",	"jnp"	},
	{ "jnge",	"jl"	},
	{ "jge",	"jnl"	},
	{ "jng",	"jle"	},
	{ "jg",		"jnle"	},
	{ "jcxz",	"jrcxz" },
	{ "jecxz",	"jrcxz" },

	{ "loopz",	"loope"		},
	{ "loopnz", "loopne"	},

	{ "cmovae",		"cmovb"		},
	{ "cmovc",		"cmovb"		},
	{ "cmovnc",		"cmovnb"	},
	{ "cmovnae",	"cmovnb"	},
	{ "cmove",		"cmovz"		},
	{ "cmovne",		"cmovnz"	},
	{ "cmovna",		"cmovbe"	},
	{ "cmova",		"cmovnbe"	},
	{ "cmovpe",		"cmovp"		},
	{ "cmovpo",		"cmovnp"	},
	{ "cmovnge",	"cmovle"	},
	{ "cmovge",		"cmovnl"	},
	{ "cmovng",		"cmovle"	},
	{ "cmovg",		"cmovnle"	},

	{ "setnae", "setnb"		},
	{ "setc",	"setb"		},
	{ "setae",	"setb"		},
	{ "setnc",	"setnb"		},
	{ "sete",	"setz"		},
	{ "setne",	"setnz"		},
	{ "setna",	"setbe"		},
	{ "seta",	"setnbe"	},
	{ "setpe",	"setp"		},
	{ "setpo",	"setp"		},
	{ "setnge", "setle"		},
	{ "setge",	"setnl"		},
	{ "setng",	"setle"		},
	{ "setg",	"setnle"	},

	{ "outs",	"out"	},
	{ "ins",	"in"	},
	{ "wait",	"mwait" },
	{ "movs",	"mov"	},
	{ "cmps",	"cmp"	},
	{ "xlatb",	"xlat"	},
	{ "icebp",	"int1"	},

	{ "fstenv", "fnstenv"	},
	{ "fstcw",	"fnstcw"	},
	{ "fclex",	"fnclex"	},
	{ "finit",	"fninit"	},
	{ "fsave",	"fnsave"	},
	{ "fstsw",	"fnstsw"	},

	//{ "syscall",	"syscall_amd"	},
	//{ "sysret",	"sysret_amd"	},
};

const char *MnemonicToXed(const char *Mnemonic);