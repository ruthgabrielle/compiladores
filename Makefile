portugolc: lexico.l sintatico.y
	bison -d sintatico.y
	mv sintatico.tab.h sintatico.h
	mv sintatico.tab.c sintatico.c
	flex lexico.l
	mv lex.yy.c lexico.c
	g++ sintatico.c lexico.c -Wall -g -o portugolc -lm

init: portugolc
	rm codigo.c
	./portugolc codigo.prg >> codigo.c

exec: codigo.c
	gcc codigo.c -o programaC
	./programaC

clean: 
	rm lexico.* sintatico.* portugolc
