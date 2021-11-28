#include<iostream>
#include<Windows.h>
#include<conio.h>



int main() {
	setlocale(0, " ");
	int		a1 = 10,
		a2 = 10,
		a3 = 30,
		a4 = 40,
		a5 = 50,
		a6 = 60,
		a7 = 70,
		a8 = 80,
		a9 = 90,
		a10 = 100;
	double	b1 = 10.1,
		b2 = 10.12,
		b3 = 30.11,
		b4 = 40.65,
		b5 = 50.45,
		b6 = 60.11,
		b7 = 70.09,
		b8 = 80.89,
		b9 = 90.67,
		b10 = 100.53;
	float	c1 = 10.12312,
		c2 = 10.41412,
		c3 = 30.5151,
		c4 = 40.123122,
		c5 = 50.125125,
		c6 = 60.14215,
		c7 = 70.523,
		c8 = 80.532,
		c9 = 90.5236,
		c10 = 100.2362;
	long	d1 = 10,
		d2 = 10,
		d3 = 30,
		d4 = 40,
		d5 = 50,
		d6 = 60,
		d7 = 70,
		d8 = 80,
		d9 = 90,
		d10 = 100;
	short	e1 = 10,
		e2 = 10,
		e3 = 30,
		e4 = 40,
		e5 = 50,
		e6 = 60,
		e7 = 70,
		e8 = 80,
		e9 = 90,
		e10 = 100;
	bool	f1 = 1,
		f2 = 0,
		f3 = 0,
		f4 = 0,
		f5 = 0,
		f6 = 1,
		f7 = true,
		f8 = true,
		f9 = false,
		f10 = true;
	char	g1 = 'a',
		g2 = 'b',
		g3 = 'c',
		g4 = 'd',
		g5 = 'e',
		g6 = 'f',
		g7 = 'g',
		g8 = 'h',
		g9 = 'w',
		g10 = '0';
	std::string	z1 = "asdas",
		z2 = "dsadas",
		z3 = "dagag",
		z4 = "dsadas",
		z5 = "wetwe",
		z6 = "hdhfd",
		z7 = "gdgfg",
		z8 = "hergre",
		z9 = "simA",
		z10 = "fahdh";

	std::cout << "a1=" << a1 << " тип: int, размер: " << sizeof(a1) << " б\n";
	std::cout << "a2=" << a2 << " тип: int, размер: " << sizeof(a2) << " б\n";
	std::cout << "a3=" << a3 << " тип: int, размер: " << sizeof(a3) << " б\n";
	std::cout << "a4=" << a4 << " тип: int, размер: " << sizeof(a4) << " б\n";
	std::cout << "a5=" << a5 << " тип: int, размер: " << sizeof(a5) << " б\n";
	std::cout << "a6=" << a6 << " тип: int, размер: " << sizeof(a6) << " б\n";
	std::cout << "a7=" << a7 << " тип: int, размер: " << sizeof(a7) << " б\n";
	std::cout << "a8=" << a8 << " тип: int, размер: " << sizeof(a8) << " б\n";
	std::cout << "a9=" << a9 << " тип: int, размер: " << sizeof(a9) << " б\n";
	std::cout << "a10=" << a10 << " тип: int, размер: " << sizeof(a10) << " б\n\n";

	std::cout << "b1=" << b1 << " тип: double, размер: " << sizeof(b1) << " б\n";
	std::cout << "b2=" << b2 << " тип: double, размер: " << sizeof(b2) << " б\n";
	std::cout << "b3=" << b3 << " тип: double, размер: " << sizeof(b3) << " б\n";
	std::cout << "b4=" << b4 << " тип: double, размер: " << sizeof(b4) << " б\n";
	std::cout << "b5=" << b5 << " тип: double, размер: " << sizeof(b5) << " б\n";
	std::cout << "b6=" << b6 << " тип: double, размер: " << sizeof(b6) << " б\n";
	std::cout << "b7=" << b7 << " тип: double, размер: " << sizeof(b7) << " б\n";
	std::cout << "b8=" << b8 << " тип: double, размер: " << sizeof(b8) << " б\n";
	std::cout << "b9=" << b9 << " тип: double, размер: " << sizeof(b9) << " б\n";
	std::cout << "b10=" << b10 << " тип: double, размер: " << sizeof(b10) << " б\n\n";

	std::cout << "c1=" << c1 << " тип: float, размер: " << sizeof(c1) << " б\n";
	std::cout << "c2=" << c2 << " тип: float, размер: " << sizeof(c2) << " б\n";
	std::cout << "c3=" << c3 << " тип: float, размер: " << sizeof(c3) << " б\n";
	std::cout << "c4=" << c4 << " тип: float, размер: " << sizeof(c4) << " б\n";
	std::cout << "c5=" << c5 << " тип: float, размер: " << sizeof(c5) << " б\n";
	std::cout << "c6=" << c6 << " тип: float, размер: " << sizeof(c6) << " б\n";
	std::cout << "c7=" << c7 << " тип: float, размер: " << sizeof(c7) << " б\n";
	std::cout << "c8=" << c8 << " тип: float, размер: " << sizeof(c8) << " б\n";
	std::cout << "c9=" << c9 << " тип: float, размер: " << sizeof(c9) << " б\n";
	std::cout << "c10=" << c10 << " тип: float, размер: " << sizeof(c10) << " б\n\n";

	std::cout << "d1=" << d1 << " тип: long, размер: " << sizeof(d1) << " б\n";
	std::cout << "d2=" << d2 << " тип: long, размер: " << sizeof(d2) << " б\n";
	std::cout << "d3=" << d3 << " тип: long, размер: " << sizeof(d3) << " б\n";
	std::cout << "d4=" << d4 << " тип: long, размер: " << sizeof(d4) << " б\n";
	std::cout << "d5=" << d5 << " тип: long, размер: " << sizeof(d5) << " б\n";
	std::cout << "d6=" << d6 << " тип: long, размер: " << sizeof(d6) << " б\n";
	std::cout << "d7=" << d7 << " тип: long, размер: " << sizeof(d7) << " б\n";
	std::cout << "d8=" << d8 << " тип: long, размер: " << sizeof(d8) << " б\n";
	std::cout << "d9=" << d9 << " тип: long, размер: " << sizeof(d9) << " б\n";
	std::cout << "d10=" << d10 << " тип: long, размер: " << sizeof(d10) << " б\n\n";

	std::cout << "e1=" << e1 << " тип: short, размер: " << sizeof(e1) << " б\n";
	std::cout << "e2=" << e2 << " тип: short, размер: " << sizeof(e2) << " б\n";
	std::cout << "e3=" << e3 << " тип: short, размер: " << sizeof(e3) << " б\n";
	std::cout << "e4=" << e4 << " тип: short, размер: " << sizeof(e4) << " б\n";
	std::cout << "e5=" << e5 << " тип: short, размер: " << sizeof(e5) << " б\n";
	std::cout << "e6=" << e6 << " тип: short, размер: " << sizeof(e6) << " б\n";
	std::cout << "e7=" << e7 << " тип: short, размер: " << sizeof(e7) << " б\n";
	std::cout << "e8=" << e8 << " тип: short, размер: " << sizeof(e8) << " б\n";
	std::cout << "e9=" << e9 << " тип: short, размер: " << sizeof(e9) << " б\n";
	std::cout << "e10=" << e10 << " тип: short, размер: " << sizeof(e10) << " б\n\n";

	std::cout << "f1=" << f1 << " тип: bool, размер: " << sizeof(f1) << " б\n";
	std::cout << "f2=" << f2 << " тип: bool, размер: " << sizeof(f2) << " б\n";
	std::cout << "f3=" << f3 << " тип: bool, размер: " << sizeof(f3) << " б\n";
	std::cout << "f4=" << f4 << " тип: bool, размер: " << sizeof(f4) << " б\n";
	std::cout << "f5=" << f5 << " тип: bool, размер: " << sizeof(f5) << " б\n";
	std::cout << "f6=" << f6 << " тип: bool, размер: " << sizeof(f6) << " б\n";
	std::cout << "f7=" << f7 << " тип: bool, размер: " << sizeof(f7) << " б\n";
	std::cout << "f8=" << f8 << " тип: bool, размер: " << sizeof(f8) << " б\n";
	std::cout << "f9=" << f9 << " тип: bool, размер: " << sizeof(f9) << " б\n";
	std::cout << "f10=" << f10 << " тип: bool, размер: " << sizeof(f10) << " б\n\n";

	std::cout << "g1=" << g1 << " тип: char, размер: " << sizeof(g1) << " б\n";
	std::cout << "g2=" << g2 << " тип: char, размер: " << sizeof(g2) << " б\n";
	std::cout << "g3=" << g3 << " тип: char, размер: " << sizeof(g3) << " б\n";
	std::cout << "g4=" << g4 << " тип: char, размер: " << sizeof(g4) << " б\n";
	std::cout << "g5=" << g5 << " тип: char, размер: " << sizeof(g5) << " б\n";
	std::cout << "g6=" << g6 << " тип: char, размер: " << sizeof(g6) << " б\n";
	std::cout << "g7=" << g7 << " тип: char, размер: " << sizeof(g7) << " б\n";
	std::cout << "g8=" << g8 << " тип: char, размер: " << sizeof(g8) << " б\n";
	std::cout << "g9=" << g9 << " тип: char, размер: " << sizeof(g9) << " б\n";
	std::cout << "g10=" << g10 << " тип: char, размер: " << sizeof(g10) << " б\n\n";

	std::cout << "z1=" << z1 << " тип: string, размер: " << sizeof(z1) << " б\n";
	std::cout << "z2=" << z2 << " тип: string, размер: " << sizeof(z2) << " б\n";
	std::cout << "z3=" << z3 << " тип: string, размер: " << sizeof(z3) << " б\n";
	std::cout << "z4=" << z4 << " тип: string, размер: " << sizeof(z4) << " б\n";
	std::cout << "z5=" << z5 << " тип: string, размер: " << sizeof(z5) << " б\n";
	std::cout << "z6=" << z6 << " тип: string, размер: " << sizeof(z6) << " б\n";
	std::cout << "z7=" << z7 << " тип: string, размер: " << sizeof(z7) << " б\n";
	std::cout << "z8=" << z8 << " тип: string, размер: " << sizeof(z8) << " б\n";
	std::cout << "z9=" << z9 << " тип: string, размер: " << sizeof(z9) << " б\n";
	std::cout << "z10=" << z10 << " тип: string, размер: " << sizeof(z10) << " б\n";


	return 0;
}