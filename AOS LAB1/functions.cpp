#include "functions.h"

using namespace std;

double v[5][4];

void Int() {
	int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20;
	int b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15, b16, b17, b18, b19, b20;
	int c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20;

	{
		a1 = 1458, a2 = 2679, a3 = 3579, a4 = 4764, a5 = 5345, a6 = 6134, a7 = 7154, a8 = 8654,	a9 = 9345, a10 = 1067;
		a11 = 3411, a12 = 4512, a13 = 7813, a14 = 1984, a15 = 155, a16 = 1611, a17 = 2917, a18 = 1878, a19 = 9819, a20 = 2098;
		b1 = 2000, b2 = 2346, b3 = 6578, b4 = 4574, b5 = 782, b6 = 1590, b7 = 988, b8 = 6986, b9 = 1984, b10 = 8982;
		b11 = 9980, b12 = 6978, b13 = 5976, b14 = 7974, b15 = 4972, b16 = 3970, b17 = 3968, b18 = 9966, b19 = 5964, b20 = 7962;
		c1 = 230, c2 = 233, c3 = 236, c4 = 239, c5 = 242, c6 = 245, c7 = 248, c8 = 251, c9 = 254, c10 = 257;
		c11 = 260, c12 = 263, c13 = 266, c14 = 269, c15 = 272, c16 = 275, c17 = 278, c18 = 281, c19 = 284, c20 = 287;
	}
	double tEmpty1 = clock();
	for (long int i = 0; i < n; i++)
	{
		a1 = a20, a2 = a19, a3 = a18, a4 = a17, a5 = a16, a6 = a15, a7 = a14, a8 = a13, a9 = a12, a10 = a11;
		a11 = a10, a12 = a9; a13 = a8, a14 = a7, a15 = a6, a16 = a5, a17 = a4; a18 = a3, a19 = a2, a20 = a1;
		b1 = b20, b2 = b19, b3 = b18, b4 = b17, b5 = b16, b6 = b15,	b7 = b14, b8 = b13, b9 = b12, b10 = b11;
		b11 = b10, b12 = b9, b13 = b8, b14 = b7, b15 = b6, b16 = b5, b17 = b4, b18 = b3, b19 = b2, b20 = b1;
		c1 = c10, c2 = c9, c3 = c8, c4 = c7, c5 = c6, c6 = c5, c7 = c4, c8 = c3, c9 = c2, c10 = c1;
		c11 = c20, c12 = c19, c13 = c18, c14 = c17, c15 = c16, c16 = c15, c17 = c14, c18 = c13, c19 = c12, c20 = c11;
	}
	double tEmpty2 = clock();
	double tEmpty = (double)(tEmpty2 - tEmpty1) / CLOCKS_PER_SEC;
	
	double tPlus1 = clock();
	for (long int i = 0; i < n - 1000000; i++)
	{
		a1 = b1 + c1;
		b1 = a1 + c2;
		c1 = a1 + b2;

		a2 = b2 + c3;
		b2 = a2 + c3;
		c2 = a2 + b3;

		a3 = b3 + c2;
		b3 = a3 + c1;
		c3 = a3 + b5;

		a4 = b4 + c2;
		b4 = a4 + c3;
		c4 = a4 + b9;

		a5 = b5 + c2;
		b5 = a5 + c3;
		c5 = a5 + b4;

		a6 = b6 + c7;
		b6 = a6 + c8;
		c6 = a6 + b9;

		a7 = b7 + c6;
		b7 = a7 + c8;
		c7 = a7 + b6;

		a8 = b8 + c1;
		b8 = a8 + c2;
		c8 = a8 + b4;

		a9 = b9 + c3;
		b9 = a9 + c5;
		c9 = a9 + b6;

		a10 = b10 + c10;
		b10 = a10 + c7;
		c10 = a10 + b10;

		a1 = b1 + c1;
		b1 = a1 + c1;
		c1 = a1 + b1;

		a2 = b2 + c2;
		b2 = a2 + c2;
		c2 = a2 + b2;

		a3 = b3 + c3;
		b3 = a3 + c3;
		c3 = a3 + b3;

		a4 = b4 + c4;
		b4 = a4 + c4;
		c4 = a4 + b4;

		a5 = b5 + c5;
		b5 = a5 + c5;
		c5 = a5 + b5;

		a6 = b6 + c6;
		b6 = a6 + c6;
		c6 = a6 + b6;

		a7 = b7 + c7;
		b7 = a7 + c7;
		c7 = a7 + b7;

		a8 = b8 + c8;
		b8 = a8 + c8;
		c8 = a8 + b8;

		a9 = b9 + c9;
		b9 = a9 + c9;
		c9 = a9 + b9;

		a10 = b10 + c10;
		b10 = a10 + c10;
		c10 = a10 + b10;
	}
	double tPlus2 = clock();
	double tPlus = (double)(tPlus2 - tPlus1 - tEmpty) / CLOCKS_PER_SEC;
	v[0][0] = 60 * n / tPlus;
	
	double tMinus1 = clock();
	for (long int i = 0; i < n - 1000000; i++)
	{
		a1 = b1 - c1;
		b1 = a1 - c2;
		c1 = a1 - b2;

		a2 = b2 - c3;
		b2 = a2 - c3;
		c2 = a2 - b3;

		a3 = b3 - c2;
		b3 = a3 - c1;
		c3 = a3 - b5;

		a4 = b4 - c2;
		b4 = a4 - c3;
		c4 = a4 - b9;

		a5 = b5 - c2;
		b5 = a5 - c3;
		c5 = a5 - b4;

		a6 = b6 - c7;
		b6 = a6 - c8;
		c6 = a6 - b9;

		a7 = b7 - c6;
		b7 = a7 - c8;
		c7 = a7 - b6;

		a8 = b8 - c1;
		b8 = a8 - c2;
		c8 = a8 - b4;

		a9 = b9 - c3;
		b9 = a9 - c5;
		c9 = a9 - b6;

		a10 = b10 - c10;
		b10 = a10 - c7;
		c10 = a10 - b10;

		a1 = b1 - c1;
		b1 = a1 - c1;
		c1 = a1 - b1;

		a2 = b2 - c2;
		b2 = a2 - c2;
		c2 = a2 - b2;

		a3 = b3 - c3;
		b3 = a3 - c3;
		c3 = a3 - b3;

		a4 = b4 - c4;
		b4 = a4 - c4;
		c4 = a4 - b4;

		a5 = b5 - c5;
		b5 = a5 - c5;
		c5 = a5 - b5;

		a6 = b6 - c6;
		b6 = a6 - c6;
		c6 = a6 - b6;

		a7 = b7 - c7;
		b7 = a7 - c7;
		c7 = a7 - b7;

		a8 = b8 - c8;
		b8 = a8 - c8;
		c8 = a8 - b8;

		a9 = b9 - c9;
		b9 = a9 - c9;
		c9 = a9 - b9;

		a10 = b10 - c10;
		b10 = a10 - c10;
		c10 = a10 - b10;
	}

	double tMinus2 = clock();
	double tMinus = (double)(tMinus2 - tMinus1 - tEmpty) / CLOCKS_PER_SEC;
	v[0][1] = 60 * n / tMinus;

	double tMult1 = clock();
	for (long int i = 0; i < n + 1000000; i++)
	{
		a1 = b1 * c1;
		b1 = a1 * c2;
		c1 = a1 * b2;

		a2 = b2 * c3;
		b2 = a2 * c3;
		c2 = a2 * b3;

		a3 = b3 * c2;
		b3 = a3 * c1;
		c3 = a3 * b5;

		a4 = b4 * c2;
		b4 = a4 * c3;
		c4 = a4 * b9;

		a5 = b5 * c2;
		b5 = a5 * c3;
		c5 = a5 * b4;

		a6 = b6 * c7;
		b6 = a6 * c8;
		c6 = a6 * b9;

		a7 = b7 * c6;
		b7 = a7 * c8;
		c7 = a7 * b6;

		a8 = b8 * c1;
		b8 = a8 * c2;
		c8 = a8 * b4;

		a9 = b9 * c3;
		b9 = a9 * c5;
		c9 = a9 * b6;

		a10 = b10 * c10;
		b10 = a10 * c7;
		c10 = a10 * b10;

		a1 = b1 * c1;
		b1 = a1 * c1;
		c1 = a1 * b1;

		a2 = b2 * c2;
		b2 = a2 * c2;
		c2 = a2 * b2;

		a3 = b3 * c3;
		b3 = a3 * c3;
		c3 = a3 * b3;

		a4 = b4 * c4;
		b4 = a4 * c4;
		c4 = a4 * b4;

		a5 = b5 * c5;
		b5 = a5 * c5;
		c5 = a5 * b5;

		a6 = b6 * c6;
		b6 = a6 * c6;
		c6 = a6 * b6;

		a7 = b7 * c7;
		b7 = a7 * c7;
		c7 = a7 * b7;

		a8 = b8 * c8;
		b8 = a8 * c8;
		c8 = a8 * b8;

		a9 = b9 * c9;
		b9 = a9 * c9;
		c9 = a9 * b9;

		a10 = b10 * c10;
		b10 = a10 * c10;
		c10 = a10 * b10;


	}
	double tMult2 = clock();
	double tMult = (double)(tMult2 - tMult1 - tEmpty) / CLOCKS_PER_SEC;
	v[0][2] = 60 * (n) / tMult;


	a1 = 1458;
	a2 = 2679;
	a3 = 3579;
	a4 = 4764;
	a5 = 5345;
	a6 = 6134;
	a7 = 7154;
	a8 = 8654;
	a9 = 9345;
	a10 = 1067;
	a11 = 3411;
	a12 = 4512;
	a13 = 7813;
	a14 = 1984;
	a15 = 155;
	a16 = 1611;
	a17 = 2917;
	a18 = 1878;
	a19 = 9819;
	a20 = 2098;



	b1 = 2000;
	b2 = 2346;
	b3 = 6578;
	b4 = 4574;
	b5 = 782;
	b6 = 1590;
	b7 = 988;
	b8 = 6986;
	b9 = 1984;
	b10 = 8982;
	b11 = 9980;
	b12 = 6978;
	b13 = 5976;
	b14 = 7974;
	b15 = 4972;
	b16 = 3970;
	b17 = 3968;
	b18 = 9966;
	b19 = 5964;
	b20 = 7962;



	c1 = 230;
	c2 = 233;
	c3 = 236;
	c4 = 239;
	c5 = 242;
	c6 = 245;
	c7 = 248;
	c8 = 251;
	c9 = 254;
	c10 = 257;
	c11 = 260;
	c12 = 263;
	c13 = 266;
	c14 = 269;
	c15 = 272;
	c16 = 275;
	c17 = 278;
	c18 = 281;
	c19 = 284;
	c20 = 287;


	double tDiv1 = clock();
	for (long int i = 0; i < n; i++)
	{
		a1 = b1 / c1;                                                                                                          a1 = b1; //cout<<'+'<<endl;
		b1 = a1 / c1;                                                                                                          b1 = c1; //cout<<'+'<<endl;
		c1 = a1 / b1;                                                                                                          c1 = a1; //cout<<'+'<<endl;

		a2 = b2 / c2;                                                                                                          a2 = b2; //cout<<'+'<<endl;
		b2 = a2 / c2;                                                                                                          b2 = c2; //cout<<'+'<<endl;
		c2 = a2 / b2;                                                                                                          c2 = a2; //cout<<'+'<<endl;

		a3 = b3 / c3;                                                                                                          a3 = b3; //cout<<'+'<<endl;
		b3 = a3 / c3;                                                                                                          b3 = c3; //cout<<'+'<<endl;
		c3 = a3 / b3;                                                                                                          c3 = a3; //cout<<'+'<<endl;

		a4 = b4 / c4;                                                                                                          a4 = b4; //cout<<'+'<<endl;
		b4 = a4 / c4;                                                                                                          b4 = c4; //cout<<'+'<<endl;
		c4 = a4 / b4;                                                                                                          c4 = a4; //cout<<'+'<<endl;

		a5 = b5 / c5;                                                                                                          a5 = b5; //cout<<'+'<<endl;
		b5 = a5 / c5;                                                                                                          b5 = c5; //cout<<'+'<<endl;
		c5 = a5 / b5;                                                                                                          c5 = a5; //cout<<'+'<<endl;

		a6 = b6 / c6;                                                                                                          a6 = b6; //cout<<'+'<<endl;
		b6 = a6 / c6;                                                                                                          b6 = c6; //cout<<'+'<<endl;
		c6 = a6 / b6;                                                                                                          c6 = a6; //cout<<'+'<<endl;

		a7 = b7 / c7;                                                                                                          a7 = b7; //cout<<'+'<<endl;
		b7 = a7 / c7;                                                                                                          b7 = c7; //cout<<'+'<<endl;
		c7 = a7 / b7;                                                                                                          c7 = a7; //cout<<'+'<<endl;

		a8 = b8 / c8;                                                                                                          a8 = b8; //cout<<'+'<<endl;
		b8 = a8 / c8;                                                                                                          b8 = c8; //cout<<'+'<<endl;
		c8 = a8 / b8;                                                                                                          c8 = a8; //cout<<'+'<<endl;

		a9 = b9 / c9;                                                                                                          a9 = b9; //cout<<'+'<<endl;
		b9 = a9 / c9;                                                                                                          b9 = c9; //cout<<'+'<<endl;
		c9 = a9 / b9;                                                                                                          c9 = a9; //cout<<'+'<<endl;

		a10 = b10 / c10;                                                                                                       a10 = b10; //cout<<'+'<<endl;
		b10 = a10 / c10;                                                                                                       b10 = c10; //cout<<'+'<<endl;
		c10 = a10 / b10;                                                                                                       c10 = a10; //cout<<'+'<<endl;
	}
	double tDiv2 = clock();
	double tDiv = (double)(tDiv2 - tDiv1 - 2 * tEmpty) / CLOCKS_PER_SEC;
	v[0][3] = 30 * n / tDiv;
}

void Long() {
	{
		long a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20;
		long b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15, b16, b17, b18, b19, b20;
		long c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20;
		double tEmpty1 = clock();
		for (long int i = 0; i<n; i++)
		{
			a1 = 145865522;
			a2 = 267965421;
			a3 = 3579321684;
			a4 = 476412335;
			a5 = 534578521;
			a6 = 6134112258;
			a7 = 715412;
			a8 = 8654;
			a9 = 934599962;
			a10 = 10672235;
			a11 = 3411123;
			a12 = 45128889;
			a13 = 7813;
			a14 = 19841235;
			a15 = 1552333;
			a16 = 1611778;
			a17 = 291711;
			a18 = 187899962;
			a19 = 9819239;
			a20 = 20987895;

			a1 = a20;
			a2 = a19;
			a3 = a18;
			a4 = a17;
			a5 = a16;
			a6 = a15;
			a7 = a14;
			a8 = a13;
			a9 = a12;
			a10 = a11;
			a11 = a10;
			a12 = a9;
			a13 = a8;
			a14 = a7;
			a15 = a6;
			a16 = a5;
			a17 = a4;
			a18 = a3;
			a19 = a2;
			a20 = a1;

			b1 = 20001;
			b2 = 2346259;
			b3 = 65787895;
			b4 = 4574233;
			b5 = 7827852;
			b6 = 15901123;
			b7 = 988756;
			b8 = 698685;
			b9 = 19849963;
			b10 = 898212;

			b1 = b10;
			b2 = b9;
			b3 = b8;
			b4 = b7;
			b5 = b6;
			b6 = b5;
			b7 = b4;
			b8 = b3;
			b9 = b2;
			b10 = b1;
		}
		double tEmpty2 = clock();
		double tEmpty = (double)(tEmpty2 - tEmpty1) / CLOCKS_PER_SEC;

	
		{
			a1 = 145865522000000000;
			a2 = 267965421000000;
			a3 = 35793216800000004;
			a4 = 476412000000000335;
			a5 = 5345785210000000;
			a6 = 613411225800000000;
			a7 = 71541200000000;
			a8 = 865000000004;
			a9 = 934599962;
			a10 = 106722000000035;
			a11 = 3411120000000003;
			a12 = 45128880000000009;
			a13 = 7810000000000003;
			a14 = 198412300005;
			a15 = 15500000002333;
			a16 = 161177000000008;
			a17 = 29000000001711;
			a18 = 18789000009962;
			a19 = 98100000009239;
			a20 = 20987800000095;

			b1 = 2000100000;
			b2 = 234625000009;
			b3 = 6578780000000095;
			b4 = 4574230000003;
			b5 = 78200000007852;
			b6 = 1590111111023;
			b7 = 9887500026;
			b8 = 69868000225;
			b9 = 10009849963;
			b10 = 8982222212;
			b11 = 998000000;
			b12 = 6978222256;
			b13 = 597612222;
			b14 = 79749933333336;
			b15 = 49720222223;
			b16 = 39709999997;
			b17 = 396885222222226;
			b18 = 996630000003;
			b19 = 5964222222221;
			b20 = 796222222;

			c1 = 111112684230;
			c2 = 85230000003;
			c3 = 31236333333;
			c4 = 780009239;
			c5 = 2423622;
			c6 = 89624332335;
			c7 = 248330000;
			c8 = 2510000000020;
			c9 = 2541111113;
			c10 = 522222263257;
			c11 = 7526000000;
			c12 = 66262222223;
			c13 = 926555555556;
			c14 = 10226333339;
			c15 = 3327555552;
			c16 = 2758899996;
			c17 = 27836666663;
			c18 = 2812222222986;
			c19 = 2847999995;
			c20 = 287330;
		}
		
		double tPlus1 = clock();
		for (long int i = 0; i<n; i++)
		{
			a1 = b1 + c1;
			b1 = a1 + c2;
			c1 = a1 + b2;

			a2 = b2 + c3;
			b2 = a2 + c3;
			c2 = a2 + b3;

			a3 = b3 + c2;
			b3 = a3 + c1;
			c3 = a3 + b5;

			a4 = b4 + c2;
			b4 = a4 + c3;
			c4 = a4 + b9;

			a5 = b5 + c2;
			b5 = a5 + c3;
			c5 = a5 + b4;

			a6 = b6 + c7;
			b6 = a6 + c8;
			c6 = a6 + b9;

			a7 = b7 + c6;
			b7 = a7 + c8;
			c7 = a7 + b6;

			a8 = b8 + c1;
			b8 = a8 + c2;
			c8 = a8 + b4;

			a9 = b9 + c3;
			b9 = a9 + c5;
			c9 = a9 + b6;

			a10 = b10 + c10;
			b10 = a10 + c7;
			c10 = a10 + b10;

			a1 = b1 + c1;
			b1 = a1 + c1;
			c1 = a1 + b1;

			a2 = b2 + c2;
			b2 = a2 + c2;
			c2 = a2 + b2;

			a3 = b3 + c3;
			b3 = a3 + c3;
			c3 = a3 + b3;

			a4 = b4 + c4;
			b4 = a4 + c4;
			c4 = a4 + b4;

			a5 = b5 + c5;
			b5 = a5 + c5;
			c5 = a5 + b5;

			a6 = b6 + c6;
			b6 = a6 + c6;
			c6 = a6 + b6;

			a7 = b7 + c7;
			b7 = a7 + c7;
			c7 = a7 + b7;

			a8 = b8 + c8;
			b8 = a8 + c8;
			c8 = a8 + b8;

			a9 = b9 + c9;
			b9 = a9 + c9;
			c9 = a9 + b9;

			a10 = b10 + c10;
			b10 = a10 + c10;
			c10 = a10 + b10;
		}
		double tPlus2 = clock();
		double tPlus = (double)(tPlus2 - tPlus1 - tEmpty) / CLOCKS_PER_SEC;
		v[1][0] = 60 * (n) / tPlus;
		
		double tMinus = clock();
		for (long int i = 0; i<n; i++)
		{
			a1 = b1 - c1;
			b1 = a1 - c2;
			c1 = a1 - b2;

			a2 = b2 - c3;
			b2 = a2 - c3;
			c2 = a2 - b3;

			a3 = b3 - c2;
			b3 = a3 - c1;
			c3 = a3 - b5;

			a4 = b4 - c2;
			b4 = a4 - c3;
			c4 = a4 - b9;

			a5 = b5 - c2;
			b5 = a5 - c3;
			c5 = a5 - b4;

			a6 = b6 - c7;
			b6 = a6 - c8;
			c6 = a6 - b9;

			a7 = b7 - c6;
			b7 = a7 - c8;
			c7 = a7 - b6;

			a8 = b8 - c1;
			b8 = a8 - c2;
			c8 = a8 - b4;

			a9 = b9 - c3;
			b9 = a9 - c5;
			c9 = a9 - b6;

			a10 = b10 - c10;
			b10 = a10 - c7;
			c10 = a10 - b10;

			a1 = b1 - c1;
			b1 = a1 - c1;
			c1 = a1 - b1;

			a2 = b2 - c2;
			b2 = a2 - c2;
			c2 = a2 - b2;

			a3 = b3 - c3;
			b3 = a3 - c3;
			c3 = a3 - b3;

			a4 = b4 - c4;
			b4 = a4 - c4;
			c4 = a4 - b4;

			a5 = b5 - c5;
			b5 = a5 - c5;
			c5 = a5 - b5;

			a6 = b6 - c6;
			b6 = a6 - c6;
			c6 = a6 - b6;

			a7 = b7 - c7;
			b7 = a7 - c7;
			c7 = a7 - b7;

			a8 = b8 - c8;
			b8 = a8 - c8;
			c8 = a8 - b8;

			a9 = b9 - c9;
			b9 = a9 - c9;
			c9 = a9 - b9;

			a10 = b10 - c10;
			b10 = a10 - c10;
			c10 = a10 - b10;
		}
		tMinus = (double)(clock() - tMinus - tEmpty) / CLOCKS_PER_SEC;
		v[1][1] = 60 * (n) / tMinus;

		double tMult1 = clock();
		for (long int i = 0; i<n; i++)
		{
			a1 = b1 * c1;
			b1 = a1 * c2;
			c1 = a1 * b2;

			a2 = b2 * c3;
			b2 = a2 * c3;
			c2 = a2 * b3;

			a3 = b3 * c2;
			b3 = a3 * c1;
			c3 = a3 * b5;

			a4 = b4 * c2;
			b4 = a4 * c3;
			c4 = a4 * b9;

			a5 = b5 * c2;
			b5 = a5 * c3;
			c5 = a5 * b4;

			a6 = b6 * c7;
			b6 = a6 * c8;
			c6 = a6 * b9;

			a7 = b7 * c6;
			b7 = a7 * c8;
			c7 = a7 * b6;

			a8 = b8 * c1;
			b8 = a8 * c2;
			c8 = a8 * b4;

			a9 = b9 * c3;
			b9 = a9 * c5;
			c9 = a9 * b6;

			a10 = b10 * c10;
			b10 = a10 * c7;
			c10 = a10 * b10;

			a1 = b1 * c1;
			b1 = a1 * c1;
			c1 = a1 * b1;

			a2 = b2 * c2;
			b2 = a2 * c2;
			c2 = a2 * b2;

			a3 = b3 * c3;
			b3 = a3 * c3;
			c3 = a3 * b3;

			a4 = b4 * c4;
			b4 = a4 * c4;
			c4 = a4 * b4;

			a5 = b5 * c5;
			b5 = a5 * c5;
			c5 = a5 * b5;

			a6 = b6 * c6;
			b6 = a6 * c6;
			c6 = a6 * b6;

			a7 = b7 * c7;
			b7 = a7 * c7;
			c7 = a7 * b7;

			a8 = b8 * c8;
			b8 = a8 * c8;
			c8 = a8 * b8;

			a9 = b9 * c9;
			b9 = a9 * c9;
			c9 = a9 * b9;

			a10 = b10 * c10;
			b10 = a10 * c10;
			c10 = a10 * b10;
		}
		double tMult2 = clock();
		double tMult = (double)(tMult2 - tMult1 - tEmpty) / CLOCKS_PER_SEC;
		v[1][2] = 60 * (n) / tMult;

		a1 = 145865522;
		a2 = 267965421;
		a3 = 3579321684;
		a4 = 476412335;
		a5 = 534578521;
		a6 = 6134112258;
		a7 = 715412;
		a8 = 8654;
		a9 = 934599962;
		a10 = 10672235;
		a11 = 3411123;
		a12 = 45128889;
		a13 = 7813;
		a14 = 19841235;
		a15 = 1552333;
		a16 = 1611778;
		a17 = 291711;
		a18 = 187899962;
		a19 = 9819239;
		a20 = 20987895;

		b1 = 20001;
		b2 = 2346259;
		b3 = 65787895;
		b4 = 4574233;
		b5 = 7827852;
		b6 = 15901123;
		b7 = 988756;
		b8 = 698685;
		b9 = 19849963;
		b10 = 898212;
		b11 = 9980;
		b12 = 697856;
		b13 = 59761;
		b14 = 7974996;
		b15 = 497203;
		b16 = 39707;
		b17 = 3968856;
		b18 = 996633;
		b19 = 59641;
		b20 = 7962;

		c1 = 2684230;
		c2 = 85233;
		c3 = 31236;
		c4 = 789239;
		c5 = 24236;
		c6 = 896245;
		c7 = 24833;
		c8 = 25100;
		c9 = 2543;
		c10 = 563257;
		c11 = 75260;
		c12 = 66263;
		c13 = 9266;
		c14 = 102269;
		c15 = 33272;
		c16 = 275886;
		c17 = 27833;
		c18 = 281986;
		c19 = 28475;
		c20 = 287330;

		double tDiv1 = clock();
		for (long int i = 0; i<n; i++)
		{
			a1 = b1 / c1;                                                                                                          a1 = b1; //cout<<'+'<<endl;
			b1 = a1 / c1;                                                                                                          b1 = c1; //cout<<'+'<<endl;
			c1 = a1 / b1;                                                                                                          c1 = a1; //cout<<'+'<<endl;

			a2 = b2 / c2;                                                                                                          a2 = b2; //cout<<'+'<<endl;
			b2 = a2 / c2;                                                                                                          b2 = c2; //cout<<'+'<<endl;
			c2 = a2 / b2;                                                                                                          c2 = a2; //cout<<'+'<<endl;

			a3 = b3 / c3;                                                                                                          a3 = b3; //cout<<'+'<<endl;
			b3 = a3 / c3;                                                                                                          b3 = c3; //cout<<'+'<<endl;
			c3 = a3 / b3;                                                                                                          c3 = a3; //cout<<'+'<<endl;

			a4 = b4 / c4;                                                                                                          a4 = b4; //cout<<'+'<<endl;
			b4 = a4 / c4;                                                                                                          b4 = c4; //cout<<'+'<<endl;
			c4 = a4 / b4;                                                                                                          c4 = a4; //cout<<'+'<<endl;

			a5 = b5 / c5;                                                                                                          a5 = b5; //cout<<'+'<<endl;
			b5 = a5 / c5;                                                                                                          b5 = c5; //cout<<'+'<<endl;
			c5 = a5 / b5;                                                                                                          c5 = a5; //cout<<'+'<<endl;

			a6 = b6 / c6;                                                                                                          a6 = b6; //cout<<'+'<<endl;
			b6 = a6 / c6;                                                                                                          b6 = c6; //cout<<'+'<<endl;
			c6 = a6 / b6;                                                                                                          c6 = a6; //cout<<'+'<<endl;

			a7 = b7 / c7;                                                                                                          a7 = b7; //cout<<'+'<<endl;
			b7 = a7 / c7;                                                                                                          b7 = c7; //cout<<'+'<<endl;
			c7 = a7 / b7;                                                                                                          c7 = a7; //cout<<'+'<<endl;

			a8 = b8 / c8;                                                                                                          a8 = b8; //cout<<'+'<<endl;
			b8 = a8 / c8;                                                                                                          b8 = c8; //cout<<'+'<<endl;
			c8 = a8 / b8;                                                                                                          c8 = a8; //cout<<'+'<<endl;

			a9 = b9 / c9;                                                                                                          a9 = b9; //cout<<'+'<<endl;
			b9 = a9 / c9;                                                                                                          b9 = c9; //cout<<'+'<<endl;
			c9 = a9 / b9;                                                                                                          c9 = a9; //cout<<'+'<<endl;

			a10 = b10 / c10;                                                                                                       a10 = b10; //cout<<'+'<<endl;
			b10 = a10 / c10;                                                                                                       b10 = c10; //cout<<'+'<<endl;
			c10 = a10 / b10;                                                                                                       c10 = a10; //cout<<'+'<<endl;
		}
		double tDiv2 = clock();
		double tDiv = (double)(tDiv2 - tDiv1 - 2 * tEmpty) / CLOCKS_PER_SEC;
		v[1][3] = 30 * n / tDiv;
	}
}

void Double() {
	double a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20;
	double b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15, b16, b17, b18, b19, b20;
	double c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20;
	double tEmpty1 = clock();
	for (long int i = 0; i<n; i++)
	{
		a1 = 1458.0342;
		a2 = 2679.432;
		a3 = 3579.6464;
		a4 = 4764.7684;
		a5 = 5345.860;
		a6 = 6134.96267;
		a7 = 7154.7864;
		a8 = 8654.9948;
		a9 = 9345.1240;
		a10 = 1067.9847;
		a11 = 3411.4334;
		a12 = 4512.5244;
		a13 = 7813.215;
		a14 = 1984.03;
		a15 = 155.78;
		a16 = 1611.326;
		a17 = 2917.7;
		a18 = 1878.36;
		a19 = 9819.12;
		a20 = 2098.003;

		a1 = a20;
		a2 = a19;
		a3 = a18;
		a4 = a17;
		a5 = a16;
		a6 = a15;
		a7 = a14;
		a8 = a13;
		a9 = a12;
		a10 = a11;
		a11 = a10;
		a12 = a9;
		a13 = a8;
		a14 = a7;
		a15 = a6;
		a16 = a5;
		a17 = a4;
		a18 = a3;
		a19 = a2;
		a20 = a1;

		b1 = 2000;
		b2 = 2346.9;
		b3 = 6578.36;
		b4 = 4574.789;
		b5 = 782.423;
		b6 = 1590.2369;
		b7 = 988.75;
		b8 = 6986.36;
		b9 = 1984.123;
		b10 = 8982;

		b1 = b10;
		b2 = b9;
		b3 = b8;
		b4 = b7;
		b5 = b6;
		b6 = b5;
		b7 = b4;
		b8 = b3;
		b9 = b2;
		b10 = b1;
	}
	double tEmpty2 = clock();
	double tEmpty = (double)(tEmpty2 - tEmpty1) / CLOCKS_PER_SEC;

	a1 = 1458.0342;
	a2 = 2679.432;
	a3 = 3579.6464;
	a4 = 4764.7684;
	a5 = 5345.860;
	a6 = 6134.96267;
	a7 = 7154.7864;
	a8 = 8654.9948;
	a9 = 9345.1240;
	a10 = 1067.9847;
	a11 = 3411.4334;
	a12 = 4512.5244;
	a13 = 7813.215;
	a14 = 1984.03;
	a15 = 155.78;
	a16 = 1611.326;
	a17 = 2917.7;
	a18 = 1878.36;
	a19 = 9819.12;
	a20 = 2098.003;

	b1 = 2000;
	b2 = 2346.9;
	b3 = 6578.36;
	b4 = 4574.789;
	b5 = 782.423;
	b6 = 1590.2369;
	b7 = 988.75;
	b8 = 6986.36;
	b9 = 1984.123;
	b10 = 8982;
	b11 = 9980.258;
	b12 = 6978.36;
	b13 = 5976.436;
	b14 = 7974.2;
	b15 = 4972.11;
	b16 = 3970.98;
	b17 = 3968.347;
	b18 = 9966.964;
	b19 = 5964.39;
	b20 = 7962.036;

	c1 = 230.976;
	c2 = 233.364;
	c3 = 236.239;
	c4 = 239.036;
	c5 = 242.9873;
	c6 = 245.036;
	c7 = 248.78;
	c8 = 251.36;
	c9 = 254.7361;
	c10 = 257.8;
	c11 = 260.3;
	c12 = 263.78;
	c13 = 266.39;
	c14 = 269.9;
	c15 = 272.2;
	c16 = 275;
	c17 = 278.8;
	c18 = 281.99;
	c19 = 284.3;
	c20 = 287.001;


	double tPlus1 = clock();
	for (long int i = 0; i<n; i++)
	{
		a1 = b1 + c1;
		b1 = a1 + c1;
		c1 = a1 + b1;

		a2 = b2 + c2;
		b2 = a2 + c2;
		c2 = a2 + b2;

		a3 = b3 + c3;
		b3 = a3 + c3;
		c3 = a3 + b3;

		a4 = b4 + c4;
		b4 = a4 + c4;
		c4 = a4 + b4;

		a5 = b5 + c5;
		b5 = a5 + c5;
		c5 = a5 + b5;

		a6 = b6 + c6;
		b6 = a6 + c6;
		c6 = a6 + b6;

		a7 = b7 + c7;
		b7 = a7 + c7;
		c7 = a7 + b7;

		a8 = b8 + c8;
		b8 = a8 + c8;
		c8 = a8 + b8;

		a9 = b9 + c9;
		b9 = a9 + c9;
		c9 = a9 + b9;

		a10 = b10 + c10;
		b10 = a10 + c10;
		c10 = a10 + b10;

		a1 = b1 + c1;
		b1 = a1 + c1;
		c1 = a1 + b1;

		a2 = b2 + c2;
		b2 = a2 + c2;
		c2 = a2 + b2;

		a3 = b3 + c3;
		b3 = a3 + c3;
		c3 = a3 + b3;

		a4 = b4 + c4;
		b4 = a4 + c4;
		c4 = a4 + b4;

		a5 = b5 + c5;
		b5 = a5 + c5;
		c5 = a5 + b5;

		a6 = b6 + c6;
		b6 = a6 + c6;
		c6 = a6 + b6;

		a7 = b7 + c7;
		b7 = a7 + c7;
		c7 = a7 + b7;

		a8 = b8 + c8;
		b8 = a8 + c8;
		c8 = a8 + b8;

		a9 = b9 + c9;
		b9 = a9 + c9;
		c9 = a9 + b9;

		a10 = b10 + c10;
		b10 = a10 + c10;
		c10 = a10 + b10;
	}
	double tPlus2 = clock();
	double tPlus = (double)(tPlus2 - tPlus1 - tEmpty) / CLOCKS_PER_SEC;
	v[2][0] = 60 * n / tPlus;

	double tMinus = clock();
	for (long int i = 0; i<n; i++)
	{
		a1 = b1 - c1;
		b1 = a1 - c1;
		c1 = a1 - b1;

		a2 = b2 - c2;
		b2 = a2 - c2;
		c2 = a2 - b2;

		a3 = b3 - c3;
		b3 = a3 - c3;
		c3 = a3 - b3;

		a4 = b4 - c4;
		b4 = a4 - c4;
		c4 = a4 - b4;

		a5 = b5 - c5;
		b5 = a5 - c5;
		c5 = a5 - b5;

		a6 = b6 - c6;
		b6 = a6 - c6;
		c6 = a6 - b6;

		a7 = b7 - c7;
		b7 = a7 - c7;
		c7 = a7 - b7;

		a8 = b8 - c8;
		b8 = a8 - c8;
		c8 = a8 - b8;

		a9 = b9 - c9;
		b9 = a9 - c9;
		c9 = a9 - b9;

		a10 = b10 - c10;
		b10 = a10 - c10;
		c10 = a10 - b10;

		a1 = b1 - c1;
		b1 = a1 - c1;
		c1 = a1 - b1;

		a2 = b2 - c2;
		b2 = a2 - c2;
		c2 = a2 - b2;

		a3 = b3 - c3;
		b3 = a3 - c3;
		c3 = a3 - b3;

		a4 = b4 - c4;
		b4 = a4 - c4;
		c4 = a4 - b4;

		a5 = b5 - c5;
		b5 = a5 - c5;
		c5 = a5 - b5;

		a6 = b6 - c6;
		b6 = a6 - c6;
		c6 = a6 - b6;

		a7 = b7 - c7;
		b7 = a7 - c7;
		c7 = a7 - b7;

		a8 = b8 - c8;
		b8 = a8 - c8;
		c8 = a8 - b8;

		a9 = b9 - c9;
		b9 = a9 - c9;
		c9 = a9 - b9;

		a10 = b10 - c10;
		b10 = a10 - c10;
		c10 = a10 - b10;
	}
	tMinus = (double)(clock() - tMinus - tEmpty) / CLOCKS_PER_SEC;
	v[2][1] = 60 * n / tMinus;

	double tMult1 = clock();
	for (long int i = 0; i<n; i++)
	{
		a1 = b1 * c1;
		b1 = a1 * c1;
		c1 = a1 * b1;

		a2 = b2 * c2;
		b2 = a2 * c2;
		c2 = a2 * b2;

		a3 = b3 * c3;
		b3 = a3 * c3;
		c3 = a3 * b3;

		a4 = b4 * c4;
		b4 = a4 * c4;
		c4 = a4 * b4;

		a5 = b5 * c5;
		b5 = a5 * c5;
		c5 = a5 * b5;

		a6 = b6 * c6;
		b6 = a6 * c6;
		c6 = a6 * b6;

		a7 = b7 * c7;
		b7 = a7 * c7;
		c7 = a7 * b7;

		a8 = b8 * c8;
		b8 = a8 * c8;
		c8 = a8 * b8;

		a9 = b9 * c9;
		b9 = a9 * c9;
		c9 = a9 * b9;

		a10 = b10 * c10;
		b10 = a10 * c10;
		c10 = a10 * b10;

		a1 = b1 * c1;
		b1 = a1 * c1;
		c1 = a1 * b1;

		a2 = b2 * c2;
		b2 = a2 * c2;
		c2 = a2 * b2;

		a3 = b3 * c3;
		b3 = a3 * c3;
		c3 = a3 * b3;

		a4 = b4 * c4;
		b4 = a4 * c4;
		c4 = a4 * b4;

		a5 = b5 * c5;
		b5 = a5 * c5;
		c5 = a5 * b5;

		a6 = b6 * c6;
		b6 = a6 * c6;
		c6 = a6 * b6;

		a7 = b7 * c7;
		b7 = a7 * c7;
		c7 = a7 * b7;

		a8 = b8 * c8;
		b8 = a8 * c8;
		c8 = a8 * b8;

		a9 = b9 * c9;
		b9 = a9 * c9;
		c9 = a9 * b9;

		a10 = b10 * c10;
		b10 = a10 * c10;
		c10 = a10 * b10;
	}
	double tMult2 = clock();
	double tMult = (double)(tMult2 - tMult1 - tEmpty) / CLOCKS_PER_SEC;
	v[2][2] = 60 * n / tMult;

	a1 = 1458.0342;
	a2 = 2679.432;
	a3 = 3579.6464;
	a4 = 4764.7684;
	a5 = 5345.860;
	a6 = 6134.96267;
	a7 = 7154.7864;
	a8 = 8654.9948;
	a9 = 9345.1240;
	a10 = 1067.9847;
	a11 = 3411.4334;
	a12 = 4512.5244;
	a13 = 7813.215;
	a14 = 1984.03;
	a15 = 155.78;
	a16 = 1611.326;
	a17 = 2917.7;
	a18 = 1878.36;
	a19 = 9819.12;
	a20 = 2098.003;

	b1 = 2000;
	b2 = 2346.9;
	b3 = 6578.36;
	b4 = 4574.789;
	b5 = 782.423;
	b6 = 1590.2369;
	b7 = 988.75;
	b8 = 6986.36;
	b9 = 1984.123;
	b10 = 8982;
	b11 = 9980.258;
	b12 = 6978.36;
	b13 = 5976.436;
	b14 = 7974.2;
	b15 = 4972.11;
	b16 = 3970.98;
	b17 = 3968.347;
	b18 = 9966.964;
	b19 = 5964.39;
	b20 = 7962.036;

	c1 = 230.976;
	c2 = 233.364;
	c3 = 236.239;
	c4 = 239.036;
	c5 = 242.9873;
	c6 = 245.036;
	c7 = 248.78;
	c8 = 251.36;
	c9 = 254.7361;
	c10 = 257.8;
	c11 = 260.3;
	c12 = 263.78;
	c13 = 266.39;
	c14 = 269.9;
	c15 = 272.2;
	c16 = 275;
	c17 = 278.8;
	c18 = 281.99;
	c19 = 284.3;
	c20 = 287.001;

	double tDiv1 = clock();
	for (long int i = 0; i<n; i++)
	{
		a1 = b1 / c1;                                                                                                          a1 = b1; //cout<<'+'<<endl;
		b1 = a1 / c1;                                                                                                          b1 = c1; //cout<<'+'<<endl;
		c1 = a1 / b1;                                                                                                          c1 = a1; //cout<<'+'<<endl;

		a2 = b2 / c2;                                                                                                          a2 = b2; //cout<<'+'<<endl;
		b2 = a2 / c2;                                                                                                          b2 = c2; //cout<<'+'<<endl;
		c2 = a2 / b2;                                                                                                          c2 = a2; //cout<<'+'<<endl;

		a3 = b3 / c3;                                                                                                          a3 = b3; //cout<<'+'<<endl;
		b3 = a3 / c3;                                                                                                          b3 = c3; //cout<<'+'<<endl;
		c3 = a3 / b3;                                                                                                          c3 = a3; //cout<<'+'<<endl;

		a4 = b4 / c4;                                                                                                          a4 = b4; //cout<<'+'<<endl;
		b4 = a4 / c4;                                                                                                          b4 = c4; //cout<<'+'<<endl;
		c4 = a4 / b4;                                                                                                          c4 = a4; //cout<<'+'<<endl;

		a5 = b5 / c5;                                                                                                          a5 = b5; //cout<<'+'<<endl;
		b5 = a5 / c5;                                                                                                          b5 = c5; //cout<<'+'<<endl;
		c5 = a5 / b5;                                                                                                          c5 = a5; //cout<<'+'<<endl;

		a6 = b6 / c6;                                                                                                          a6 = b6; //cout<<'+'<<endl;
		b6 = a6 / c6;                                                                                                          b6 = c6; //cout<<'+'<<endl;
		c6 = a6 / b6;                                                                                                          c6 = a6; //cout<<'+'<<endl;

		a7 = b7 / c7;                                                                                                          a7 = b7; //cout<<'+'<<endl;
		b7 = a7 / c7;                                                                                                          b7 = c7; //cout<<'+'<<endl;
		c7 = a7 / b7;                                                                                                          c7 = a7; //cout<<'+'<<endl;

		a8 = b8 / c8;                                                                                                          a8 = b8; //cout<<'+'<<endl;
		b8 = a8 / c8;                                                                                                          b8 = c8; //cout<<'+'<<endl;
		c8 = a8 / b8;                                                                                                          c8 = a8; //cout<<'+'<<endl;

		a9 = b9 / c9;                                                                                                          a9 = b9; //cout<<'+'<<endl;
		b9 = a9 / c9;                                                                                                          b9 = c9; //cout<<'+'<<endl;
		c9 = a9 / b9;                                                                                                          c9 = a9; //cout<<'+'<<endl;

		a10 = b10 / c10;                                                                                                       a10 = b10; //cout<<'+'<<endl;
		b10 = a10 / c10;                                                                                                       b10 = c10; //cout<<'+'<<endl;
		c10 = a10 / b10;                                                                                                       c10 = a10; //cout<<'+'<<endl;
	}
	double tDiv2 = clock();
	double tDiv = (double)(tDiv2 - tDiv1 - 2 * tEmpty) / CLOCKS_PER_SEC;
	v[2][3] = 30 * n / tDiv;
}

void Float() {
	float a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20;
	float b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15, b16, b17, b18, b19, b20;
	float c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20;
	double tEmpty1 = clock();
	for (long int i = 0; i<n; i++)
	{
		a1 = 0.1458;
		a2 = 0.2679;
		a3 = 0.3579;
		a4 = 0.4764;
		a5 = 0.5345;
		a6 = 0.6134;
		a7 = 0.7154;
		a8 = 0.8654;
		a9 = 0.9345;
		a10 = 0.1067;
		a11 = 0.3411;
		a12 = 0.4512;
		a13 = 0.7813;
		a14 = 0.1984;
		a15 = 0.155;
		a16 = 0.1611;
		a17 = 0.2917;
		a18 = 0.1878;
		a19 = 0.9819;
		a20 = 0.2098;

		a1 = a20;
		a2 = a19;
		a3 = a18;
		a4 = a17;
		a5 = a16;
		a6 = a15;
		a7 = a14;
		a8 = a13;
		a9 = a12;
		a10 = a11;
		a11 = a10;
		a12 = a9;
		a13 = a8;
		a14 = a7;
		a15 = a6;
		a16 = a5;
		a17 = a4;
		a18 = a3;
		a19 = a2;
		a20 = a1;

		b1 = 0.2000;
		b2 = 0.2346;
		b3 = 0.6578;
		b4 = 0.4574;
		b5 = 0.782;
		b6 = 0.1590;
		b7 = 0.988;
		b8 = 0.6986;
		b9 = 0.1984;
		b10 = 0.8982;

		b1 = b10;
		b2 = b9;
		b3 = b8;
		b4 = b7;
		b5 = b6;
		b6 = b5;
		b7 = b4;
		b8 = b3;
		b9 = b2;
		b10 = b1;
	}
	double tEmpty2 = clock();
	double tEmpty = (double)(tEmpty2 - tEmpty1) / CLOCKS_PER_SEC;

	a1 = 0.1458;
	a2 = 0.2679;
	a3 = 0.3579;
	a4 = 0.4764;
	a5 = 0.5345;
	a6 = 0.6134;
	a7 = 0.7154;
	a8 = 0.8654;
	a9 = 0.9345;
	a10 = 0.1067;
	a11 = 0.3411;
	a12 = 0.4512;
	a13 = 0.7813;
	a14 = 0.1984;
	a15 = 0.155;
	a16 = 0.1611;
	a17 = 0.2917;
	a18 = 0.1878;
	a19 = 0.9819;
	a20 = 0.2098;

	b1 = 0.2000;
	b2 = 0.2346;
	b3 = 0.6578;
	b4 = 0.4574;
	b5 = 0.782;
	b6 = 0.1590;
	b7 = 0.988;
	b8 = 0.6986;
	b9 = 0.1984;
	b10 = 0.8982;
	b11 = 0.9980;
	b12 = 0.6978;
	b13 = 0.5976;
	b14 = 0.7974;
	b15 = 0.4972;
	b16 = 0.3970;
	b17 = 0.3968;
	b18 = 0.9966;
	b19 = 0.5964;
	b20 = 0.7962;

	c1 = 0.230;
	c2 = 0.233;
	c3 = 0.236;
	c4 = 0.239;
	c5 = 0.242;
	c6 = 0.245;
	c7 = 0.248;
	c8 = 0.251;
	c9 = 0.254;
	c10 = 0.257;
	c11 = 0.260;
	c12 = 0.263;
	c13 = 0.266;
	c14 = 0.269;
	c15 = 0.272;
	c16 = 0.275;
	c17 = 0.278;
	c18 = 0.281;
	c19 = 0.284;
	c20 = 0.287;

	double tPlus1 = clock();
	for (long int i = 0; i<n; i++)
	{
		a1 = b1 + c1;
		b1 = a1 + c1;
		c1 = a1 + b1;

		a2 = b2 + c2;
		b2 = a2 + c2;
		c2 = a2 + b2;

		a3 = b3 + c3;
		b3 = a3 + c3;
		c3 = a3 + b3;

		a4 = b4 + c4;
		b4 = a4 + c4;
		c4 = a4 + b4;

		a5 = b5 + c5;
		b5 = a5 + c5;
		c5 = a5 + b5;

		a6 = b6 + c6;
		b6 = a6 + c6;
		c6 = a6 + b6;

		a7 = b7 + c7;
		b7 = a7 + c7;
		c7 = a7 + b7;

		a8 = b8 + c8;
		b8 = a8 + c8;
		c8 = a8 + b8;

		a9 = b9 + c9;
		b9 = a9 + c9;
		c9 = a9 + b9;

		a10 = b10 + c10;
		b10 = a10 + c10;
		c10 = a10 + b10;

		a1 = b1 + c1;
		b1 = a1 + c1;
		c1 = a1 + b1;

		a2 = b2 + c2;
		b2 = a2 + c2;
		c2 = a2 + b2;

		a3 = b3 + c3;
		b3 = a3 + c3;
		c3 = a3 + b3;

		a4 = b4 + c4;
		b4 = a4 + c4;
		c4 = a4 + b4;

		a5 = b5 + c5;
		b5 = a5 + c5;
		c5 = a5 + b5;

		a6 = b6 + c6;
		b6 = a6 + c6;
		c6 = a6 + b6;

		a7 = b7 + c7;
		b7 = a7 + c7;
		c7 = a7 + b7;

		a8 = b8 + c8;
		b8 = a8 + c8;
		c8 = a8 + b8;

		a9 = b9 + c9;
		b9 = a9 + c9;
		c9 = a9 + b9;

		a10 = b10 + c10;
		b10 = a10 + c10;
		c10 = a10 + b10;
	}
	double tPlus2 = clock();
	double tPlus = (double)(tPlus2 - tPlus1 - tEmpty) / CLOCKS_PER_SEC;
	v[3][0] = 60 * n / tPlus;

	double tMinus = clock();
	for (long int i = 0; i<n; i++)
	{
		a1 = b1 - c1;
		b1 = a1 - c1;
		c1 = a1 - b1;

		a2 = b2 - c2;
		b2 = a2 - c2;
		c2 = a2 - b2;

		a3 = b3 - c3;
		b3 = a3 - c3;
		c3 = a3 - b3;

		a4 = b4 - c4;
		b4 = a4 - c4;
		c4 = a4 - b4;

		a5 = b5 - c5;
		b5 = a5 - c5;
		c5 = a5 - b5;

		a6 = b6 - c6;
		b6 = a6 - c6;
		c6 = a6 - b6;

		a7 = b7 - c7;
		b7 = a7 - c7;
		c7 = a7 - b7;

		a8 = b8 - c8;
		b8 = a8 - c8;
		c8 = a8 - b8;

		a9 = b9 - c9;
		b9 = a9 - c9;
		c9 = a9 - b9;

		a10 = b10 - c10;
		b10 = a10 - c10;
		c10 = a10 - b10;

		a1 = b1 - c1;
		b1 = a1 - c1;
		c1 = a1 - b1;

		a2 = b2 - c2;
		b2 = a2 - c2;
		c2 = a2 - b2;

		a3 = b3 - c3;
		b3 = a3 - c3;
		c3 = a3 - b3;

		a4 = b4 - c4;
		b4 = a4 - c4;
		c4 = a4 - b4;

		a5 = b5 - c5;
		b5 = a5 - c5;
		c5 = a5 - b5;

		a6 = b6 - c6;
		b6 = a6 - c6;
		c6 = a6 - b6;

		a7 = b7 - c7;
		b7 = a7 - c7;
		c7 = a7 - b7;

		a8 = b8 - c8;
		b8 = a8 - c8;
		c8 = a8 - b8;

		a9 = b9 - c9;
		b9 = a9 - c9;
		c9 = a9 - b9;

		a10 = b10 - c10;
		b10 = a10 - c10;
		c10 = a10 - b10;
	}
	tMinus = (double)(clock() - tMinus - tEmpty) / CLOCKS_PER_SEC;
	v[3][1] = 60 * n / tMinus;


	double tMult1 = clock();
	for (long int i = 0; i<n; i++)
	{
		a1 = b1 * c1;
		b1 = a1 * c1;
		c1 = a1 * b1;

		a2 = b2 * c2;
		b2 = a2 * c2;
		c2 = a2 * b2;

		a3 = b3 * c3;
		b3 = a3 * c3;
		c3 = a3 * b3;

		a4 = b4 * c4;
		b4 = a4 * c4;
		c4 = a4 * b4;

		a5 = b5 * c5;
		b5 = a5 * c5;
		c5 = a5 * b5;

		a6 = b6 * c6;
		b6 = a6 * c6;
		c6 = a6 * b6;

		a7 = b7 * c7;
		b7 = a7 * c7;
		c7 = a7 * b7;

		a8 = b8 * c8;
		b8 = a8 * c8;
		c8 = a8 * b8;

		a9 = b9 * c9;
		b9 = a9 * c9;
		c9 = a9 * b9;

		a10 = b10 * c10;
		b10 = a10 * c10;
		c10 = a10 * b10;

		a1 = b1 * c1;
		b1 = a1 * c1;
		c1 = a1 * b1;

		a2 = b2 * c2;
		b2 = a2 * c2;
		c2 = a2 * b2;

		a3 = b3 * c3;
		b3 = a3 * c3;
		c3 = a3 * b3;

		a4 = b4 * c4;
		b4 = a4 * c4;
		c4 = a4 * b4;

		a5 = b5 * c5;
		b5 = a5 * c5;
		c5 = a5 * b5;

		a6 = b6 * c6;
		b6 = a6 * c6;
		c6 = a6 * b6;

		a7 = b7 * c7;
		b7 = a7 * c7;
		c7 = a7 * b7;

		a8 = b8 * c8;
		b8 = a8 * c8;
		c8 = a8 * b8;

		a9 = b9 * c9;
		b9 = a9 * c9;
		c9 = a9 * b9;

		a10 = b10 * c10;
		b10 = a10 * c10;
		c10 = a10 * b10;
	}
	double tMult2 = clock();
	double tMult = (double)(tMult2 - tMult1 - tEmpty) / CLOCKS_PER_SEC;
	v[3][2] = 60 * n / tMult;

	a1 = 0.1458;
	a2 = 0.2679;
	a3 = 0.3579;
	a4 = 0.4764;
	a5 = 0.5345;
	a6 = 0.6134;
	a7 = 0.7154;
	a8 = 0.8654;
	a9 = 0.9345;
	a10 = 0.1067;
	a11 = 0.3411;
	a12 = 0.4512;
	a13 = 0.7813;
	a14 = 0.1984;
	a15 = 0.155;
	a16 = 0.1611;
	a17 = 0.2917;
	a18 = 0.1878;
	a19 = 0.9819;
	a20 = 0.2098;

	b1 = 0.2000;
	b2 = 0.2346;
	b3 = 0.6578;
	b4 = 0.4574;
	b5 = 0.782;
	b6 = 0.1590;
	b7 = 0.988;
	b8 = 0.6986;
	b9 = 0.1984;
	b10 = 0.8982;
	b11 = 0.9980;
	b12 = 0.6978;
	b13 = 0.5976;
	b14 = 0.7974;
	b15 = 0.4972;
	b16 = 0.3970;
	b17 = 0.3968;
	b18 = 0.9966;
	b19 = 0.5964;
	b20 = 0.7962;

	c1 = 0.230;
	c2 = 0.233;
	c3 = 0.236;
	c4 = 0.239;
	c5 = 0.242;
	c6 = 0.245;
	c7 = 0.248;
	c8 = 0.251;
	c9 = 0.254;
	c10 = 0.257;
	c11 = 0.260;
	c12 = 0.263;
	c13 = 0.266;
	c14 = 0.269;
	c15 = 0.272;
	c16 = 0.275;
	c17 = 0.278;
	c18 = 0.281;
	c19 = 0.284;
	c20 = 0.287;

	double tDiv1 = clock();
	for (long int i = 0; i<n; i++)
	{
		a1 = b1 / c1;                                                                                                          a1 = b1; //cout<<'+'<<endl;
		b1 = a1 / c1;                                                                                                          b1 = c1; //cout<<'+'<<endl;
		c1 = a1 / b1;                                                                                                          c1 = a1; //cout<<'+'<<endl;

		a2 = b2 / c2;                                                                                                          a2 = b2; //cout<<'+'<<endl;
		b2 = a2 / c2;                                                                                                          b2 = c2; //cout<<'+'<<endl;
		c2 = a2 / b2;                                                                                                          c2 = a2; //cout<<'+'<<endl;

		a3 = b3 / c3;                                                                                                          a3 = b3; //cout<<'+'<<endl;
		b3 = a3 / c3;                                                                                                          b3 = c3; //cout<<'+'<<endl;
		c3 = a3 / b3;                                                                                                          c3 = a3; //cout<<'+'<<endl;

		a4 = b4 / c4;                                                                                                          a4 = b4; //cout<<'+'<<endl;
		b4 = a4 / c4;                                                                                                          b4 = c4; //cout<<'+'<<endl;
		c4 = a4 / b4;                                                                                                          c4 = a4; //cout<<'+'<<endl;

		a5 = b5 / c5;                                                                                                          a5 = b5; //cout<<'+'<<endl;
		b5 = a5 / c5;                                                                                                          b5 = c5; //cout<<'+'<<endl;
		c5 = a5 / b5;                                                                                                          c5 = a5; //cout<<'+'<<endl;

		a6 = b6 / c6;                                                                                                          a6 = b6; //cout<<'+'<<endl;
		b6 = a6 / c6;                                                                                                          b6 = c6; //cout<<'+'<<endl;
		c6 = a6 / b6;                                                                                                          c6 = a6; //cout<<'+'<<endl;

		a7 = b7 / c7;                                                                                                          a7 = b7; //cout<<'+'<<endl;
		b7 = a7 / c7;                                                                                                          b7 = c7; //cout<<'+'<<endl;
		c7 = a7 / b7;                                                                                                          c7 = a7; //cout<<'+'<<endl;

		a8 = b8 / c8;                                                                                                          a8 = b8; //cout<<'+'<<endl;
		b8 = a8 / c8;                                                                                                          b8 = c8; //cout<<'+'<<endl;
		c8 = a8 / b8;                                                                                                          c8 = a8; //cout<<'+'<<endl;

		a9 = b9 / c9;                                                                                                          a9 = b9; //cout<<'+'<<endl;
		b9 = a9 / c9;                                                                                                          b9 = c9; //cout<<'+'<<endl;
		c9 = a9 / b9;                                                                                                          c9 = a9; //cout<<'+'<<endl;

		a10 = b10 / c10;                                                                                                       a10 = b10; //cout<<'+'<<endl;
		b10 = a10 / c10;                                                                                                       b10 = c10; //cout<<'+'<<endl;
		c10 = a10 / b10;                                                                                                       c10 = a10; //cout<<'+'<<endl;
	}
	double tDiv2 = clock();
	double tDiv = (double)(tDiv2 - tDiv1 - 2 * tEmpty) / CLOCKS_PER_SEC;
	v[3][3] = 30 * n / tDiv;
}

void Char() {
	char a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20;
	char b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15, b16, b17, b18, b19, b20;
	char c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20;
	double tEmpty1 = clock();
	for (long int i = 0; i<n; i++)
	{
		a1 = 14;
		a2 = 26;
		a3 = 35;
		a4 = 47;
		a5 = 125;
		a6 = 104;
		a7 = 54;
		a8 = 54;
		a9 = 93;
		a10 = 10;
		a11 = 34;
		a12 = 45;
		a13 = 78;
		a14 = 19;
		a15 = 15;
		a16 = 16;
		a17 = 29;
		a18 = 18;
		a19 = 98;
		a20 = 20;

		a1 = a20;
		a2 = a19;
		a3 = a18;
		a4 = a17;
		a5 = a16;
		a6 = a15;
		a7 = a14;
		a8 = a13;
		a9 = a12;
		a10 = a11;
		a11 = a10;
		a12 = a9;
		a13 = a8;
		a14 = a7;
		a15 = a6;
		a16 = a5;
		a17 = a4;
		a18 = a3;
		a19 = a2;
		a20 = a1;

		b1 = 20;
		b2 = 23;
		b3 = 65;
		b4 = 45;
		b5 = 78;
		b6 = 15;
		b7 = 98;
		b8 = 69;
		b9 = 19;
		b10 = 89;

		b1 = b10;
		b2 = b9;
		b3 = b8;
		b4 = b7;
		b5 = b6;
		b6 = b5;
		b7 = b4;
		b8 = b3;
		b9 = b2;
		b10 = b1;
	}
	double tEmpty2 = clock();
	double tEmpty = (double)(tEmpty2 - tEmpty1) / CLOCKS_PER_SEC;

	a1 = 14;
	a2 = 26;
	a3 = 35;
	a4 = 47;
	a5 = 125;
	a6 = 104;
	a7 = 54;
	a8 = 54;
	a9 = 93;
	a10 = 10;
	a11 = 34;
	a12 = 45;
	a13 = 78;
	a14 = 19;
	a15 = 15;
	a16 = 16;
	a17 = 29;
	a18 = 18;
	a19 = 98;
	a20 = 20;

	b1 = 20;
	b2 = 23;
	b3 = 65;
	b4 = 45;
	b5 = 78;
	b6 = 15;
	b7 = 98;
	b8 = 69;
	b9 = 19;
	b10 = 89;
	b11 = 99;
	b12 = 69;
	b13 = 59;
	b14 = 79;
	b15 = 49;
	b16 = 39;
	b17 = 108;
	b18 = 66;
	b19 = 59;
	b20 = 79;

	c1 = 30;
	c2 = 33;
	c3 = 36;
	c4 = 39;
	c5 = 42;
	c6 = 45;
	c7 = 48;
	c8 = 51;
	c9 = 54;
	c10 = 57;
	c11 = 60;
	c12 = 63;
	c13 = 66;
	c14 = 69;
	c15 = 72;
	c16 = 75;
	c17 = 78;
	c18 = 81;
	c19 = 84;
	c20 = 87;

	double tPlus1 = clock();
	for (long int i = 0; i<n; i++)
	{
		a1 = b1 + c1;
		b1 = a1 + c1;
		c1 = a1 + b1;

		a2 = b2 + c2;
		b2 = a2 + c2;
		c2 = a2 + b2;

		a3 = b3 + c3;
		b3 = a3 + c3;
		c3 = a3 + b3;

		a4 = b4 + c4;
		b4 = a4 + c4;
		c4 = a4 + b4;

		a5 = b5 + c5;
		b5 = a5 + c5;
		c5 = a5 + b5;

		a6 = b6 + c6;
		b6 = a6 + c6;
		c6 = a6 + b6;

		a7 = b7 + c7;
		b7 = a7 + c7;
		c7 = a7 + b7;

		a8 = b8 + c8;
		b8 = a8 + c8;
		c8 = a8 + b8;

		a9 = b9 + c9;
		b9 = a9 + c9;
		c9 = a9 + b9;

		a10 = b10 + c10;
		b10 = a10 + c10;
		c10 = a10 + b10;

		a1 = b1 + c1;
		b1 = a1 + c1;
		c1 = a1 + b1;

		a2 = b2 + c2;
		b2 = a2 + c2;
		c2 = a2 + b2;

		a3 = b3 + c3;
		b3 = a3 + c3;
		c3 = a3 + b3;

		a4 = b4 + c4;
		b4 = a4 + c4;
		c4 = a4 + b4;

		a5 = b5 + c5;
		b5 = a5 + c5;
		c5 = a5 + b5;

		a6 = b6 + c6;
		b6 = a6 + c6;
		c6 = a6 + b6;

		a7 = b7 + c7;
		b7 = a7 + c7;
		c7 = a7 + b7;

		a8 = b8 + c8;
		b8 = a8 + c8;
		c8 = a8 + b8;

		a9 = b9 + c9;
		b9 = a9 + c9;
		c9 = a9 + b9;

		a10 = b10 + c10;
		b10 = a10 + c10;
		c10 = a10 + b10;
	}
	double tPlus2 = clock();
	double tPlus = (double)(tPlus2 - tPlus1 - tEmpty) / CLOCKS_PER_SEC;
	v[4][0] = 60 * n / tPlus;
	double tMinus = clock();
	for (long int i = 0; i<n; i++)
	{
		a1 = b1 - c1;
		b1 = a1 - c1;
		c1 = a1 - b1;

		a2 = b2 - c2;
		b2 = a2 - c2;
		c2 = a2 - b2;

		a3 = b3 - c3;
		b3 = a3 - c3;
		c3 = a3 - b3;

		a4 = b4 - c4;
		b4 = a4 - c4;
		c4 = a4 - b4;

		a5 = b5 - c5;
		b5 = a5 - c5;
		c5 = a5 - b5;

		a6 = b6 - c6;
		b6 = a6 - c6;
		c6 = a6 - b6;

		a7 = b7 - c7;
		b7 = a7 - c7;
		c7 = a7 - b7;

		a8 = b8 - c8;
		b8 = a8 - c8;
		c8 = a8 - b8;

		a9 = b9 - c9;
		b9 = a9 - c9;
		c9 = a9 - b9;

		a10 = b10 - c10;
		b10 = a10 - c10;
		c10 = a10 - b10;

		a1 = b1 - c1;
		b1 = a1 - c1;
		c1 = a1 - b1;

		a2 = b2 - c2;
		b2 = a2 - c2;
		c2 = a2 - b2;

		a3 = b3 - c3;
		b3 = a3 - c3;
		c3 = a3 - b3;

		a4 = b4 - c4;
		b4 = a4 - c4;
		c4 = a4 - b4;

		a5 = b5 - c5;
		b5 = a5 - c5;
		c5 = a5 - b5;

		a6 = b6 - c6;
		b6 = a6 - c6;
		c6 = a6 - b6;

		a7 = b7 - c7;
		b7 = a7 - c7;
		c7 = a7 - b7;

		a8 = b8 - c8;
		b8 = a8 - c8;
		c8 = a8 - b8;

		a9 = b9 - c9;
		b9 = a9 - c9;
		c9 = a9 - b9;

		a10 = b10 - c10;
		b10 = a10 - c10;
		c10 = a10 - b10;
	}
	tMinus = (double)(clock() - tMinus - tEmpty) / CLOCKS_PER_SEC;
	v[4][1] = 60 * n / tMinus;

	double tMult1 = clock();
	for (long int i = 0; i<n + 1520000; i++)
	{
		a1 = b1 * c1;
		b1 = a1 * c1;
		c1 = a1 * b1;

		a2 = b2 * c2;
		b2 = a2 * c2;
		c2 = a2 * b2;

		a3 = b3 * c3;
		b3 = a3 * c3;
		c3 = a3 * b3;

		a4 = b4 * c4;
		b4 = a4 * c4;
		c4 = a4 * b4;

		a5 = b5 * c5;
		b5 = a5 * c5;
		c5 = a5 * b5;

		a6 = b6 * c6;
		b6 = a6 * c6;
		c6 = a6 * b6;

		a7 = b7 * c7;
		b7 = a7 * c7;
		c7 = a7 * b7;

		a8 = b8 * c8;
		b8 = a8 * c8;
		c8 = a8 * b8;

		a9 = b9 * c9;
		b9 = a9 * c9;
		c9 = a9 * b9;

		a10 = b10 * c10;
		b10 = a10 * c10;
		c10 = a10 * b10;

		a1 = b1 * c1;
		b1 = a1 * c1;
		c1 = a1 * b1;

		a2 = b2 * c2;
		b2 = a2 * c2;
		c2 = a2 * b2;

		a3 = b3 * c3;
		b3 = a3 * c3;
		c3 = a3 * b3;

		a4 = b4 * c4;
		b4 = a4 * c4;
		c4 = a4 * b4;

		a5 = b5 * c5;
		b5 = a5 * c5;
		c5 = a5 * b5;

		a6 = b6 * c6;
		b6 = a6 * c6;
		c6 = a6 * b6;

		a7 = b7 * c7;
		b7 = a7 * c7;
		c7 = a7 * b7;

		a8 = b8 * c8;
		b8 = a8 * c8;
		c8 = a8 * b8;

		a9 = b9 * c9;
		b9 = a9 * c9;
		c9 = a9 * b9;

		a10 = b10 * c10;
		b10 = a10 * c10;
		c10 = a10 * b10;
	}
	double tMult2 = clock();
	double tMult = (double)(tMult2 - tMult1 - tEmpty) / CLOCKS_PER_SEC;
	v[4][2] = 60 * n / tMult;

	a1 = 14;
	a2 = 26;
	a3 = 35;
	a4 = 47;
	a5 = 125;
	a6 = 104;
	a7 = 54;
	a8 = 54;
	a9 = 93;
	a10 = 10;
	a11 = 34;
	a12 = 45;
	a13 = 78;
	a14 = 19;
	a15 = 15;
	a16 = 16;
	a17 = 29;
	a18 = 18;
	a19 = 98;
	a20 = 20;

	b1 = 20;
	b2 = 23;
	b3 = 65;
	b4 = 45;
	b5 = 78;
	b6 = 15;
	b7 = 98;
	b8 = 69;
	b9 = 19;
	b10 = 89;
	b11 = 99;
	b12 = 69;
	b13 = 59;
	b14 = 79;
	b15 = 49;
	b16 = 39;
	b17 = 108;
	b18 = 66;
	b19 = 59;
	b20 = 79;

	c1 = 30;
	c2 = 33;
	c3 = 36;
	c4 = 39;
	c5 = 42;
	c6 = 45;
	c7 = 48;
	c8 = 51;
	c9 = 54;
	c10 = 57;
	c11 = 60;
	c12 = 63;
	c13 = 66;
	c14 = 69;
	c15 = 72;
	c16 = 75;
	c17 = 78;
	c18 = 81;
	c19 = 84;
	c20 = 87;
	double tDiv1 = clock();
	for (long int i = 0; i<n; i++)
	{
		a1 = b1 / c1;                                                                                                          a1 = b1; //cout<<'+'<<endl;
		b1 = a1 / c1;                                                                                                          b1 = c1; //cout<<'+'<<endl;
		c1 = a1 / b1;                                                                                                          c1 = a1; //cout<<'+'<<endl;

		a2 = b2 / c2;                                                                                                          a2 = b2; //cout<<'+'<<endl;
		b2 = a2 / c2;                                                                                                          b2 = c2; //cout<<'+'<<endl;
		c2 = a2 / b2;                                                                                                          c2 = a2; //cout<<'+'<<endl;

		a3 = b3 / c3;                                                                                                          a3 = b3; //cout<<'+'<<endl;
		b3 = a3 / c3;                                                                                                          b3 = c3; //cout<<'+'<<endl;
		c3 = a3 / b3;                                                                                                          c3 = a3; //cout<<'+'<<endl;

		a4 = b4 / c4;                                                                                                          a4 = b4; //cout<<'+'<<endl;
		b4 = a4 / c4;                                                                                                          b4 = c4; //cout<<'+'<<endl;
		c4 = a4 / b4;                                                                                                          c4 = a4; //cout<<'+'<<endl;

		a5 = b5 / c5;                                                                                                          a5 = b5; //cout<<'+'<<endl;
		b5 = a5 / c5;                                                                                                          b5 = c5; //cout<<'+'<<endl;
		c5 = a5 / b5;                                                                                                          c5 = a5; //cout<<'+'<<endl;

		a6 = b6 / c6;                                                                                                          a6 = b6; //cout<<'+'<<endl;
		b6 = a6 / c6;                                                                                                          b6 = c6; //cout<<'+'<<endl;
		c6 = a6 / b6;                                                                                                          c6 = a6; //cout<<'+'<<endl;

		a7 = b7 / c7;                                                                                                          a7 = b7; //cout<<'+'<<endl;
		b7 = a7 / c7;                                                                                                          b7 = c7; //cout<<'+'<<endl;
		c7 = a7 / b7;                                                                                                          c7 = a7; //cout<<'+'<<endl;

		a8 = b8 / c8;                                                                                                          a8 = b8; //cout<<'+'<<endl;
		b8 = a8 / c8;                                                                                                          b8 = c8; //cout<<'+'<<endl;
		c8 = a8 / b8;                                                                                                          c8 = a8; //cout<<'+'<<endl;

		a9 = b9 / c9;                                                                                                          a9 = b9; //cout<<'+'<<endl;
		b9 = a9 / c9;                                                                                                          b9 = c9; //cout<<'+'<<endl;
		c9 = a9 / b9;                                                                                                          c9 = a9; //cout<<'+'<<endl;

		a10 = b10 / c10;                                                                                                       a10 = b10; //cout<<'+'<<endl;
		b10 = a10 / c10;                                                                                                       b10 = c10; //cout<<'+'<<endl;
		c10 = a10 / b10;                                                                                                       c10 = a10; //cout<<'+'<<endl;
	}
	double tDiv2 = clock();
	double tDiv = (double)(tDiv2 - tDiv1 - 2 * tEmpty) / CLOCKS_PER_SEC;
	v[4][3] = 30 * n / tDiv;
}

void print() {
	string op[4] = { "+", "-", "*", "/" }, type[5] = { "int", "long", "double", "float", "char" };
	int percent[5][4];
	//cout.precision(9);
	double max = 0;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 4; j++)
			if (v[i][j] > max) max = v[i][j];
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 4; j++)
			percent[i][j] = round((v[i][j] / max) * 100);
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++)
		{
			cout << op[j] << "     " << type[i] << "   ";
			printf("\t%02.09e \t", v[i][j]);
			print_stars(percent[i][j]);
			printf("%d%%\n", percent[i][j]);
		}
		cout << endl;
	}
}

void print_stars(int percent)
{
	int n = 40;
	int c = int((double(percent) / 100.0)*double(n));
	for (int i = 0; i<c; i++) printf("X");
	for (int i = c; i<n; i++) printf(" ");
	cout << "  ";
}