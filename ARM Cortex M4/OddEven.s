     AREA     appcode, CODE, READONLY
     EXPORT __main
	 ENTRY 
__main  FUNCTION		         
	 MOV R0,#0x1233
	 MOV R1,#0x2
	 MOV R5,#0x0
	 UDIV R2,R0,R1
	 MUL R3,R2,R1
	 SUB R4,R0,R3
	 CMPS R4,R5
	 
stop B stop ; stop program
     ENDFUNC
     END
