

BLACK           = $00
WHITE           = $0E
 IF COMPILE_VERSION = NTSC
GREY            = $00
YELLOW          = $10
ORANGE          = $20
RED_ORANGE      = $30
RED             = $40
PURPLE          = $50
VIOLET          = $60
INDIGO          = $70
BLUE            = $80
BLUE2           = $90
TURQUOISE       = $A0
CYAN            = $B0
GREEN           = $C0
YELLOW_GREEN    = $D0
OCHRE_GREEN     = $E0
OCHRE           = $F0
 ELSE
GREY            = $00
YELLOW          = $20   ; no real equivalent
ORANGE          = $20
RED_ORANGE      = $40
RED             = $60
PURPLE          = $80
VIOLET          = $A0
INDIGO          = $C0
BLUE            = $D0
BLUE2           = $B0
TURQUOISE       = $90
CYAN            = $70
GREEN           = $50
YELLOW_GREEN    = $30
OCHRE_GREEN     = $30   ; no real equivalent
OCHRE           = $20   ; no real equivalent
 ENDIF

; #if PAL = 18
; BLACK           = $00
; WHITE           = $0E
; RED             = $62
; GREEN           = $56
; BLUE            = $D6
; YELL            = $2C
; GREY            = $04
; PURPLE          = $84
; ORANGE          = $44
; PINK            = $4C
; LIGHTBLUE       = $D8
; DARKGREEN       = $54
; CYANGREEN	= $74
; DARKBLUE        = $D2
; LIGHTBROWN	= $26
; DARKBROWN	= $24
; MAGENTA		= $84
; #endif

; #if PAL = 17
; BLACK           = $00
; WHITE           = $0C
; RED             = $42
; GREEN           = $C6
; BLUE            = $84
; YELL            = $18
; GREY            = $04
; PURPLE          = $50
; ORANGE          = $36
; PINK            = $3C
; LIGHTBLUE       = $7E
; DARKBLUE        = $90	
; DARKGREEN       = $D4
; CYANGREEN	= $B4
; LIGHTBROWN	= $2F
; DARKBROWN	= $26
; MAGENTA		= $54	
; #endif
