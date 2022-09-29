all: clean executable execute

executable: ConversionTest.o Conversion.o TablasDeConversion.o
	gcc -o exe ConversionTest.o Conversion.o TablasDeConversion.o

ConversionTest.o:
	gcc -c ConversionTest.c

Conversion.o:
	gcc -c Conversion.c

TablasDeConversion.o:
	gcc -c TablasDeConversion.c

execute:
	./exe

clean:
	rm -f *.o exe