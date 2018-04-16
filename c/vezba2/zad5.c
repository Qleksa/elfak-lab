#include <stdio.h>
// zbir cifara B i B u bin, oct i hex
void main()
{
	int i, b, p; // OPSTE VARIJABLE
	int s = 0;		   // CIFRE
	int ozb, bin = 0;  // BIN
	int ozo, oct = 0;  // OCT
	int ozh;  // HEX

	printf("b = ");
	scanf("%d", &b);

	// ZBIR CIFARA
	p = b;
	while (p != 0) {
		s += p % 10;
		p /= 10;
	}
	printf("s = %d\n", s);

	// BIN
	p = b, i = 1;
	while (p != 0) {
		ozb = p % 2;
		p /= 2;
		bin += ozb * i;
		i *= 10;
	}
	printf("bin = %d\n", bin);

	// OCT
	p = b, i = 1;
	while (p != 0) {
		ozo = p % 8;
		p /= 8;
		oct += ozo * i;
		i *= 10;
	}
	printf("oct = %d\n", oct);

	//HEX U REDOSLEDU KOJIM SE DOBIJAJU
	p = b; i = 1;
	while (p != 0) {
        ozh = p % 16;
        p /= 16;
        switch (ozh){
            case 10:
                {
                    printf("A");
                    break;
                }
            case 11:
                {
                    printf("B");
                    break;
                }
            case 12:
                {
                    printf("C");
                    break;
                }
            case 13:
                {
                    printf("D");
                    break;
                }
            case 14:
                {
                    printf("E");
                    break;
                }
            case 15:
                {
                    printf("F");
                    break;
                }
            default:
                printf("%d", ozh);
        }

	}
}
