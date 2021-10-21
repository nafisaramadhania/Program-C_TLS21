#include <iostream>
#include <string>
using namespace std;

int main()
{
    string namaleng, namapang, matkul;
    int smt, i, j, m, n, o, p, q, r, data[50];
    float g, h, rata, jum, ratar, jumj, tugas, kuis, uts, uas, MK;
    
    cout<<"Nama lengkap anda siapa? ";
    getline (cin, namaleng);
    cout<<"Nama panggilannya? Atau ingin dipanggil apa? ";
    getline (cin, namapang);
    cout<<"Ingin menghitung nilai MK dari mata kuliah apa? ";
    getline (cin, matkul);
    cout<<"Semester berapa? ";
    cin>>smt;
    cout<<"\nOkei, halo "<<namapang<<". Mari kita hitung nilai MK-mu di Mata Kuliah "<<matkul<<" Semester "<<smt<<"!\n";
    
    cout<<"---------------------";
    cout<<"\nBanyaknya Tugas = ";
    cin>>n;
    cout<<"Proporsi Tugas (tidak perlu persen) = ";
    cin>>o;
    
    for (i=0; i<n; i++)
        {
           cout<<"Tugas ke-"<<i+1<<" = ";
           cin>>data[i];
           jum += data[i];
        }
        
    rata=jum/n;
        
    cout<<"Nilai Total = "<<jum<<endl;
    cout<<"Nilai Rata-rata = "<<rata<<endl;
	
	cout<<"\nBanyaknya Kuis = ";
    cin>>m;
    cout<<"Proporsi Kuis (tidak perlu persen) = ";
    cin>>p;
    
    for (j=0; j<m; j++)
        {
           cout<<"Kuis ke-"<<j+1<<" = ";
           cin>>data[j];
           jumj += data[j];
        }
        
    ratar=jumj/m;
        
    cout<<"Nilai Total = "<<jumj<<endl;
    cout<<"Nilai Rata-rata = "<<ratar<<endl;
    
    cout<<"\nNilai UTS= ";
    cin>>g;
    cout<<"Proporsi UTS (tidak perlu persen) = ";
    cin>>q;
    cout<<"Nilai UAS= ";
    cin>>h;
    cout<<"Proporsi UAS (tidak perlu persen) = ";
    cin>>r;
    
    tugas=rata * o/100;
    kuis=ratar * p/100;
    uts=g*q/100;
    uas=h*r/100;
    MK=(tugas+kuis+uts+uas)/25;
    
    cout<<"\nJadi "<<namapang<<", segini nilai MK-mu "<<MK<<" di Mata Kuliah "<<matkul<<" semester "<<smt<<".\nSemoga puas dengan pelayanan kami dan IP mu, terima kasih! :)\n";
    
    return (0);
}
