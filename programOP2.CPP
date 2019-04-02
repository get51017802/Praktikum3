#include <iostream.h>
 int main ()
 {
  int n, m;
 float l;
 cout<<"Masukan tanggal kelahiran anda (n) : "; cin>>n;
 cout<<"Masukan bulan kelahiran anda (m) : "; cin>>m;
 cout<<"Masukan tanggal lahir anda (l), isi 2 digit akhir  : "; cin>>l;

 n +=m;
 cout<<"Nilai n += m:  "<<n<<endl;
 n-=m;
 cout<<"Nilai n -= m:  "<<n<<endl;
 n%=m;
 cout<<"Nilai n *= m:  "<<n<<endl;
 l/=m;
 cout<<"Nilai l/= m:  "<<n<<endl;
 return (0);
 }



