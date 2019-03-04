/* t.c - polecenie t wyswietla liczbe i rozmiary blokow wolnych */
#include <stdio.h>
#include <unistd.h>
#include <lib.h>
PUBLIC int hole_map( void *buffer, size_t nbytes)
{
	/* ... _syscall(..HOLE_MAP..) ... */
	message m;
	m.m1_p1=(char *)buffer;
	m.m1_i1=nbytes;
	return _syscall(MM,HOLE_MAP, &m);
	
}
int
main( void )
{
	unsigned int b[1024];
	unsigned int *p, a, l;
	int res;
	res = hole_map( b, sizeof( b ) );
	printf( "[%d]\t", res );
	p = b;
	while( *p )
	{
		l = *p++;
		a = *p++; /* tu niewykorzystywane */
	/*	printf("%d(%d) ", l,a );*/
		printf("(%d) ",a);
	}
	printf( "\n" );
	return 0;
} 
