// Questão 5)

//#include <stdio.h>

//int main ( ) {

//int matriz [ 2 ] [ 2 ] = { {1 , 3} , {5 , 7} };
//int *p1 = &matriz [ 0 ] [ 0 ]; //aponta para 1
//int *p2 = &matriz [ 1 ] [ 0 ]; //aponta para 5
//int **pp1 = &p1 ; // aponta para p1 que é 1
//int **pp2 = &p2 ; //aponta para p2 que é 5
//int ***ppp1 = &pp1 ; //aponta para pp1 que aponta para p1 com o valor de 1

//***ppp1 = 2 ; //ppp1 esta modificando o valor que p1 esta apontando que vai passar a veler 2 logo a matriz sera {2,3}
//*(* pp1 + 2 ) = 4 ; // esta modificando o valor 5 a matriz vai passar a veler {4,7}
//*(* pp2 + 1 ) = 9 ; // pp2 + 1 vai para a posição 2 do vetor = {4,9}

//printf( "%d %d\n" , matriz [ 0 ] [ 0 ] , matriz [ 0 ] [ 1 ] ) ;  //{2,3}
//printf ( "%d %d\n" , matriz [ 1 ] [ 0 ] , matriz [ 1 ] [ 1 ] ) ; //{4,9}

//return 0 ;
//}