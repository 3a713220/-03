#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	double m;
    double p1 , p2 , p3 , p4 , p5 , pt ;
    printf ("請輸入您的獎金:" ) ;
    scanf ( "%lf" ,& m ) ;
    p1 = 100000 * 0.1 ;
    p2 = p1+100000 * 0.075 ;
    p3 = p2 + 200000 * 0.05 ;
    p4 = p3 + 200000 * 0.03 ;
    p5 = p4 + 400000 * 0.015 ;
    if ( m <= 100000 )
    {
	pt=m*0.1;
	printf("企業發放的獎金利潤:%lf",pt);
	}
	else if ( m <= 200000 )
    {
	pt=p3+(m-200000)*0.075;
	printf("企業發放的獎金利潤:%lf",pt);
	}
	else if ( m <= 600000 )
    {
	pt=p3+(m-400000)*0.03;
	printf("企業發放的獎金利潤:%lf",pt);
	}
	else if ( m <= 1000000 )
    {
	pt=p4+(m-600000)*0.015;
	printf("企業發放的獎金利潤:%lf",pt);
	}
	else if ( m > 1000000 )
    {
	pt=p5+(m-1000000)*0.01;
	printf("企業發放的獎金利潤:%lf",pt);
	}
}
