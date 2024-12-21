#include <iostream>
using namespace std;

// Nama : Anak Agung Mas Mayuri
// Kelas : XI IPA 8


int main (){
	float a;
	char mode;
	
	cout << "== Selamat Datang di Konversi Satuan Panjang ==" << endl;
	cout << endl;
	cout << "Silahkan piih mode konversi" << endl;
	cout << "A. Konversi Kilo gram (kg)" << endl;
	cout << "B. Konversi Hekto gram (hg) atau ons" << endl;
	cout << "C. Konversi Deka gram (dam)" << endl;
	cout << "D. Konversi Gram (g)" << endl;
	cout << "E. Konversi Desi gram (dg)" << endl;
	cout << "F. Konversi Centi gram (cg)" << endl;
	cout << "G. Konversi Mili gram (mg)" << endl;
	cout << endl;
	cout << "Masukkan pilihan anda dalam Huruf Kapital : " << endl;
	cin >> mode;
	cout << "--------------------------------------------" << endl;
	
	switch (mode){
		case 'A':
			cout << "Konversi Kilo gram" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi kg" << endl;
            
			cout << "a. kg ke hg" << endl;
			cout << "b. kg ke dam" << endl;
			cout << "c. kg ke g" << endl;
			cout << "d. kg ke dg" << endl;
			cout << "e. kg ke cg" << endl;
			cout << "f. kg ke mg" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			 case 'a':
            		cout << "Kilo gram ke Hekto gram" << endl;
            		cout << endl;
		            cout << "Masukkan nilai kg" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " kg adalah " << a*10 << " hg" <<endl;
		            break;
            
				case 'b':
		            cout << "Kilo gram ke Deka gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai kg" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " kg adalah " << a*100 << " dg" <<endl;
		            break;
		            
		        case 'c':
		            cout << "Kilo gram ke Gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai kg" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " kg adalah " << a*1000 << " g" <<endl;
		            break;
		            
		        case 'd':
		            cout << "Kilo gram ke Desi gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai kg" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " kg adalah " << a*10000 << " dg" <<endl;
		            break;
		            
		        case 'e':
		            cout << "Kilo gram ke Centi gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai kg" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " kg adalah " << a*100000 << " cg" <<endl;
		            break;
		            
		        case 'f':
		            cout << "Kilo gram ke Mili gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai kg" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " kg adalah " << a*1000000 << " mg" <<endl;
		            break;
		            
		        default:
            		cout << "Pilihan tidak tersedia" << endl;
			}
			break;
			
		
		case 'B':
			cout << "Konversi Hekto gram (ons)" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi hg" << endl;
            
			cout << "a. hg ke kg" << endl;
			cout << "b. hg ke dag" << endl;
			cout << "c. hg ke g" << endl;
			cout << "d. hg ke dg" << endl;
			cout << "e. hg ke cg" << endl;
			cout << "f. hg ke mg" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			 case 'a':
            		cout << "Hekto gram ke Kilo gram" << endl;
            		cout << endl;
		            cout << "Masukkan nilai hg" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " hg adalah " << a/10 << " kg" <<endl;
		            break;
            
				case 'b':
		            cout << "Hekto gram ke Deka Gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai hg" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " hg adalah " << a*10 << " dg" <<endl;
		            break;
		            
		        case 'c':
		            cout << "Hekto gram ke Gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai hg" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " hg adalah " << a*100 << " g" <<endl;
		            break;
		            
		        case 'd':
		            cout << "Hekto gram ke Desi gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai hg" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " hg adalah " << a*1000 << " dg" <<endl;
		            break;
		            
		        case 'e':
		            cout << "Hekto gram ke Centi gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai hg" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " hg adalah " << a*10000 << " cg" <<endl;
		            break;
		            
		        case 'f':
		            cout << "Hekto gram ke Mili gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai hg" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " hg adalah " << a*100000 << " mg" <<endl;
		            break;
		            
		        default:
            		cout << "Pilihan tidak tersedia" << endl;
			}
			break;
		
		case 'C':
			cout << "Konversi Deka gram" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi dag" << endl;
            
			cout << "a. dag ke kg" << endl;
			cout << "b. dag ke hg" << endl;
			cout << "c. dag ke g" << endl;
			cout << "d. dag ke dg" << endl;
			cout << "e. dag ke cg" << endl;
			cout << "f. dag ke mg" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			 case 'a':
            		cout << "Deka gram ke Kilo gram" << endl;
            		cout << endl;
		            cout << "Masukkan nilai dag" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " dag adalah " << a/100 << " kg" <<endl;
		            break;
            
				case 'b':
		            cout << "Deka gram ke Hekto Gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai dag" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " dag adalah " << a/10 << " hg" <<endl;
		            break;
		            
		        case 'c':
		            cout << "Deka gram ke Gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai dag" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " dag adalah " << a*10 << " g" <<endl;
		            break;
		            
		        case 'd':
		            cout << "Deka gram ke Desi gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai dag" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " dag adalah " << a*100 << " dg" <<endl;
		            break;
		            
		        case 'e':
		            cout << "Deka gram ke Centi gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai dag" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " dag adalah " << a*1000 << " cg" <<endl;
		            break;
		            
		        case 'f':
		            cout << "Deka gram ke Mili gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai dag" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " dag adalah " << a*10000 << " mg" <<endl;
		            break;
		            
		        default:
            		cout << "Pilihan tidak tersedia" << endl;
			}
			break;
			
		case 'D':
			cout << "Konversi Gram" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi g" << endl;
            
			cout << "a. g ke kg" << endl;
			cout << "b. g ke hg" << endl;
			cout << "c. g ke dag" << endl;
			cout << "d. g ke dg" << endl;
			cout << "e. g ke cg" << endl;
			cout << "f. g ke mg" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			 case 'a':
            		cout << "Gram ke Kilo gram" << endl;
            		cout << endl;
		            cout << "Masukkan nilai g" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " g adalah " << a/1000 << " kg" <<endl;
		            break;
            
				case 'b':
		            cout << "Gram ke Hekto Gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai g" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " g adalah " << a/100 << " hg" <<endl;
		            break;
		            
		        case 'c':
		            cout << "Gram ke Deka Gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai g" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " g adalah " << a/10 << " dag" <<endl;
		            break;
		            
		        case 'd':
		            cout << "Gram ke Desi gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai g" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " g adalah " << a*10 << " dg" <<endl;
		            break;
		            
		        case 'e':
		            cout << "Gram ke Centi gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai g" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " g adalah " << a*100 << " cg" <<endl;
		            break;
		            
		        case 'f':
		            cout << "Gram ke Mili gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai g" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " g adalah " << a*1000 << " mg" <<endl;
		            break;
		            
		        default:
            		cout << "Pilihan tidak tersedia" << endl;
			}
			break;
			
		case 'E':
			cout << "Konversi Desi gram" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi dg" << endl;
            
			cout << "a. dg ke kg" << endl;
			cout << "b. dg ke hg" << endl;
			cout << "c. dg ke dag" << endl;
			cout << "d. dg ke g" << endl;
			cout << "e. dg ke cg" << endl;
			cout << "f. dg ke mg" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			 case 'a':
            		cout << "Desi gram ke Kilo gram" << endl;
            		cout << endl;
		            cout << "Masukkan nilai dg" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " dg adalah " << a/10000 << " kg" <<endl;
		            break;
            
				case 'b':
		            cout << "Desi gram ke Hekto Gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai dg" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " dg adalah " << a/1000 << " hg" <<endl;
		            break;
		            
		        case 'c':
		            cout << "Desi gram ke Deka gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai dg" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " dg adalah " << a/100 << " dag" <<endl;
		            break;
		            
		        case 'd':
		            cout << "Desi gram ke Gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai dg" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " dg adalah " << a/10 << " g" <<endl;
		            break;
		            
		        case 'e':
		            cout << "Desi gram ke Centi gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai dg" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " dg adalah " << a*10 << " cg" <<endl;
		            break;
		            
		        case 'f':
		            cout << "Desi gram ke Mili gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai dg" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " dg adalah " << a*100 << " mg" <<endl;
		            break;
		            
		        default:
            		cout << "Pilihan tidak tersedia" << endl;
			}
			break;
			
		case 'F':
			cout << "Konversi Centi gram" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi cg" << endl;
            
			cout << "a. cg ke kg" << endl;
			cout << "b. cg ke hg" << endl;
			cout << "c. cg ke dag" << endl;
			cout << "d. cg ke g" << endl;
			cout << "e. cg ke dg" << endl;
			cout << "f. cg ke mg" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			 case 'a':
            		cout << "Centi gram ke Kilo gram" << endl;
            		cout << endl;
		            cout << "Masukkan nilai cg" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " cg adalah " << a/100000 << " kg" <<endl;
		            break;
            
				case 'b':
		            cout << "Centi gram ke Hekto Gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai cg" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " cg adalah " << a/10000 << " hg" <<endl;
		            break;
		            
		        case 'c':
		            cout << "Centi gram ke Deka Gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai cg" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " cg adalah " << a/1000 << " dag" <<endl;
		            break;
		            
		        case 'd':
		            cout << "Centi gram ke Gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai cg" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " cg adalah " << a/100 << " g" <<endl;
		            break;
		            
		        case 'e':
		            cout << "Centi gram ke Desi gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai cg" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " cg adalah " << a/10 << " dg" <<endl;
		            break;
		            
		        case 'f':
		            cout << "Centi gram ke Mili gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai cg" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " cg adalah " << a*10 << " mg" <<endl;
		            break;
		            
		        default:
            		cout << "Pilihan tidak tersedia" << endl;
			}
			break;
			
		case 'G':
			cout << "Konversi Mili gram" << endl;
			cout << endl;
			cout << "Silahkan piih mode konversi mg" << endl;
            
			cout << "a. mg ke kg" << endl;
			cout << "b. mg ke hg" << endl;
			cout << "c. mg ke dag" << endl;
			cout << "d. mg ke g" << endl;
			cout << "e. mg ke dg" << endl;
			cout << "f. mg ke cg" << endl;
			cout << endl;
			cout << "Masukkan pilihan anda : " << endl;
			cin >> mode;
			cout << "--------------------------------------------" << endl;
			cout << endl;
			
			
			switch (mode){
       			 case 'a':
            		cout << "Mili gram ke Kilo gram" << endl;
            		cout << endl;
		            cout << "Masukkan nilai mg" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " mg adalah " << a/1000000 << " kg" <<endl;
		            break;
            
				case 'b':
		            cout << "Mili gram ke Hekto gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai mg" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " mg adalah " << a/100000 << " hg" <<endl;
		            break;
		            
		        case 'c':
		            cout << "Mili gram ke Deka gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai mg" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " mg adalah " << a/10000 << " dag" <<endl;
		            break;
		            
		        case 'd':
		            cout << "Mili gram ke Gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai mg" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " mg adalah " << a/1000 << " g" <<endl;
		            break;
		            
		        case 'e':
		            cout << "Mili gram ke Desi gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai mg" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " mg adalah " << a/100 << " dg" <<endl;
		            break;
		            
		        case 'f':
		            cout << "Mili gram ke Centi gram" << endl;
		            cout << endl;
		           
		            cout << "Masukkan nilai mg" << endl;
		            cin >> a;
		            cout << endl;            
		            cout << "Nilai dari " << a << " mg adalah " << a/10 << " cg" <<endl;
		            break;
		            
		        default:
            		cout << "Pilihan tidak tersedia" << endl;
			}
			break;
	
		default:
            cout << "Pilihan tidak tersedia" << endl;	
			break;	
	}
	
	return 0;
}


