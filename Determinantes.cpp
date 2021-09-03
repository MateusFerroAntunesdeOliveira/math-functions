#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main ()
{
    //-> Variaveis
    int a11, a12, a13, a14, a21, a22, a23, a24, a31, a32, a33, a34, a41, a42, a43, a44, n;
    
    //-> Entrada de dados
    printf ("Escolha um numero"
    "\n 1.Determinante 1X1"
    "\n 2.Determinante 2X2"
    "\n 3.Determinante 3X3"
    "\n 4.Determinante 4X4\n"
    
    );
    scanf ("%d", &n);
    //-> Processamento de dados
    
    switch (n) {
        case 1:
            printf ("Quanto vale a11:");
            scanf ("%d", &a11);
            printf ("Sua determinante de 1x1 vale: %d\n", a11*a11);
            break;
        case 2:
            printf ("Entre com o a11: "); 
            scanf ("%d", &a11);
            printf ("Entre com o a12: "); 
            scanf ("%d", &a12);
            printf ("Entre com o a21: "); 
            scanf ("%d", &a21);
            printf ("Entre com o a22: "); 
            scanf ("%d", &a22);
            printf ("O determinante 2x2 vale: %d\n", a11*a22 - a12*a21);
            break;
        case 3:
            printf ("Entre com o a11: "); 
            scanf ("%d", &a11);
            printf ("Entre com o a12: "); 
            scanf ("%d", &a12);
            printf ("Entre com o a13: "); 
            scanf ("%d", &a13);
            printf ("Entre com o a21: "); 
            scanf ("%d", &a21);
            printf ("Entre com o a22: "); 
            scanf ("%d", &a22);
            printf ("Entre com o a23: "); 
            scanf ("%d", &a23);
            printf ("Entre com o a31: "); 
            scanf ("%d", &a31);
            printf ("Entre com o a32: "); 
            scanf ("%d", &a32);
            printf ("Entre com o a33: "); 
            scanf ("%d", &a33);
            printf ("O determinante 3x3 vale: %d\n", a11*a22*a33 + a12*a23*a31 + a21*a32*a13 - a13*a22*a31 - a12*a21*a33 - a11*a23*a32);
            break;
        case 4:
            printf ("Entre com o a11: "); 
            scanf ("%d", &a11);
            printf ("Entre com o a12: "); 
            scanf ("%d", &a12);
            printf ("Entre com o a13: "); 
            scanf ("%d", &a13);
            printf ("Entre com o a14: "); 
            scanf ("%d", &a14);
            printf ("Entre com o a21: "); 
            scanf ("%d", &a21);
            printf ("Entre com o a22: "); 
            scanf ("%d", &a22);
            printf ("Entre com o a23: "); 
            scanf ("%d", &a23);
            printf ("Entre com o a24: "); 
            scanf ("%d", &a24);
            printf ("Entre com o a31: "); 
            scanf ("%d", &a31);
            printf ("Entre com o a32: "); 
            scanf ("%d", &a32);
            printf ("Entre com o a33: "); 
            scanf ("%d", &a33);
            printf ("Entre com o a34: "); 
            scanf ("%d", &a34);
            printf ("Entre com o a41: "); 
            scanf ("%d", &a41);
            printf ("Entre com o a42: "); 
            scanf ("%d", &a42);
            printf ("Entre com o a43: "); 
            scanf ("%d", &a43);
            printf ("Entre com o a44: "); 
            scanf ("%d", &a44);                                                                   
            printf ("O seu determinante 4X4 vale: %d\n", 
            -a14*(a21*a32*a43+a22*a33*a41+a31*a42*a23-a23*a32*a41-a22*a31*a43-a21*a33*a42)
            + a24*(a11*a32*a43+a12*a33*a41+a31*a42*a13-a13*a32*a41-a12*a31*a43-a11*a33*a42) 
            - a34*(a11*a22*a43+a12*a23*a41+a21*a42*a13-a13*a22*a41-a12*a21*a43-a11*a23*a42) 
            + a44*(a11*a22*a33+a12*a23*a31+a21*a32*a13-a13*a22*a31-a12*a21*a33-a11*a23*a32) ); 
                 
    }
    system ("pause");
}
