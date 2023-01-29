
#include <8051.h>
#include<lcd.h>


int cont = 0;
int x=0;

void main (){

TMOD = 0x2;
EA = 1;
ET0 = 1;
TH0 = 0x6 ;
TL0 = 0x6;
TR0 = 1;

P0 = 1;
while(1);

}

void contar()  __interrupt (1){
	if(++cont=4){
	++x;
	++cont=0;
	}
	
switch (x){

	case 0: P2 = 0b11111111;
	lcd_init();
 	lcd_puts("0");
	break;

	case 1: P2 = 0b11111110;
	lcd_init();
 	lcd_puts("1");
	break;

	case 2: P2 = 0b11111101;
	lcd_init();
 	lcd_puts("2");
 	break;

	case 3: P2 = 0b11111100;
	lcd_init();
 	lcd_puts("3");
	break;

	case 4: P2 = 0b11111011;
	lcd_init();
 	lcd_puts("4");
	break;

	case 5: P2 = 0b11111010;
	lcd_init();
 	lcd_puts("5");
	break;

	case 6: P2 = 0b11111001;
	lcd_init();
 	lcd_puts("6");
	break;

	case 7: P2 = 0b11111000;
	lcd_init();
 	lcd_puts("7");
	break;

	case 8: P2 = 0b11110111;
	lcd_init();
 	lcd_puts("8");
	break;

	case 9: P2 = 0b11110110;
	lcd_init();
 	lcd_puts("9");
	break;

	case 10: P2 = 0b11110101;
	lcd_init();
 	lcd_puts("10");
	break;

	case 11: P2 = 0b11110100;
	lcd_init();
 	lcd_puts("11");
	break;

	case 12: P2 = 0b11110011;
	lcd_init();
 	lcd_puts("12");
	break;

	case 13: P2 = 0b11110010;
	lcd_init();
 	lcd_puts("13");
	break;

	case 14: P2 = 0b11110001;
	lcd_init();
 	lcd_puts("14");
	break;

	case 15: P2 = 0b11110000;
	lcd_init();
 	lcd_puts("15");
	break;

	case 16: P2 = 0b11101111;
	lcd_init();
 	lcd_puts("16");
	break;

	case 17: P2 = 0b11101110;
	lcd_init();
 	lcd_puts("17");
	break;

	case 18: P2 = 0b11101101;
	lcd_init();
 	lcd_puts("18");
	break;

	case 19: P2 = 0b11101100;
	lcd_init();
 	lcd_puts("19");
	break;

	case 20: P2 = 0b11101011;
	lcd_init();
 	lcd_puts("20");
	break;

	case 21: P2 = 0b11101010;
	lcd_init();
 	lcd_puts("21");
	break;

	case 22: P2 = 0b11101001;
	lcd_init();
 	lcd_puts("22");
	break;

	case 23: P2 = 0b11101000;
	lcd_init();
 	lcd_puts("23");
	break;

	case 24: P2 = 0b11100111;
	lcd_init();
 	lcd_puts("24");
	break;

	case 25: P2 = 0b11100110;
	lcd_init();
 	lcd_puts("25");
	break;

	case 26: P2 = 0b11100101;
	lcd_init();
 	lcd_puts("26");
	break;

	case 27: P2 = 0b11100100;
	lcd_init();
 	lcd_puts("27");
	break;

	case 28: P2 = 0b11100011;
	lcd_init();
 	lcd_puts("28");
	break;

	case 29: P2 = 0b11100010;
	lcd_init();
 	lcd_puts("29");
	break;

	case 30: P2 = 0b11100001;
	lcd_init();
 	lcd_puts("30");
	break;

	case 31: P2 = 0b11100000;
	lcd_init();
 	lcd_puts("31");
	break;

	case 32: P2 = 0b11011111;
	lcd_init();
 	lcd_puts("32");
	break;

	case 33: P2 = 0b11011110;
	lcd_init();
 	lcd_puts("33");
	break;

	case 34: P2 = 0b11011101;
	lcd_init();
 	lcd_puts("34");
	break;

	case 35: P2 = 0b11011100;
	lcd_init();
 	lcd_puts("35");
	break;

	case 36: P2 = 0b11011011;
	lcd_init();
 	lcd_puts("36");
	break;

	case 37: P2 = 0b11011010;
	lcd_init();
 	lcd_puts("37");
	break;

	case 38: P2 = 0b11011001;
	lcd_init();
 	lcd_puts("38");
	break;

	case 39: P2 = 0b11011000;
	lcd_init();
 	lcd_puts("39");
	break;

	case 40: P2 = 0b11010111;
	lcd_init();
 	lcd_puts("40");
	break;

	case 41: P2 = 0b11010110;
	lcd_init();
 	lcd_puts("41");
	break;

	case 42: P2 = 0b11010101;
	lcd_init();
 	lcd_puts("42");
	break;

	case 43: P2 = 0b11010100;
	lcd_init();
 	lcd_puts("43");
	break;

	case 44: P2 = 0b11010011;
	lcd_init();
 	lcd_puts("44");
	break;

	case 45: P2 = 0b11010010;
	lcd_init();
 	lcd_puts("45");
	break;

	case 46: P2 = 0b11010001;
	lcd_init();
 	lcd_puts("46");
	break;

	case 47: P2 = 0b11010000;
	lcd_init();
 	lcd_puts("47");
	break;

	case 48: P2 = 0b11001111;
	lcd_init();
 	lcd_puts("48");
	break;

	case 49: P2 = 0b11001110;
	lcd_init();
 	lcd_puts("49");
	break;

	case 50: P2 = 0b11001101;
	lcd_init();
 	lcd_puts("50");
	break;

	case 51: P2 = 0b11001100;
	lcd_init();
 	lcd_puts("51");
	break;

	case 52: P2 = 0b11001011;
	lcd_init();
 	lcd_puts("52");
	break;

	case 53: P2 = 0b11001010;
	lcd_init();
 	lcd_puts("53");
	break;

	case 54: P2 = 0b11001001;
	lcd_init();
 	lcd_puts("54");
	break;

	case 55: P2 = 0b11001000;
	lcd_init();
 	lcd_puts("55");
	break;

	case 56: P2 = 0b11000111;
	lcd_init();
 	lcd_puts("56");
	break;

	case 57: P2 = 0b11000110;
	lcd_init();
 	lcd_puts("57");
	break;

	case 58: P2 = 0b11000101;
	lcd_init();
 	lcd_puts("58");
	break;

	case 59: P2 = 0b11000100;
	lcd_init();
 	lcd_puts("59");
	break;

	case 60: P2 = 0b11000011;
	lcd_init();
 	lcd_puts("60");
	break;

	case 61: P2 = 0b11000010;
	lcd_init();
 	lcd_puts("61");
	break;

	case 62: P2 = 0b11000001;
	lcd_init();
 	lcd_puts("62");
	break;

	case 63: P2 = 0b11000000;
	lcd_init();
 	lcd_puts("63");
	break;

	case 64: P2 = 0b10111111;
	lcd_init();
 	lcd_puts("64");
	break;

	case 65: P2 = 0b10111110;
	lcd_init();
 	lcd_puts("65");
	x=0;
	break;


}

}
