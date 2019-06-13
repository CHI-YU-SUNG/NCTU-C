#include<stdio.h>
class Fraction
{  
		int numer;
		int denom;
		int find_gcd(int n,int d){
			int r;
			while(n){
				r = d % n;
				d = n;
				n = r;
			}
			return d;
		}
	public:
		Fraction(){
			numer = 1;
			denom = 1;
		}
		Fraction(int n){
			numer = n;
			denom = 1;
		}
		Fraction(int n,int d){
			numer = n;
			denom = d;
		}
		void setNum(int n){
			numer = n;
		}
		void setDEN(int d){
			denom = d;
		}
		int getNum(){
			return numer;
		}
		int getDen(){
			return denom;
		}
		void increment(int &n,int &d){
			n++;
			numer = n;
			d++;
			denom = d;
		}
		Fraction operator + (const Fraction &fr){
			numer = numer * fr.denom + fr.numer * denom;
			denom = denom * fr.denom; 
		}
		Fraction operator * (const Fraction &fr){
			numer = numer * fr.numer;
			denom = denom * fr.denom;
		}
		Fraction operator - (const Fraction &fr){
			numer = numer * fr.denom - fr.numer * denom;
			denom = denom * fr.denom;
		}
		Fraction operator / (const Fraction &fr){
			numer = numer * fr.denom;
			denom = denom * fr.numer;
		}
		void reduce_fraction(int n, int d){
			numer = n / find_gcd(n,d);
			denom = d / find_gcd(n,d);
		}
		void print_fraction(){
			printf("fraction is %d/%d\n",numer,denom);
		}
		bool IsProper_fraction(int n,int d){
			if(n < d)
				return true;
			return false;
		}
		
   };

int main()
{
	Fraction s1;
	s1.setNum(4);
	s1.setDEN(6);
	s1.reduce_fraction(s1.getNum(),s1.getDen());
	s1.print_fraction();
	int n = s1.getNum(),d = s1.getDen();
	s1.increment(n,d);
	s1.print_fraction();
	return 0;
}
