     AREA     appcode, CODE, READONLY
     EXPORT __main
	 ENTRY 
__main  FUNCTION		         
	 MOV R0,#0x0
	 MOV R1,#0x1
loopA ADD R2,R0,R1
	 MOV R0,R1
	 MOV R1,R2
	 B loopA
	 
	 
stop B stop ; stop program
     ENDFUNC
     END
