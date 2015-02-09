#include <iostream>
#include <map>

using namespace std;

typedef long long ll;

inline ll toDecimal(register ll n)
{

	ll dec = 0, power = 1;
	while(n)
	{
		dec += (n % 10) * power;
		power *= 2;
		n /= 10;
	}
	return dec;
}

int main()
{
	map<ll, char*> unidades;
	map<ll, char*> decenas;
	map<ll, char*> centenas;
	map<ll, char*> millares;
	ll u = 0, d = 0, c = 0, m = 0, t = 0, n = 0;
	
	unidades[1] = "I";
	unidades[2] = "II";
	unidades[3] = "III";
	unidades[4] = "IV";
	unidades[5] = "V";
	unidades[6] = "VI";
	unidades[7] = "VII";
	unidades[8] = "VIII";
	unidades[9] = "IX";
	
	decenas[1] = "X";
	decenas[2] = "XX";
	decenas[3] = "XXX";
	decenas[4] = "XL";
	decenas[5] = "L";
	decenas[6] = "LX";
	decenas[7] = "LXX";
	decenas[8] = "LXXX";
	decenas[9] = "XC";
	
	centenas[1] = "C";
	centenas[2] = "CC";
	centenas[3] = "CCC";
	centenas[4] = "CD";
	centenas[5] = "D";
	centenas[6] = "DC";
	centenas[7] = "DCC";
	centenas[8] = "DCCC";
	centenas[9] = "CM";
	
	millares[1] = "M";
	millares[2] = "MM";
	millares[3] = "MMM";
	
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		
		n = toDecimal(n);
		
		u = n % 10;
		n /= 10;
		
		d = n % 10;
		n /= 10;
		
		c = n % 10;
		n /= 10;
		
		m = n % 10;
		
		if(m)
			cout<<millares[m];
		if(c)
			cout<<centenas[c];
		if(d)
			cout<<decenas[d];
		if(u)
			cout<<unidades[u];
			
		cout<<endl;
	}
	
	
	
	return 0;
}
