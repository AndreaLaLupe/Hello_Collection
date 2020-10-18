.model small		
.data 		
	HELLO DB 'Hello World!$'
.stack							
.code							

program:
		MOV AX, @DATA			
		MOV DS, AX
		
		;Print string

		MOV DX, offset HELLO
		MOV AH, 09h
		INT 21h
		
		XOR DX, DX
		
		MOV AH, 4Ch				
		INT 21h			
END program				