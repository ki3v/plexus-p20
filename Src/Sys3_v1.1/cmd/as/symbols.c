#
#include <stdio.h>
#include "common.decs"
#include "condcode.decs"
#include "mask.decs"
#include "symbol.decs"
#include "symtab.decs"
#include "token.decs"
 

char symtab [] = {      0, 0,

CWORD,	 0, 0, 0, 0, CHARV,		 4,'C','H','A','R',0,
CWORD,	 0, 0, 0, 0, DOUBLEV,	 6,'D','O','U','B','L','E',0,
CWORD,	 0, 0, 0, 0, EXTERNV,	 6,'E','X','T','E','R','N',0,
CWORD,	 0, 0, 0, 0, FLOATV,	 5,'F','L','O','A','T',
CWORD,	 0, 0, 0, 0, INTV,		 3,'I','N','T',
CWORD,	 0, 0, 0, 0, LONGV,		 4,'L','O','N','G',0,
CWORD,	 0, 0, 0, 0, SHORTV,	 5,'S','H','O','R','T',
CWORD,	 0, 0, 0, 0, SIZEOFV,	 6,'S','I','Z','E','O','F',0,
CWORD,	 0, 0, 0, 0, STRUCTV,	 6,'S','T','R','U','C','T',0,
CWORD,	 0, 0, 0, 0, TYPEDEFV,	 7,'T','Y','P','E','D','E','F',
CWORD,	 0, 0, 0, 0, UNIONV,	 5,'U','N','I','O','N',
CWORD,	 0, 0, 0, 0, DOTV,		 1,'.',
CWORD,	 0, 0, 0, 0, DOTDOTV,	 2,'.','.',0,
CWORD,	 0, 0, 0, 0, TILDEV,	 1,'~',

REG,	 0, 0, 0, 0, 0X00,		 2,'R','0',0,
REG,	 0, 0, 0, 0, 0X01,		 2,'R','1',0,
REG,	 0, 0, 0, 0, 0X02,		 2,'R','2',0,
REG,	 0, 0, 0, 0, 0X03,		 2,'R','3',0,
REG,	 0, 0, 0, 0, 0X04,		 2,'R','4',0,
REG,	 0, 0, 0, 0, 0X05,		 2,'R','5',0,
REG,	 0, 0, 0, 0, 0X06,		 2,'R','6',0,
REG,	 0, 0, 0, 0, 0X07,		 2,'R','7',0,
REG,	 0, 0, 0, 0, 0X08,		 2,'R','8',0,
REG,	 0, 0, 0, 0, 0X09,		 2,'R','9',0,
REG,	 0, 0, 0, 0, 0X0A,		 3,'R','1','0',
REG,	 0, 0, 0, 0, 0X0B,		 3,'R','1','1',
REG,	 0, 0, 0, 0, 0X0C,		 3,'R','1','2',
REG,	 0, 0, 0, 0, 0X0D,		 3,'R','1','3',
REG,	 0, 0, 0, 0, 0X0E,		 3,'R','1','4',
REG,	 0, 0, 0, 0, 0X0F,		 3,'R','1','5',

FREG,	 0, 0, 0, 0, 0X00,		3,'F','R','0',
FREG,	 0, 0, 0, 0, 0X01,		3,'F','R','1',
 
REGPAIR, 0, 0, 0, 0, 0X00,		 3,'R','R','0',
REGPAIR, 0, 0, 0, 0, 0X02,		 3,'R','R','2',
REGPAIR, 0, 0, 0, 0, 0X04,		 3,'R','R','4',
REGPAIR, 0, 0, 0, 0, 0X06,		 3,'R','R','6',
REGPAIR, 0, 0, 0, 0, 0X08,		 3,'R','R','8',
REGPAIR, 0, 0, 0, 0, 0X0A,		 4,'R','R','1','0',0,
REGPAIR, 0, 0, 0, 0, 0X0C,		 4,'R','R','1','2',0,
REGPAIR, 0, 0, 0, 0, 0X0E,		 4,'R','R','1','4',0,

REGQUAD, 0, 0, 0, 0, 0X00,		 3,'R','Q','0',
REGQUAD, 0, 0, 0, 0, 0X04,		 3,'R','Q','4',
REGQUAD, 0, 0, 0, 0, 0X08,		 3,'R','Q','8',
REGQUAD, 0, 0, 0, 0, 0X0C,		 4,'R','Q','1','2',0,

REGHILO, 0, 0, 0, 0, 0X00,		 3,'R','H','0',
REGHILO, 0, 0, 0, 0, 0X01,		 3,'R','H','1',
REGHILO, 0, 0, 0, 0, 0X02,		 3,'R','H','2',
REGHILO, 0, 0, 0, 0, 0X03,		 3,'R','H','3',
REGHILO, 0, 0, 0, 0, 0X04,		 3,'R','H','4',
REGHILO, 0, 0, 0, 0, 0X05,		 3,'R','H','5',
REGHILO, 0, 0, 0, 0, 0X06,		 3,'R','H','6',
REGHILO, 0, 0, 0, 0, 0X07,		 3,'R','H','7',
REGHILO, 0, 0, 0, 0, 0X08,		 3,'R','L','0',
REGHILO, 0, 0, 0, 0, 0X09,		 3,'R','L','1',
REGHILO, 0, 0, 0, 0, 0X0A,		 3,'R','L','2',
REGHILO, 0, 0, 0, 0, 0X0B,		 3,'R','L','3',
REGHILO, 0, 0, 0, 0, 0X0C,		 3,'R','L','4',
REGHILO, 0, 0, 0, 0, 0X0D,		 3,'R','L','5',
REGHILO, 0, 0, 0, 0, 0X0E,		 3,'R','L','6',
REGHILO, 0, 0, 0, 0, 0X0F,		 3,'R','L','7',

CNDCODE, 0, 0, 0, 0, NZ,		 2,'N','Z',0,
CNDCODE, 0, 0, 0, 0, 16*ZF+Z,	 1,'Z',
CNDCODE, 0, 0, 0, 0, NC,		 2,'N','C',0,
CNDCODE, 0, 0, 0, 0, 16*CF+C,	 1,'C',
CNDCODE, 0, 0, 0, 0, PL,		 2,'P','L',0,
CNDCODE, 0, 0, 0, 0, MI,		 2,'M','I',0,
CNDCODE, 0, 0, 0, 0, NE,		 2,'N','E',0,
CNDCODE, 0, 0, 0, 0, EQ,		 2,'E','Q',0,
CNDCODE, 0, 0, 0, 0, PE,		 2,'P','E',0,
CNDCODE, 0, 0, 0, 0, PO,		 2,'P','O',0,
CNDCODE, 0, 0, 0, 0, NOV,		 3,'N','O','V',
CNDCODE, 0, 0, 0, 0, OV,		 2,'O','V',0,
CNDCODE, 0, 0, 0, 0, GE,		 2,'G','E',0,
CNDCODE, 0, 0, 0, 0, LT,		 2,'L','T',0,
CNDCODE, 0, 0, 0, 0, GT,		 2,'G','T',0,
CNDCODE, 0, 0, 0, 0, LE,		 2,'L','E',0,
CNDCODE, 0, 0, 0, 0, UGE,		 3,'U','G','E',
CNDCODE, 0, 0, 0, 0, ULT,		 3,'U','L','T',
CNDCODE, 0, 0, 0, 0, UGT,		 3,'U','G','T',
CNDCODE, 0, 0, 0, 0, ULE,		 3,'U','L','E',
CNDCODE, 0, 0, 0, 0, 16*SF,		 1,'S',
CNDCODE, 0, 0, 0, 0, 16*PF,		 1,'P',
CNDCODE, 0, 0, 0, 0, 16*VF,		 1,'V',

CTLREG,	 0, 0, 0, 0, FCW,		 3,'F','C','W',
CTLREG,	 0, 0, 0, 0, REFRESH,	 7,'R','E','F','R','E','S','H',
CTLREG,	 0, 0, 0, 0, PSAP,		 4,'P','S','A','P',0,
CTLREG,	 0, 0, 0, 0, PSAPSEG,	 7,'P','S','A','P','S','E','G',
CTLREG,	 0, 0, 0, 0, PSAPOFF,	 7,'P','S','A','P','O','F','F',
CTLREG,	 0, 0, 0, 0, NSP,		 3,'N','S','P',
CTLREG,	 0, 0, 0, 0, NSPSEG,	 6,'N','S','P','S','E','G',0,
CTLREG,	 0, 0, 0, 0, NSPOFF,	 6,'N','S','P','O','F','F',0,

FLAGREG, 0, 0, 0, 0, 0, 		 5,'F','L','A','G','S',

INTRPT,	 0, 0, 0, 0, NVI,		 3,'N','V','I',
INTRPT,	 0, 0, 0, 0, VI,		 2,'V','I',0,

CONTROL, 0, 0, 0, 0, CASCIIV,	 6,'.','A','S','C','I','I',0,
CONTROL, 0, 0, 0, 0, CASCIIZV,	 7,'.','A','S','C','I','I','Z',
CONTROL, 0, 0, 0, 0, CBSSV,		 4,'.','B','S','S',0,
CONTROL, 0, 0, 0, 0, CBYTEV,	 5,'.','B','Y','T','E',
CONTROL, 0, 0, 0, 0, CCOMMV,	 5,'.','C','O','M','M',
CONTROL, 0, 0, 0, 0, CDATAV,	 5,'.','D','A','T','A',
CONTROL, 0, 0, 0, 0, CENDIFV,	 6,'.','E','N','D','I','F',0,
CONTROL, 0, 0, 0, 0, CEVENV,	 5,'.','E','V','E','N',
CONTROL, 0, 0, 0, 0, CGLOBLV,	 6,'.','G','L','O','B','L',0,
CONTROL, 0, 0, 0, 0, CIFV,		 3,'.','I','F',
CONTROL, 0, 0, 0, 0, CLISTOFFV,	 8,'.','L','I','S','T','O','F','F',0,
CONTROL, 0, 0, 0, 0, CLISTONV,	 7,'.','L','I','S','T','O','N',
CONTROL, 0, 0, 0, 0, CLONGV,	 5,'.','L','O','N','G',
CONTROL, 0, 0, 0, 0, CORGV,		 4,'.','O','R','G',0,
CONTROL, 0, 0, 0, 0, CPAGEV,	 5,'.','P','A','G','E',
CONTROL, 0, 0, 0, 0, CTEXTV,	 5,'.','T','E','X','T',
CONTROL, 0, 0, 0, 0, CWORDV,	 5,'.','W','O','R','D',
};

