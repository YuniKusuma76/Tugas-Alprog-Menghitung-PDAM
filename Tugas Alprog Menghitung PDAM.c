#include <stdio.h>
#include<stdlib.h>
#include <math.h>

void cover();
void menu();
void kelas_rumahtangga();
void kelas_niaga();
void rumahtangga_a1();
void rumahtangga_a2();
void rumahtangga_a3();
void rumahtangga_a4();
void niaga_kecil();
void niaga_sedang();
void niaga_besar();
void pengulangan();
double validasi1(); 
double validasi2();
double validasi3();
void golongan1_a1(), golongan2_a1(), golongan3_a1(), golongan4_a1();
void golongan1_a2(), golongan2_a2(), golongan3_a2(), golongan4_a2();
void golongan1_a3(), golongan2_a3(), golongan3_a3(), golongan4_a3();
void golongan1_a4(), golongan2_a4(), golongan3_a4(), golongan4_a4();
void golongan1_e1(), golongan2_e1(), golongan3_e1(), golongan4_e1();
void golongan1_e2(), golongan2_e2(), golongan3_e2(), golongan4_e2();
void golongan1_e3(), golongan2_e3(), golongan3_e3(), golongan4_e3();

void cover(){
	printf("\t\t\t\t _________________________________________________________ \n");
	printf("\t\t\t\t|=========================================================|\n");
	printf("\t\t\t\t|                ALGORITMA DAN PEMROGRAMAN                |\n");
	printf("\t\t\t\t|=>>        Menghitung Pembayaran Penggunaan Air       <<=|\n");
	printf("\t\t\t\t|                   Teknologi Informasi                   |\n");
	printf("\t\t\t\t|                         Kelas B                         |\n");
	printf("\t\t\t\t|---------------------------------------------------------|\n");
	printf("\t\t\t\t|==>>       NAMA       --------------       NIM       <<==|\n");
	printf("\t\t\t\t| 1. Ni Made Nadya Dewindra Wirata      (2205551021)      |\n");
	printf("\t\t\t\t| 2. Ni Putu Yuni Kusumayanti           (2205551033)      |\n");
	printf("\t\t\t\t|---------------------------------------------------------|\n");
	printf("\t\t\t\t|=========================================================|\n");
	printf("\t\t\t\t|_________________________________________________________|\n");
	printf("\t\t\t\t  Tekan Tombol Enter untuk ke Menu Selanjutnya....");
	getchar();
	menu();
}

void menu(){
	double pilihan;
	int opsi;
	
	system("cls");
	printf("\t\t\t\t ________________________________________________ \n");
	printf("\t\t\t\t|================================================|\n");
	printf("\t\t\t\t|=>>       KELOMPOK KONSUMEN AIR MINUM        <<=|\n");
	printf("\t\t\t\t|------------------------------------------------|\n");
	printf("\t\t\t\t| 1. Rumah Tangga                                |\n");
	printf("\t\t\t\t| 2. Usaha atau Niaga                            |\n");
	printf("\t\t\t\t| 0. Keluar                                      |\n");
	printf("\t\t\t\t|------------------------------------------------|\n");
	printf("\t\t\t\t|================================================|\n");
	printf("\t\t\t\t|________________________________________________|\n");
	printf("\t\t\t\t  Pilih Kelompok Anda : ");
	pilihan = validasi3();
	opsi = ceil(pilihan);
	system("cls");
	
	if(pilihan == 1){
		system("cls");
		kelas_rumahtangga();
		
	}else if(pilihan == 2){
		system("cls");
		kelas_niaga();
		
	}else if(pilihan == 0){
		system("cls");
		printf("\t\t\t\t ______________________________________________________ \n");
		printf("\t\t\t\t|======================================================|\n"); 
		printf("\t\t\t\t|=>>           Terimakasih, Sampai Jumpa!           <<=|\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n");
		getchar();
		exit(1);
	}
}

double validasi3(){
    double pilihan, select;
    char enter;
        pilihan = scanf("%lf%c", &select, &enter);
        if (pilihan != 2 || enter != '\n'){
        	system("color 47");
        	getchar();
            printf("\n\t\t\t\t Pilihan Anda Salah! Hanya Menerima Inputan Angka!\n");
            printf("\t\t\t\t Masukkan Angka : ");
            return validasi3();
                
        }else if (select<0 || enter !='\n'){
        	system("color 47");
            printf("\n\t\t\t\t Pilihan yang Anda Masukkan Tidak Tersedia! Masukkan Angka (0/1/2) Saja!\n");
            printf("\t\t\t\t Masukkan Angka Kembali : ");
            return validasi3();
        
        }else if (select>2 || enter !='\n'){
        	system("color 47");
            printf("\n\t\t\t\t Pilihan yang Anda Masukkan Tidak Tersedia! Masukkan Angka (0/1/2) Saja!\n");
            printf("\t\t\t\t Masukkan Angka Kembali : ");
            return validasi3();
            
        }else{
        	system("color 07");
            return select;
        }
    
    } 

void kelas_rumahtangga(){
	double pilihan;
	int opsi;
	
	printf("\t\t\t\t ___________________________________________ \n");
	printf("\t\t\t\t|===========================================|\n");
	printf("\t\t\t\t|=>>     KELAS KELOMPOK RUMAH TANGGA     <<=|\n");
	printf("\t\t\t\t|-------------------------------------------|\n");
	printf("\t\t\t\t| 1. Rumah Tangga A1                        |\n");
	printf("\t\t\t\t| 2. Rumah Tangga A2                        |\n");
	printf("\t\t\t\t| 3. Rumah Tangga A3                        |\n");
	printf("\t\t\t\t| 4. Rumah Tangga A4                        |\n");
	printf("\t\t\t\t| 0. Keluar                                 |\n");
	printf("\t\t\t\t|___________________________________________|\n");
	printf("\t\t\t\t  Pilih Kelas Kelompok Anda : ");
	pilihan = validasi1();
	opsi = ceil(pilihan);
	
	if(opsi==pilihan){
		system("cls");
		switch(opsi){
			case 1: rumahtangga_a1(); system("pause");
					pengulangan();
					break;
					
			case 2: rumahtangga_a2(); system("pause");
					pengulangan(); 
					break; 
					
			case 3: rumahtangga_a3(); system("pause");
					pengulangan(); 
					break;
					
			case 4: rumahtangga_a4(); system("pause");
					pengulangan(); 
					break;
					
			case 0: printf("\t\t\t\t ______________________________________________________ \n");
					printf("\t\t\t\t|======================================================|\n"); 
					printf("\t\t\t\t|=>>           Terimakasih, Sampai Jumpa!           <<=|\n");
					printf("\t\t\t\t|======================================================|\n");
					printf("\t\t\t\t|______________________________________________________|\n");
					exit(1);
					break;
		}	
	}
}

double validasi1(){
    double pilihan, select;
    char enter;
        pilihan = scanf("%lf%c", &select, &enter);
        if (pilihan != 2 || enter != '\n'){
        	system("color 47");
        	getchar();
            printf("\n\t\t\t\t Pilihan Anda Salah! Hanya Menerima Inputan Angka!\n");
            printf("\t\t\t\t Masukkan Angka : ");
            return validasi1();
                
        }else if (select<0 || enter !='\n'){
        	system("color 47");
            printf("\n\t\t\t\t Pilihan yang Anda Masukkan Tidak Tersedia! Masukkan Angka (0/1/2/3/4) Saja!\n");
            printf("\t\t\t\t Masukkan Angka Kembali : ");
            return validasi1();
        
        }else if (select>4 || enter !='\n'){
        	system("color 47");
            printf("\n\t\t\t\t Pilihan yang Anda Masukkan Tidak Tersedia! Masukkan Angka (0/1/2/3/4) Saja!\n");
            printf("\t\t\t\t Masukkan Angka Kembali : ");
            return validasi1();
            
        }else{
        	system("color 07");
            return select;
        }
    
    } 

void kelas_niaga(){
	double pilihan;
	int opsi;
	
	printf("\t\t\t\t _______________________________________________ \n");
	printf("\t\t\t\t|===============================================|\n");
	printf("\t\t\t\t|=>>     KELAS KELOMPOK USAHA ATAU NIAGA     <<=|\n");
	printf("\t\t\t\t|-----------------------------------------------|\n");
	printf("\t\t\t\t| 1. Usaha atau Niaga Kecil                     |\n");
	printf("\t\t\t\t| 2. Usaha atau Niaga Sedang                    |\n");
	printf("\t\t\t\t| 3. Usaha atau Niaga Besar                     |\n");
	printf("\t\t\t\t| 0. Keluar                                     |\n");
	printf("\t\t\t\t|_______________________________________________|\n");
	printf("\t\t\t\t  Pilih Kelas Kelompok Anda : ");
	pilihan = validasi2();
	opsi = ceil(pilihan);
	
	if(opsi==pilihan){
		system("cls");
		switch(opsi){
			case 1: niaga_kecil(); system("pause");
					pengulangan();
					break;
					
			case 2: niaga_sedang(); system("pause");
					pengulangan(); 
					break; 
					
			case 3: niaga_besar(); system("pause");
					pengulangan(); 
					break;
					
			case 0: printf("\t\t\t\t ______________________________________________________ \n");
					printf("\t\t\t\t|======================================================|\n"); 
					printf("\t\t\t\t|=>>           Terimakasih, Sampai Jumpa!           <<=|\n");
					printf("\t\t\t\t|======================================================|\n");
					printf("\t\t\t\t|______________________________________________________|\n");
					exit(1);
					break;
		}	
	}
}

double validasi2(){
    double pilihan, select;
    char enter;
        pilihan = scanf("%lf%c", &select, &enter);
        if (pilihan != 2 || enter != '\n'){
        	system("color 47");
        	getchar();
            printf("\n\t\t\t\t Pilihan Anda Salah! Hanya Menerima Inputan Angka!\n");
            printf("\t\t\t\t Masukkan Angka : ");
            return validasi2();
                
        }else if (select<0 || enter !='\n'){
        	system("color 47");
            printf("\n\t\t\t\t Pilihan yang Anda Masukkan Tidak Tersedia! Masukkan Angka (0/1/2/3) Saja!\n");
            printf("\t\t\t\t Masukkan Angka Kembali : ");
            return validasi2();
        
        }else if (select>3 || enter !='\n'){
        	system("color 47");
            printf("\n\t\t\t\t Pilihan yang Anda Masukkan Tidak Tersedia! Masukkan Angka (0/1/2/3) Saja!\n");
            printf("\t\t\t\t Masukkan Angka Kembali : ");
            return validasi2();
            
        }else{
        	system("color 07");
            return select;
        }
    
    } 

int main(){
	system("cls");
	cover();
	system("pause");
	menu();

return 0;
}

void pengulangan(){
	double reset;
	system("cls");
	
	printf("\t\t\t\t ________________________________\n");
	printf("\t\t\t\t|--------------------------------|\n");
	printf("\t\t\t\t| =>> Ingin Menghitung Kembali?  |\n\n");
	printf("\t\t\t\t|--------------------------------|\n");
	printf("\t\t\t\t| 1. Kembali Menghitung          |\n");
	printf("\t\t\t\t| 2. Keluar program              |\n");
	printf("\t\t\t\t|________________________________|\n");
	printf("\t\t\t\t Masukkan Pilihan : ");
	scanf("%lf",&reset);
    getchar();
    
	if(reset==1){
		system("cls");
		main();
	}else if(reset==2) {
        system("cls");
		printf("\t\t\t\t ______________________________________________________ \n");
		printf("\t\t\t\t|======================================================|\n"); 
		printf("\t\t\t\t|=>>           Terimakasih, Sampai Jumpa!           <<=|\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n");
        getchar();
        exit(1);
    }
}

void rumahtangga_a1(){
	double pilihan;
	int opsi;
	
	system("cls");
	printf("\t\t\t\t ___________________________________________ \n");
	printf("\t\t\t\t|===========================================|\n");
	printf("\t\t\t\t|=>>    GOLONGAN RUMAH TANGGA KELAS A1   <<=|\n");
	printf("\t\t\t\t|-------------------------------------------|\n");
	printf("\t\t\t\t| 1. Golongan D1 - 1                        |\n");
	printf("\t\t\t\t| 2. Golongan D1 - 2                        |\n");
	printf("\t\t\t\t| 3. Golongan D1 - 3                        |\n");
	printf("\t\t\t\t| 4. Golongan D1 - 4                        |\n");
	printf("\t\t\t\t| 0. Keluar                                 |\n");
	printf("\t\t\t\t|___________________________________________|\n");
	printf("\t\t\t\t  Pilih Golongan Anda : ");
	pilihan = validasi1();
	opsi = ceil(pilihan);
	system("cls");
	
	if(pilihan == 1){
		system("cls");
		golongan1_a1();
		
	}else if(pilihan == 2){
		system("cls");
		golongan2_a1();
		
	}else if(pilihan == 3){
		system("cls");
		golongan3_a1();
	
	}else if(pilihan == 4){
		system("cls");
		golongan4_a1();
		
	}else if(pilihan == 0){
		system("cls");
		printf("\t\t\t\t ______________________________________________________ \n");
		printf("\t\t\t\t|======================================================|\n"); 
		printf("\t\t\t\t|=>>           Terimakasih, Sampai Jumpa!           <<=|\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n");
		getchar();
		exit(1);
	}
}

void golongan1_a1(){
	double biaya_meter, biaya_meter_1, biaya_meter_2, biaya_meter_n;
	double tagihan, administrasi, bpm_r;
	double denda_bulan_0, denda_bulan_1, denda_bulan_2, denda_bulan_n;
	int pemakaian_bulan_lalu;
	int pemakaian_saat_ini;
	int meter_kubik_air;
	administrasi = 1.000;
	bpm_r = 12.500;
		biaya_meter_1 = 1.780;
		biaya_meter_2 = 2.060;
		biaya_meter_n = 5.880;
			denda_bulan_0 = 0;
			denda_bulan_1 = 5.000;
			denda_bulan_2 = 12.000;
			denda_bulan_n = 20.000;
	
	system("cls");
	printf("\t\t\t\t ______________________________________________________ \n");
	printf("\t\t\t\t|======================================================|\n");
	printf("\t\t\t\t|=>>     Rumah Tangga Kelas A1 Golongan D1 - 1      <<=|\n");
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Air Bulan Lalu : ");
	scanf("%d", &pemakaian_bulan_lalu);
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Saat Ini : ");
	scanf("%d", &pemakaian_saat_ini);
	printf("\t\t\t\t|======================================================|\n");
	
	meter_kubik_air = pemakaian_saat_ini - pemakaian_bulan_lalu;
	printf("\t\t\t\t  Meter Kubik Air adalah %d m3\n", meter_kubik_air);
	printf("\t\t\t\t|======================================================|\n");
	
	if(meter_kubik_air <11){
		biaya_meter = meter_kubik_air * biaya_meter_1;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 1.780/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 1.780\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 0                                 |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_0;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air <21){
		biaya_meter = meter_kubik_air * biaya_meter_2;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 2.060/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 2.060\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 5.000                             |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_1;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 20){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 5.880/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 5.880\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 12.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_2;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 30){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 5.880/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 5.880\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 20.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_n;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
	}
}

void golongan2_a1(){
	double biaya_meter, biaya_meter_1, biaya_meter_2, biaya_meter_n;
	double tagihan, administrasi, bpm_r;
	double denda_bulan_0, denda_bulan_1, denda_bulan_2, denda_bulan_n;
	int pemakaian_bulan_lalu;
	int pemakaian_saat_ini;
	int meter_kubik_air;
	administrasi = 1.000;
	bpm_r = 12.500;
		biaya_meter_1 = 2.060;
		biaya_meter_2 = 2.340;
		biaya_meter_n = 5.940;
			denda_bulan_0 = 0;
			denda_bulan_1 = 5.000;
			denda_bulan_2 = 12.000;
			denda_bulan_n = 20.000;
	
	system("cls");
	printf("\t\t\t\t ______________________________________________________ \n");
	printf("\t\t\t\t|======================================================|\n");
	printf("\t\t\t\t|=>>     Rumah Tangga Kelas A1 Golongan D1 - 2      <<=|\n");
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Air Bulan Lalu : ");
	scanf("%d", &pemakaian_bulan_lalu);
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Saat Ini : ");
	scanf("%d", &pemakaian_saat_ini);
	printf("\t\t\t\t|======================================================|\n");
	
	meter_kubik_air = pemakaian_saat_ini - pemakaian_bulan_lalu;
	printf("\t\t\t\t  Meter Kubik Air adalah %d m3\n", meter_kubik_air);
	printf("\t\t\t\t|======================================================|\n");
	
	if(meter_kubik_air <11){
		biaya_meter = meter_kubik_air * biaya_meter_1;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 2.060/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 2.060\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 0                                 |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_0;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air <21){
		biaya_meter = meter_kubik_air * biaya_meter_2;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 2.340/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 2.340\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 5.000                             |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_1;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 20){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 5.940/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 5.940\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda         : 12.000                               |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_2;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 30){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 5.940/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 5.940\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 20.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_n;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
	}
}

void golongan3_a1(){
	double biaya_meter, biaya_meter_1, biaya_meter_2, biaya_meter_n;
	double tagihan, administrasi, bpm_r;
	double denda_bulan_0, denda_bulan_1, denda_bulan_2, denda_bulan_n;
	int pemakaian_bulan_lalu;
	int pemakaian_saat_ini;
	int meter_kubik_air;
	administrasi = 1.000;
	bpm_r = 12.500;
		biaya_meter_1 = 6.340;
		biaya_meter_2 = 9.200;
		biaya_meter_n = 9.600;
			denda_bulan_0 = 0;
			denda_bulan_1 = 5.000;
			denda_bulan_2 = 12.000;
			denda_bulan_n = 20.000;
	
	system("cls");
	printf("\t\t\t\t ______________________________________________________ \n");
	printf("\t\t\t\t|======================================================|\n");
	printf("\t\t\t\t|=>>     Rumah Tangga Kelas A1 Golongan D1 - 3      <<=|\n");
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Air Bulan Lalu : ");
	scanf("%d", &pemakaian_bulan_lalu);
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Saat Ini : ");
	scanf("%d", &pemakaian_saat_ini);
	printf("\t\t\t\t|======================================================|\n");
	
	meter_kubik_air = pemakaian_saat_ini - pemakaian_bulan_lalu;
	printf("\t\t\t\t  Meter Kubik Air adalah %d m3\n", meter_kubik_air);
	printf("\t\t\t\t|======================================================|\n");
	
	
	if(meter_kubik_air <11){
		biaya_meter = meter_kubik_air * biaya_meter_1;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 6.340/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 6.340\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 0                                 |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_0;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air <21){
		biaya_meter = meter_kubik_air * biaya_meter_2;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 9.200/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 9.200\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 5.000                             |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_1;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 20){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 9.600/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 9.600\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 12.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_2;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 30){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 9.600/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 9.600\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 20.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_n;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
	}
}

void golongan4_a1(){
	double biaya_meter, biaya_meter_1, biaya_meter_2, biaya_meter_n;
	double tagihan, administrasi, bpm_r;
	double denda_bulan_0, denda_bulan_1, denda_bulan_2, denda_bulan_n;
	int pemakaian_bulan_lalu;
	int pemakaian_saat_ini;
	int meter_kubik_air;
	administrasi = 1.000;
	bpm_r = 12.500;
		biaya_meter_1 = 6.420;
		biaya_meter_2 = 9.350;
		biaya_meter_n = 9.650;
			denda_bulan_0 = 0;
			denda_bulan_1 = 5.000;
			denda_bulan_2 = 12.000;
			denda_bulan_n = 20.000;
	
	system("cls");
	printf("\t\t\t\t ______________________________________________________ \n");
	printf("\t\t\t\t|======================================================|\n");
	printf("\t\t\t\t|=>>     Rumah Tangga Kelas A1 Golongan D1 - 4      <<=|\n");
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Air Bulan Lalu : ");
	scanf("%d", &pemakaian_bulan_lalu);
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Saat Ini : ");
	scanf("%d", &pemakaian_saat_ini);
	printf("\t\t\t\t|======================================================|\n");
	
	meter_kubik_air = pemakaian_saat_ini - pemakaian_bulan_lalu;
	printf("\t\t\t\t  Meter Kubik Air adalah %d m3\n", meter_kubik_air);
	printf("\t\t\t\t|======================================================|\n");
	
	if(meter_kubik_air <11){
		biaya_meter = meter_kubik_air * biaya_meter_1;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 6.420/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 6.420\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 0                                 |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_0;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air <21){
		biaya_meter = meter_kubik_air * biaya_meter_2;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 9.350/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 9.350\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 5.000                             |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_1;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 20){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 9.650/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 9.650\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 12.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_2;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 30){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 9.650/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 9.650\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda         : 20.000                               |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_n;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
	}
}

void rumahtangga_a2(){
	double pilihan;
	int opsi;
	
	system("cls");
	printf("\t\t\t\t ___________________________________________ \n");
	printf("\t\t\t\t|===========================================|\n");
	printf("\t\t\t\t|=>>    GOLONGAN RUMAH TANGGA KELAS A2   <<=|\n");
	printf("\t\t\t\t|-------------------------------------------|\n");
	printf("\t\t\t\t| 1. Golongan D2 - 1                        |\n");
	printf("\t\t\t\t| 2. Golongan D2 - 2                        |\n");
	printf("\t\t\t\t| 3. Golongan D2 - 3                        |\n");
	printf("\t\t\t\t| 4. Golongan D2 - 4                        |\n");
	printf("\t\t\t\t| 0. Keluar                                 |\n");
	printf("\t\t\t\t|___________________________________________|\n");
	printf("\t\t\t\t  Pilih Golongan Anda : ");
	pilihan = validasi1();
	opsi = ceil(pilihan);
	
	if(pilihan == 1){
		system("cls");
		golongan1_a2();
		
	}else if(pilihan == 2){
		system("cls");
		golongan2_a2();
		
	}else if(pilihan == 3){
		system("cls");
		golongan3_a2();
	
	}else if(pilihan == 4){
		system("cls");
		golongan4_a2();
		
	}else if(pilihan == 0){
		system("cls");
		printf("Terimakasih, Sampai Jumpa!");
		getchar();
		exit(1);
	}
}

void golongan1_a2(){
	double biaya_meter, biaya_meter_1, biaya_meter_2, biaya_meter_n;
	double tagihan, administrasi, bpm_r;
	double denda_bulan_0, denda_bulan_1, denda_bulan_2, denda_bulan_n;
	int pemakaian_bulan_lalu;
	int pemakaian_saat_ini;
	int meter_kubik_air;
	administrasi = 1.000;
	bpm_r = 12.500;
		biaya_meter_1 = 2.340;
		biaya_meter_2 = 2.620;
		biaya_meter_n = 6.000;
			denda_bulan_0 = 0;
			denda_bulan_1 = 5.000;
			denda_bulan_2 = 12.000;
			denda_bulan_n = 20.000;
	
	system("cls");
	printf("\t\t\t\t ______________________________________________________ \n");
	printf("\t\t\t\t|======================================================|\n");
	printf("\t\t\t\t|=>>     Rumah Tangga Kelas A2 Golongan D2 - 1      <<=|\n");
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Air Bulan Lalu : ");
	scanf("%d", &pemakaian_bulan_lalu);
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Saat Ini : ");
	scanf("%d", &pemakaian_saat_ini);
	printf("\t\t\t\t|======================================================|\n");
	
	meter_kubik_air = pemakaian_saat_ini - pemakaian_bulan_lalu;
	printf("\t\t\t\t  Meter Kubik Air adalah %d m3\n", meter_kubik_air);
	printf("\t\t\t\t|======================================================|\n");
	
	if(meter_kubik_air <11){
		biaya_meter = meter_kubik_air * biaya_meter_1;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 2.340/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 2.340\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 0                                 |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_0;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air <21){
		biaya_meter = meter_kubik_air * biaya_meter_2;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 2.620/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 2.620\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 5.000                             |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_1;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 20){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 6.000/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 6.000\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 12.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_2;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 30){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 6.000/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 6.000\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 20.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_n;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
	}
}

void golongan2_a2(){
	double biaya_meter, biaya_meter_1, biaya_meter_2, biaya_meter_n;
	double tagihan, administrasi, bpm_r;
	double denda_bulan_0, denda_bulan_1, denda_bulan_2, denda_bulan_n;
	int pemakaian_bulan_lalu;
	int pemakaian_saat_ini;
	int meter_kubik_air;
	administrasi = 1.000;
	bpm_r = 12.500;
		biaya_meter_1 = 2.620;
		biaya_meter_2 = 2.900;
		biaya_meter_n = 6.060;
			denda_bulan_0 = 0;
			denda_bulan_1 = 5.000;
			denda_bulan_2 = 12.000;
			denda_bulan_n = 20.000;
	
	system("cls");
	printf("\t\t\t\t ______________________________________________________ \n");
	printf("\t\t\t\t|======================================================|\n");
	printf("\t\t\t\t|=>>     Rumah Tangga Kelas A2 Golongan D2 - 2      <<=|\n");
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Air Bulan Lalu : ");
	scanf("%d", &pemakaian_bulan_lalu);
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Saat Ini : ");
	scanf("%d", &pemakaian_saat_ini);
	printf("\t\t\t\t|======================================================|\n");
	
	meter_kubik_air = pemakaian_saat_ini - pemakaian_bulan_lalu;
	printf("\t\t\t\t  Meter Kubik Air adalah %d m3\n", meter_kubik_air);
	printf("\t\t\t\t|======================================================|\n");
	
	if(meter_kubik_air <11){
		biaya_meter = meter_kubik_air * biaya_meter_1;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 2.620/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 2.620\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 0                                 |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_0;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air <21){
		biaya_meter = meter_kubik_air * biaya_meter_2;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 2.900/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 2.900\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 5.000                             |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_1;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 20){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 6.060/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 6.060\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 12.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_2;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 30){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 6.060/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 6.060\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 20.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_n;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
	}
}

void golongan3_a2(){
	double biaya_meter, biaya_meter_1, biaya_meter_2, biaya_meter_n;
	double tagihan, administrasi, bpm_r;
	double denda_bulan_0, denda_bulan_1, denda_bulan_2, denda_bulan_n;
	int pemakaian_bulan_lalu;
	int pemakaian_saat_ini;
	int meter_kubik_air;
	administrasi = 1.000;
	bpm_r = 12.500;
		biaya_meter_1 = 6.490;
		biaya_meter_2 = 9.500;
		biaya_meter_n = 9.800;
			denda_bulan_0 = 0;
			denda_bulan_1 = 5.000;
			denda_bulan_2 = 12.000;
			denda_bulan_n = 20.000;
	
	system("cls");
	printf("\t\t\t\t ______________________________________________________ \n");
	printf("\t\t\t\t|======================================================|\n");
	printf("\t\t\t\t|=>>     Rumah Tangga Kelas A2 Golongan D2 - 3      <<=|\n");
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Air Bulan Lalu : ");
	scanf("%d", &pemakaian_bulan_lalu);
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Saat Ini : ");
	scanf("%d", &pemakaian_saat_ini);
	printf("\t\t\t\t|======================================================|\n");
	
	meter_kubik_air = pemakaian_saat_ini - pemakaian_bulan_lalu;
	printf("\t\t\t\t  Meter Kubik Air adalah %d m3\n", meter_kubik_air);
	printf("\t\t\t\t|======================================================|\n");
	
	if(meter_kubik_air <11){
		biaya_meter = meter_kubik_air * biaya_meter_1;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 6.490/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 6.490\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 0                                 |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_0;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air <21){
		biaya_meter = meter_kubik_air * biaya_meter_2;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 9.500/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 9.500\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 5.000                             |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_1;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 20){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 9.800/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 9.800\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 12.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_2;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 30){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 9.800/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 9.800\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 20.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_n;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
	}
}

void golongan4_a2(){
	double biaya_meter, biaya_meter_1, biaya_meter_2, biaya_meter_n;
	double tagihan, administrasi, bpm_r;
	double denda_bulan_0, denda_bulan_1, denda_bulan_2, denda_bulan_n;
	int pemakaian_bulan_lalu;
	int pemakaian_saat_ini;
	int meter_kubik_air;
	administrasi = 1.000;
	bpm_r = 12.500;
		biaya_meter_1 = 6.570;
		biaya_meter_2 = 9.650;
		biaya_meter_n = 9.950;
			denda_bulan_0 = 0;
			denda_bulan_1 = 5.000;
			denda_bulan_2 = 12.000;
			denda_bulan_n = 20.000;
	
	system("cls");
	printf("\t\t\t\t ______________________________________________________ \n");
	printf("\t\t\t\t|======================================================|\n");
	printf("\t\t\t\t|=>>     Rumah Tangga Kelas A2 Golongan D2 - 4      <<=|\n");
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Air Bulan Lalu : ");
	scanf("%d", &pemakaian_bulan_lalu);
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Saat Ini : ");
	scanf("%d", &pemakaian_saat_ini);
	printf("\t\t\t\t|======================================================|\n");
	
	meter_kubik_air = pemakaian_saat_ini - pemakaian_bulan_lalu;
	printf("\t\t\t\t  Meter Kubik Air adalah %d m3\n", meter_kubik_air);
	printf("\t\t\t\t|======================================================|\n");
	
	if(meter_kubik_air <11){
		biaya_meter = meter_kubik_air * biaya_meter_1;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 6.570/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 6.570\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 0                                 |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_0;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air <21){
		biaya_meter = meter_kubik_air * biaya_meter_2;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 9.650/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 9.650\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 5.000                             |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_1;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 20){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 9.950/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 9.950\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 12.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_2;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 30){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 9.950/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 9.950\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 20.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_n;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
	}
}

void rumahtangga_a3(){
	double pilihan;
	int opsi;
	
	system("cls");
	printf("\t\t\t\t ___________________________________________ \n");
	printf("\t\t\t\t|===========================================|\n");
	printf("\t\t\t\t|=>>    GOLONGAN RUMAH TANGGA KELAS A3   <<=|\n");
	printf("\t\t\t\t|-------------------------------------------|\n");
	printf("\t\t\t\t| 1. Golongan D3 - 1                        |\n");
	printf("\t\t\t\t| 2. Golongan D3 - 2                        |\n");
	printf("\t\t\t\t| 3. Golongan D3 - 3                        |\n");
	printf("\t\t\t\t| 4. Golongan D3 - 4                        |\n");
	printf("\t\t\t\t| 0. Keluar                                 |\n");
	printf("\t\t\t\t|___________________________________________|\n");
	printf("\t\t\t\t  Pilih Golongan Anda : ");
	pilihan = validasi1();
	opsi = ceil(pilihan);
	
	if(pilihan == 1){
		system("cls");
		golongan1_a3();
		
	}else if(pilihan == 2){
		system("cls");
		golongan2_a3();
		
	}else if(pilihan == 3){
		system("cls");
		golongan3_a3();
	
	}else if(pilihan == 4){
		system("cls");
		golongan4_a3();
		
	}else if(pilihan == 0){
		system("cls");
		printf("Terimakasih, Sampai Jumpa!");
		getchar();
		exit(1);
	}
}

void golongan1_a3(){
	double biaya_meter, biaya_meter_1, biaya_meter_2, biaya_meter_n;
	double tagihan, administrasi, bpm_r;
	double denda_bulan_0, denda_bulan_1, denda_bulan_2, denda_bulan_n;
	int pemakaian_bulan_lalu;
	int pemakaian_saat_ini;
	int meter_kubik_air;
	administrasi = 1.000;
	bpm_r = 12.500;
		biaya_meter_1 = 2.900;
		biaya_meter_2 = 3.180;
		biaya_meter_n = 6.120;
			denda_bulan_0 = 0;
			denda_bulan_1 = 5.000;
			denda_bulan_2 = 12.000;
			denda_bulan_n = 20.000;
	
	system("cls");
	printf("\t\t\t\t ______________________________________________________ \n");
	printf("\t\t\t\t|======================================================|\n");
	printf("\t\t\t\t|=>>     Rumah Tangga Kelas A3 Golongan D3 - 1      <<=|\n");
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Air Bulan Lalu : ");
	scanf("%d", &pemakaian_bulan_lalu);
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Saat Ini : ");
	scanf("%d", &pemakaian_saat_ini);
	printf("\t\t\t\t|======================================================|\n");
	
	meter_kubik_air = pemakaian_saat_ini - pemakaian_bulan_lalu;
	printf("\t\t\t\t  Meter Kubik Air adalah %d m3\n", meter_kubik_air);
	printf("\t\t\t\t|======================================================|\n");
	
	if(meter_kubik_air <11){
		biaya_meter = meter_kubik_air * biaya_meter_1;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 2.900/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 2.900\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 0                                 |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_0;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air <21){
		biaya_meter = meter_kubik_air * biaya_meter_2;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 3.180/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 3.180\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 5.000                             |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_1;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 20){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 6.120/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 6.120\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 12.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_2;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 30){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 6.120/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 6.120\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 20.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_n;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
	}
}

void golongan2_a3(){
	double biaya_meter, biaya_meter_1, biaya_meter_2, biaya_meter_n;
	double tagihan, administrasi, bpm_r;
	double denda_bulan_0, denda_bulan_1, denda_bulan_2, denda_bulan_n;
	int pemakaian_bulan_lalu;
	int pemakaian_saat_ini;
	int meter_kubik_air;
	administrasi = 1.000;
	bpm_r = 12.500;
		biaya_meter_1 = 3.180;
		biaya_meter_2 = 3.460;
		biaya_meter_n = 6.180;
			denda_bulan_0 = 0;
			denda_bulan_1 = 5.000;
			denda_bulan_2 = 12.000;
			denda_bulan_n = 20.000;
	
	system("cls");
	printf("\t\t\t\t ______________________________________________________ \n");
	printf("\t\t\t\t|======================================================|\n");
	printf("\t\t\t\t|=>>     Rumah Tangga Kelas A3 Golongan D3 - 1      <<=|\n");
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Air Bulan Lalu : ");
	scanf("%d", &pemakaian_bulan_lalu);
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Saat Ini : ");
	scanf("%d", &pemakaian_saat_ini);
	printf("\t\t\t\t|======================================================|\n");
	
	meter_kubik_air = pemakaian_saat_ini - pemakaian_bulan_lalu;
	printf("\t\t\t\t  Meter Kubik Air adalah %d m3\n", meter_kubik_air);
	printf("\t\t\t\t|======================================================|\n");
	
	if(meter_kubik_air <11){
		biaya_meter = meter_kubik_air * biaya_meter_1;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 3.180/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 3.180\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 0                                 |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_0;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air <21){
		biaya_meter = meter_kubik_air * biaya_meter_2;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 3.460/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 3.460\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 5.000                             |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_1;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 20){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 6.180/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 6.180\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 12.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_2;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 30){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 6.180/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 6.180\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 20.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_n;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
	}
}

void golongan3_a3(){
	double biaya_meter, biaya_meter_1, biaya_meter_2, biaya_meter_n;
	double tagihan, administrasi, bpm_r;
	double denda_bulan_0, denda_bulan_1, denda_bulan_2, denda_bulan_n;
	int pemakaian_bulan_lalu;
	int pemakaian_saat_ini;
	int meter_kubik_air;
	administrasi = 1.000;
	bpm_r = 12.500;
		biaya_meter_1 = 6.640;
		biaya_meter_2 = 9.800;
		biaya_meter_n = 10.100;
			denda_bulan_0 = 0;
			denda_bulan_1 = 5.000;
			denda_bulan_2 = 12.000;
			denda_bulan_n = 20.000;
	
	system("cls");
	printf("\t\t\t\t ______________________________________________________ \n");
	printf("\t\t\t\t|======================================================|\n");
	printf("\t\t\t\t|=>>     Rumah Tangga Kelas A3 Golongan D3 - 3      <<=|\n");
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Air Bulan Lalu : ");
	scanf("%d", &pemakaian_bulan_lalu);
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Saat Ini : ");
	scanf("%d", &pemakaian_saat_ini);
	printf("\t\t\t\t|======================================================|\n");
	
	meter_kubik_air = pemakaian_saat_ini - pemakaian_bulan_lalu;
	printf("\t\t\t\t  Meter Kubik Air adalah %d m3\n", meter_kubik_air);
	printf("\t\t\t\t|======================================================|\n");
	
	if(meter_kubik_air <11){
		biaya_meter = meter_kubik_air * biaya_meter_1;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 6.640/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 6.640\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 0                                 |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_0;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air <21){
		biaya_meter = meter_kubik_air * biaya_meter_2;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 9.800/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 9.800\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 5.000                             |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_1;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 20){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 10.100/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 10.100\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 12.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_2;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 30){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 10.100/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 10.100\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 20.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_n;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
	}
}

void golongan4_a3(){
	double biaya_meter, biaya_meter_1, biaya_meter_2, biaya_meter_n;
	double tagihan, administrasi, bpm_r;
	double denda_bulan_0, denda_bulan_1, denda_bulan_2, denda_bulan_n;
	int pemakaian_bulan_lalu;
	int pemakaian_saat_ini;
	int meter_kubik_air;
	administrasi = 1.000;
	bpm_r = 12.500;
		biaya_meter_1 = 6.720;
		biaya_meter_2 = 9.950;
		biaya_meter_n = 10.250;
			denda_bulan_0 = 0;
			denda_bulan_1 = 5.000;
			denda_bulan_2 = 12.000;
			denda_bulan_n = 20.000;
	
	system("cls");
	printf("\t\t\t\t ______________________________________________________ \n");
	printf("\t\t\t\t|======================================================|\n");
	printf("\t\t\t\t|=>>     Rumah Tangga Kelas A3 Golongan D3 - 4      <<=|\n");
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Air Bulan Lalu : ");
	scanf("%d", &pemakaian_bulan_lalu);
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Saat Ini : ");
	scanf("%d", &pemakaian_saat_ini);
	printf("\t\t\t\t|======================================================|\n");
	
	meter_kubik_air = pemakaian_saat_ini - pemakaian_bulan_lalu;
	printf("\t\t\t\t  Meter Kubik Air adalah %d m3\n", meter_kubik_air);
	printf("\t\t\t\t|======================================================|\n");
	
	if(meter_kubik_air <11){
		biaya_meter = meter_kubik_air * biaya_meter_1;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 6.720/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 6.720\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 0                                 |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_0;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air <21){
		biaya_meter = meter_kubik_air * biaya_meter_2;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 9.950/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 9.950\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 5.000                             |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_1;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 20){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 10.250/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 10.250\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 12.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_2;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 30){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 10.250/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 10.250\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 20.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_n;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
	}
}

void rumahtangga_a4(){
	double pilihan;
	int opsi;
	
	system("cls");
	printf("\t\t\t\t ___________________________________________ \n");
	printf("\t\t\t\t|===========================================|\n");
	printf("\t\t\t\t|=>>    GOLONGAN RUMAH TANGGA KELAS A4   <<=|\n");
	printf("\t\t\t\t|-------------------------------------------|\n");
	printf("\t\t\t\t| 1. Golongan D4 - 1                        |\n");
	printf("\t\t\t\t| 2. Golongan D4 - 2                        |\n");
	printf("\t\t\t\t| 3. Golongan D4 - 3                        |\n");
	printf("\t\t\t\t| 4. Golongan D4 - 4                        |\n");
	printf("\t\t\t\t| 0. Keluar                                 |\n");
	printf("\t\t\t\t|___________________________________________|\n");
	printf("\t\t\t\t  Pilih Golongan Anda : ");
	pilihan = validasi1();
	opsi = ceil(pilihan);
	
	if(pilihan == 1){
		system("cls");
		golongan1_a4();
		
	}else if(pilihan == 2){
		system("cls");
		golongan2_a4();
		
	}else if(pilihan == 3){
		system("cls");
		golongan3_a4();
	
	}else if(pilihan == 4){
		system("cls");
		golongan4_a4();
		
	}else if(pilihan == 0){
		system("cls");
		printf("Terimakasih, Sampai Jumpa!");
		getchar();
		exit(1);
	}
}

void golongan1_a4(){
	double biaya_meter, biaya_meter_1, biaya_meter_2, biaya_meter_n;
	double tagihan, administrasi, bpm_r;
	double denda_bulan_0, denda_bulan_1, denda_bulan_2, denda_bulan_n;
	int pemakaian_bulan_lalu;
	int pemakaian_saat_ini;
	int meter_kubik_air;
	administrasi = 1.000;
	bpm_r = 12.500;
		biaya_meter_1 = 3.460;
		biaya_meter_2 = 3.740;
		biaya_meter_n = 6.240;
			denda_bulan_0 = 0;
			denda_bulan_1 = 5.000;
			denda_bulan_2 = 12.000;
			denda_bulan_n = 20.000;
	
	system("cls");
	printf("\t\t\t\t ______________________________________________________ \n");
	printf("\t\t\t\t|======================================================|\n");
	printf("\t\t\t\t|=>>     Rumah Tangga Kelas A4 Golongan D4 - 1      <<=|\n");
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Air Bulan Lalu : ");
	scanf("%d", &pemakaian_bulan_lalu);
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Saat Ini : ");
	scanf("%d", &pemakaian_saat_ini);
	printf("\t\t\t\t|======================================================|\n");
	
	meter_kubik_air = pemakaian_saat_ini - pemakaian_bulan_lalu;
	printf("\t\t\t\t  Meter Kubik Air adalah %d m3\n", meter_kubik_air);
	printf("\t\t\t\t|======================================================|\n");
	
	if(meter_kubik_air <11){
		biaya_meter = meter_kubik_air * biaya_meter_1;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 3.460/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 3.460\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 0                                 |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_0;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air <21){
		biaya_meter = meter_kubik_air * biaya_meter_2;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 3.740/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 3.740\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 5.000                             |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_1;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 20){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 6.240/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 6.240\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 12.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_2;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 30){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 6.240/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 6.240\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 20.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_n;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
	}
}

void golongan2_a4(){
	double biaya_meter, biaya_meter_1, biaya_meter_2, biaya_meter_n;
	double tagihan, administrasi, bpm_r;
	double denda_bulan_0, denda_bulan_1, denda_bulan_2, denda_bulan_n;
	int pemakaian_bulan_lalu;
	int pemakaian_saat_ini;
	int meter_kubik_air;
	administrasi = 1.000;
	bpm_r = 12.500;
		biaya_meter_1 = 3.740;
		biaya_meter_2 = 4.020;
		biaya_meter_n = 6.300;
			denda_bulan_0 = 0;
			denda_bulan_1 = 5.000;
			denda_bulan_2 = 12.000;
			denda_bulan_n = 20.000;
	
	system("cls");
	printf("\t\t\t\t ______________________________________________________ \n");
	printf("\t\t\t\t|======================================================|\n");
	printf("\t\t\t\t|=>>     Rumah Tangga Kelas A4 Golongan D4 - 2      <<=|\n");
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Air Bulan Lalu : ");
	scanf("%d", &pemakaian_bulan_lalu);
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Saat Ini : ");
	scanf("%d", &pemakaian_saat_ini);
	printf("\t\t\t\t|======================================================|\n");
	
	meter_kubik_air = pemakaian_saat_ini - pemakaian_bulan_lalu;
	printf("\t\t\t\t  Meter Kubik Air adalah %d m3\n", meter_kubik_air);
	printf("\t\t\t\t|======================================================|\n");
	
	if(meter_kubik_air <11){
		biaya_meter = meter_kubik_air * biaya_meter_1;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 3.740/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 3.740\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 0                                 |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_0;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air <21){
		biaya_meter = meter_kubik_air * biaya_meter_2;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 4.020/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 4.020\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 5.000                             |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_1;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 20){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 6.300/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 6.300\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 12.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_2;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 30){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 6.300/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 6.300\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 20.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_n;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
	}
}

void golongan3_a4(){
	double biaya_meter, biaya_meter_1, biaya_meter_2, biaya_meter_n;
	double tagihan, administrasi, bpm_r;
	double denda_bulan_0, denda_bulan_1, denda_bulan_2, denda_bulan_n;
	int pemakaian_bulan_lalu;
	int pemakaian_saat_ini;
	int meter_kubik_air;
	administrasi = 1.000;
	bpm_r = 12.500;
		biaya_meter_1 = 6.790;
		biaya_meter_2 = 10.100;
		biaya_meter_n = 10.400;
			denda_bulan_0 = 0;
			denda_bulan_1 = 5.000;
			denda_bulan_2 = 12.000;
			denda_bulan_n = 20.000;
	
	system("cls");
	printf("\t\t\t\t ______________________________________________________ \n");
	printf("\t\t\t\t|======================================================|\n");
	printf("\t\t\t\t|=>>     Rumah Tangga Kelas A4 Golongan D4 - 3      <<=|\n");
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Air Bulan Lalu : ");
	scanf("%d", &pemakaian_bulan_lalu);
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Saat Ini : ");
	scanf("%d", &pemakaian_saat_ini);
	printf("\t\t\t\t|======================================================|\n");
	
	meter_kubik_air = pemakaian_saat_ini - pemakaian_bulan_lalu;
	printf("\t\t\t\t  Meter Kubik Air adalah %d m3\n", meter_kubik_air);
	printf("\t\t\t\t|======================================================|\n");
	
	if(meter_kubik_air <11){
		biaya_meter = meter_kubik_air * biaya_meter_1;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 6.790/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 6.790\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 0                                 |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_0;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air <21){
		biaya_meter = meter_kubik_air * biaya_meter_2;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 10.100/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 10.100\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 5.000                             |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_1;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 20){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 10.400/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 10.400\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 12.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_2;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 30){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 10.400/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 10.400\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 20.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_n;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
	}
}

void golongan4_a4(){
	double biaya_meter, biaya_meter_1, biaya_meter_2, biaya_meter_n;
	double tagihan, administrasi, bpm_r;
	double denda_bulan_0, denda_bulan_1, denda_bulan_2, denda_bulan_n;
	int pemakaian_bulan_lalu;
	int pemakaian_saat_ini;
	int meter_kubik_air;
	administrasi = 1.000;
	bpm_r = 12.500;
		biaya_meter_1 = 6.870;
		biaya_meter_2 = 10.250;
		biaya_meter_n = 10.550;
			denda_bulan_0 = 0;
			denda_bulan_1 = 5.000;
			denda_bulan_2 = 12.000;
			denda_bulan_n = 20.000;
	
	system("cls");
	printf("\t\t\t\t ______________________________________________________ \n");
	printf("\t\t\t\t|======================================================|\n");
	printf("\t\t\t\t|=>>     Rumah Tangga Kelas A4 Golongan D4 - 1      <<=|\n");
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Air Bulan Lalu : ");
	scanf("%d", &pemakaian_bulan_lalu);
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Saat Ini : ");
	scanf("%d", &pemakaian_saat_ini);
	printf("\t\t\t\t|======================================================|\n");
	
	meter_kubik_air = pemakaian_saat_ini - pemakaian_bulan_lalu;
	printf("\t\t\t\t  Meter Kubik Air adalah %d m3\n", meter_kubik_air);
	printf("\t\t\t\t|======================================================|\n");
	
	if(meter_kubik_air <11){
		biaya_meter = meter_kubik_air * biaya_meter_1;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 6.870/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 6.870\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 0                                 |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_0;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air <21){
		biaya_meter = meter_kubik_air * biaya_meter_2;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 10.250/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 10.250\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 5.000                             |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_1;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 20){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 10.550/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 10.550\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 12.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_2;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 30){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 10.550/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 10.550\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_R         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 20.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_r + administrasi + biaya_meter + denda_bulan_n;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
	}
}

void niaga_kecil(){
	double pilihan;
	int opsi;
	
	system("cls");
	printf("\t\t\t\t ___________________________________________ \n");
	printf("\t\t\t\t|===========================================|\n");
	printf("\t\t\t\t|=>>   GOLONGAN USAHA ATAU NIAGA KECIL   <<=|\n");
	printf("\t\t\t\t|-------------------------------------------|\n");
	printf("\t\t\t\t| 1. Golongan E1 - 1                        |\n");
	printf("\t\t\t\t| 2. Golongan E1 - 2                        |\n");
	printf("\t\t\t\t| 3. Golongan E1 - 3                        |\n");
	printf("\t\t\t\t| 4. Golongan E1 - 4                        |\n");
	printf("\t\t\t\t| 0. Keluar                                 |\n");
	printf("\t\t\t\t|___________________________________________|\n");
	printf("\t\t\t\t  Pilih Golongan Anda : ");
	pilihan = validasi1();
	opsi = ceil(pilihan);
	
	if(pilihan == 1){
		system("cls");
		golongan1_e1();
		
	}else if(pilihan == 2){
		system("cls");
		golongan2_e1();
		
	}else if(pilihan == 3){
		system("cls");
		golongan3_e1();
	
	}else if(pilihan == 4){
		system("cls");
		golongan4_e1();
		
	}else if(pilihan == 0){
		system("cls");
		printf("Terimakasih, Sampai Jumpa!");
		getchar();
		exit(1);
	}
}

void golongan1_e1(){
	double biaya_meter, biaya_meter_1, biaya_meter_2, biaya_meter_n;
	double tagihan, administrasi, bpm_s;
	double denda_bulan_0, denda_bulan_1, denda_bulan_n;
	int pemakaian_bulan_lalu;
	int pemakaian_saat_ini;
	int meter_kubik_air;
	administrasi = 1.000;
	bpm_s = 12.500;
		biaya_meter_1 = 9.200;
		biaya_meter_2 = 9.850;
		biaya_meter_n = 10.950;
			denda_bulan_0 = 0;
			denda_bulan_1 = 15.000;
			denda_bulan_n = 15.000;
	
	system("cls");
	printf("\t\t\t\t ______________________________________________________ \n");
	printf("\t\t\t\t|======================================================|\n");
	printf("\t\t\t\t|=>>     Usaha atau Niaga Kecil Golongan E1 - 1     <<=|\n");
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Air Bulan Lalu : ");
	scanf("%d", &pemakaian_bulan_lalu);
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Saat Ini : ");
	scanf("%d", &pemakaian_saat_ini);
	printf("\t\t\t\t|======================================================|\n");
	
	meter_kubik_air = pemakaian_saat_ini - pemakaian_bulan_lalu;
	printf("\t\t\t\t  Meter Kubik Air adalah %d m3\n", meter_kubik_air);
	printf("\t\t\t\t|======================================================|\n");
	
	if(meter_kubik_air <11){
		biaya_meter = meter_kubik_air * biaya_meter_1;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 9.200/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 9.200\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 0                                 |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_0;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air <21){
		biaya_meter = meter_kubik_air * biaya_meter_2;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 9.850/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 9.850\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 15.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_1;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 20){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 10.950/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 10.950\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 15.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_n;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}
}

void golongan2_e1(){
	double biaya_meter, biaya_meter_1, biaya_meter_2, biaya_meter_n;
	double tagihan, administrasi, bpm_s;
	double denda_bulan_0, denda_bulan_1, denda_bulan_n;
	int pemakaian_bulan_lalu;
	int pemakaian_saat_ini;
	int meter_kubik_air;
	administrasi = 1.000;
	bpm_s = 12.500;
		biaya_meter_1 = 9.500;
		biaya_meter_2 = 10.150;
		biaya_meter_n = 11.250;
			denda_bulan_0 = 0;
			denda_bulan_1 = 15.000;
			denda_bulan_n = 15.000;
	
	system("cls");
	printf("\t\t\t\t ______________________________________________________ \n");
	printf("\t\t\t\t|======================================================|\n");
	printf("\t\t\t\t|=>>     Usaha atau Niaga Kecil Golongan E1 - 2     <<=|\n");
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Air Bulan Lalu : ");
	scanf("%d", &pemakaian_bulan_lalu);
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Saat Ini : ");
	scanf("%d", &pemakaian_saat_ini);
	printf("\t\t\t\t|======================================================|\n");
	
	meter_kubik_air = pemakaian_saat_ini - pemakaian_bulan_lalu;
	printf("\t\t\t\t  Meter Kubik Air adalah %d m3\n", meter_kubik_air);
	printf("\t\t\t\t|======================================================|\n");
	
	if(meter_kubik_air <11){
		biaya_meter = meter_kubik_air * biaya_meter_1;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 9.500/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 9.500\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 0                                 |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_0;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air <21){
		biaya_meter = meter_kubik_air * biaya_meter_2;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 10.150/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 10.150\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 15.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_1;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 20){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 11.250/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 11.250\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 15.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_n;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}
}

void golongan3_e1(){
	double biaya_meter, biaya_meter_1, biaya_meter_2, biaya_meter_n;
	double tagihan, administrasi, bpm_s;
	double denda_bulan_0, denda_bulan_1, denda_bulan_n;
	int pemakaian_bulan_lalu;
	int pemakaian_saat_ini;
	int meter_kubik_air;
	administrasi = 1.000;
	bpm_s = 12.500;
		biaya_meter_1 = 9.800;
		biaya_meter_2 = 10.450;
		biaya_meter_n = 11.550;
			denda_bulan_0 = 0;
			denda_bulan_1 = 15.000;
			denda_bulan_n = 15.000;
	
	system("cls");
	printf("\t\t\t\t ______________________________________________________ \n");
	printf("\t\t\t\t|======================================================|\n");
	printf("\t\t\t\t|=>>     Usaha atau Niaga Kecil Golongan E1 - 3     <<=|\n");
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Air Bulan Lalu : ");
	scanf("%d", &pemakaian_bulan_lalu);
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Saat Ini : ");
	scanf("%d", &pemakaian_saat_ini);
	printf("\t\t\t\t|======================================================|\n");
	
	meter_kubik_air = pemakaian_saat_ini - pemakaian_bulan_lalu;
	printf("\t\t\t\t  Meter Kubik Air adalah %d m3\n", meter_kubik_air);
	printf("\t\t\t\t|======================================================|\n");
	
	if(meter_kubik_air <11){
		biaya_meter = meter_kubik_air * biaya_meter_1;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 9.800/m3                         |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 9.800\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 0                                 |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_0;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air <21){
		biaya_meter = meter_kubik_air * biaya_meter_2;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 10.450/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 10.450\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 15.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_1;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 20){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 11.550/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 11.550\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 15.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_n;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}
}

void golongan4_e1(){
	double biaya_meter, biaya_meter_1, biaya_meter_2, biaya_meter_n;
	double tagihan, administrasi, bpm_s;
	double denda_bulan_0, denda_bulan_1, denda_bulan_n;
	int pemakaian_bulan_lalu;
	int pemakaian_saat_ini;
	int meter_kubik_air;
	administrasi = 1.000;
	bpm_s = 12.500;
		biaya_meter_1 = 10.100;
		biaya_meter_2 = 10.750;
		biaya_meter_n = 11.850;
			denda_bulan_0 = 0;
			denda_bulan_1 = 15.000;
			denda_bulan_n = 15.000;
	
	system("cls");
	printf("\t\t\t\t ______________________________________________________ \n");
	printf("\t\t\t\t|======================================================|\n");
	printf("\t\t\t\t|=>>     Usaha atau Niaga Kecil Golongan E1 - 4     <<=|\n");
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Air Bulan Lalu : ");
	scanf("%d", &pemakaian_bulan_lalu);
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Saat Ini : ");
	scanf("%d", &pemakaian_saat_ini);
	printf("\t\t\t\t|======================================================|\n");
	
	meter_kubik_air = pemakaian_saat_ini - pemakaian_bulan_lalu;
	printf("\t\t\t\t  Meter Kubik Air adalah %d m3\n", meter_kubik_air);
	printf("\t\t\t\t|======================================================|\n");
	
	if(meter_kubik_air <11){
		biaya_meter = meter_kubik_air * biaya_meter_1;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 10.100/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 10.100\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 0                                 |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_0;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air <21){
		biaya_meter = meter_kubik_air * biaya_meter_2;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 10.750/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 10.750\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 15.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_1;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 20){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 11.850/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 11.850\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 15.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_n;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}
}

void niaga_sedang(){
	double pilihan;
	int opsi;
	
	system("cls");
	printf("\t\t\t\t ___________________________________________ \n");
	printf("\t\t\t\t|===========================================|\n");
	printf("\t\t\t\t|=>>   GOLONGAN USAHA ATAU NIAGA SEDANG  <<=|\n");
	printf("\t\t\t\t|-------------------------------------------|\n");
	printf("\t\t\t\t| 1. Golongan E2 - 1                        |\n");
	printf("\t\t\t\t| 2. Golongan E2 - 2                        |\n");
	printf("\t\t\t\t| 3. Golongan E2 - 3                        |\n");
	printf("\t\t\t\t| 4. Golongan E2 - 4                        |\n");
	printf("\t\t\t\t| 0. Keluar                                 |\n");
	printf("\t\t\t\t|___________________________________________|\n");
	printf("\t\t\t\t  Pilih Golongan Anda : ");
	pilihan = validasi1();
	opsi = ceil(pilihan);
	
	if(pilihan == 1){
		system("cls");
		golongan1_e2();
		
	}else if(pilihan == 2){
		system("cls");
		golongan2_e2();
		
	}else if(pilihan == 3){
		system("cls");
		golongan3_e2();
	
	}else if(pilihan == 4){
		system("cls");
		golongan4_e2();
		
	}else if(pilihan == 0){
		system("cls");
		printf("Terimakasih, Sampai Jumpa!");
		getchar();
		exit(1);
	}
}

void golongan1_e2(){
	double biaya_meter, biaya_meter_1, biaya_meter_2, biaya_meter_n;
	double tagihan, administrasi, bpm_s;
	double denda_bulan_0, denda_bulan_1, denda_bulan_n;
	int pemakaian_bulan_lalu;
	int pemakaian_saat_ini;
	int meter_kubik_air;
	administrasi = 1.000;
	bpm_s = 12.500;
		biaya_meter_1 = 10.400;
		biaya_meter_2 = 11.050;
		biaya_meter_n = 12.150;
			denda_bulan_0 = 0;
			denda_bulan_1 = 35.000;
			denda_bulan_n = 35.000;
	
	system("cls");
	printf("\t\t\t\t ______________________________________________________ \n");
	printf("\t\t\t\t|======================================================|\n");
	printf("\t\t\t\t|=>>     Usaha atau Niaga Sedang Golongan E2 - 1    <<=|\n");
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Air Bulan Lalu : ");
	scanf("%d", &pemakaian_bulan_lalu);
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Saat Ini : ");
	scanf("%d", &pemakaian_saat_ini);
	printf("\t\t\t\t|======================================================|\n");
	
	meter_kubik_air = pemakaian_saat_ini - pemakaian_bulan_lalu;
	printf("\t\t\t\t  Meter Kubik Air adalah %d m3\n", meter_kubik_air);
	printf("\t\t\t\t|======================================================|\n");
	
	if(meter_kubik_air <11){
		biaya_meter = meter_kubik_air * biaya_meter_1;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 10.400/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 10.400\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 0                                 |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_0;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air <21){
		biaya_meter = meter_kubik_air * biaya_meter_2;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 11.050/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 11.050\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 35.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_1;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 20){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 12.150/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 12.150\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 35.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_n;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}
}

void golongan2_e2(){
	double biaya_meter, biaya_meter_1, biaya_meter_2, biaya_meter_n;
	double tagihan, administrasi, bpm_s;
	double denda_bulan_0, denda_bulan_1, denda_bulan_n;
	int pemakaian_bulan_lalu;
	int pemakaian_saat_ini;
	int meter_kubik_air;
	administrasi = 1.000;
	bpm_s = 12.500;
		biaya_meter_1 = 10.700;
		biaya_meter_2 = 11.350;
		biaya_meter_n = 12.550;
			denda_bulan_0 = 0;
			denda_bulan_1 = 35.000;
			denda_bulan_n = 35.000;
	
	system("cls");
	printf("\t\t\t\t ______________________________________________________ \n");
	printf("\t\t\t\t|======================================================|\n");
	printf("\t\t\t\t|=>>     Usaha atau Niaga Sedang Golongan E2 - 2    <<=|\n");
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Air Bulan Lalu : ");
	scanf("%d", &pemakaian_bulan_lalu);
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Saat Ini : ");
	scanf("%d", &pemakaian_saat_ini);
	printf("\t\t\t\t|======================================================|\n");
	
	meter_kubik_air = pemakaian_saat_ini - pemakaian_bulan_lalu;
	printf("\t\t\t\t  Meter Kubik Air adalah %d m3\n", meter_kubik_air);
	printf("\t\t\t\t|======================================================|\n");
	
	if(meter_kubik_air <11){
		biaya_meter = meter_kubik_air * biaya_meter_1;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 10.700/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 10.700\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 0                                 |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_0;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air <21){
		biaya_meter = meter_kubik_air * biaya_meter_2;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 11.350/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 11.350\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 35.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_1;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 20){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 12.550/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 12.550\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 35.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_n;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}
}

void golongan3_e2(){
	double biaya_meter, biaya_meter_1, biaya_meter_2, biaya_meter_n;
	double tagihan,administrasi, bpm_s;
	double denda_bulan_0, denda_bulan_1, denda_bulan_n;
	int pemakaian_bulan_lalu;
	int pemakaian_saat_ini;
	int meter_kubik_air;
	administrasi = 1.000;
	bpm_s = 12.500;
		biaya_meter_1 = 11.000;
		biaya_meter_2 = 11.650;
		biaya_meter_n = 13.150;
			denda_bulan_0 = 0;
			denda_bulan_1 = 35.000;
			denda_bulan_n = 35.000;
	
	system("cls");
	printf("\t\t\t\t ______________________________________________________ \n");
	printf("\t\t\t\t|======================================================|\n");
	printf("\t\t\t\t|=>>     Usaha atau Niaga Sedang Golongan E2 - 3    <<=|\n");
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Air Bulan Lalu : ");
	scanf("%d", &pemakaian_bulan_lalu);
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Saat Ini : ");
	scanf("%d", &pemakaian_saat_ini);
	printf("\t\t\t\t|======================================================|\n");
	
	meter_kubik_air = pemakaian_saat_ini - pemakaian_bulan_lalu;
	printf("\t\t\t\t  Meter Kubik Air adalah %d m3\n", meter_kubik_air);
	printf("\t\t\t\t|======================================================|\n");
	
	if(meter_kubik_air <11){
		biaya_meter = meter_kubik_air * biaya_meter_1;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 11.000/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 11.000\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 0                                 |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_0;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air <21){
		biaya_meter = meter_kubik_air * biaya_meter_2;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 11.650/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 11.650\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 35.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_1;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 20){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 13.150/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 13.150\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 35.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_n;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}
}

void golongan4_e2(){
	double biaya_meter, biaya_meter_1, biaya_meter_2, biaya_meter_n;
	double tagihan, administrasi, bpm_s;
	double denda_bulan_0, denda_bulan_1, denda_bulan_n;
	int pemakaian_bulan_lalu;
	int pemakaian_saat_ini;
	int meter_kubik_air;
	administrasi = 1.000;
	bpm_s = 12.500;
		biaya_meter_1 = 11.300;
		biaya_meter_2 = 11.950;
		biaya_meter_n = 13.950;
			denda_bulan_0 = 0;
			denda_bulan_1 = 35.000;
			denda_bulan_n = 35.000;
	
	system("cls");
	printf("\t\t\t\t ______________________________________________________ \n");
	printf("\t\t\t\t|======================================================|\n");
	printf("\t\t\t\t|=>>     Usaha atau Niaga Sedang Golongan E2 - 4    <<=|\n");
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Air Bulan Lalu : ");
	scanf("%d", &pemakaian_bulan_lalu);
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Saat Ini : ");
	scanf("%d", &pemakaian_saat_ini);
	printf("\t\t\t\t|======================================================|\n");
	
	meter_kubik_air = pemakaian_saat_ini - pemakaian_bulan_lalu;
	printf("\t\t\t\t  Meter Kubik Air adalah %d m3\n", meter_kubik_air);
	printf("\t\t\t\t|======================================================|\n");
	
	if(meter_kubik_air <11){
		biaya_meter = meter_kubik_air * biaya_meter_1;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 11.300/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 11.300\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 0                                 |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_0;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air <21){
		biaya_meter = meter_kubik_air * biaya_meter_2;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 11.950/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 11.950\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 35.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_1;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 20){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 13.950/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 13.950\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 35.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_n;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}
}

void niaga_besar(){
	double pilihan;
	int opsi;
	
	system("cls");
	printf("\t\t\t\t ___________________________________________ \n");
	printf("\t\t\t\t|===========================================|\n");
	printf("\t\t\t\t|=>>   GOLONGAN USAHA ATAU NIAGA BESAR   <<=|\n");
	printf("\t\t\t\t|-------------------------------------------|\n");
	printf("\t\t\t\t| 1. Golongan E3 - 1                        |\n");
	printf("\t\t\t\t| 2. Golongan E3 - 2                        |\n");
	printf("\t\t\t\t| 3. Golongan E3 - 3                        |\n");
	printf("\t\t\t\t| 4. Golongan E3 - 4                        |\n");
	printf("\t\t\t\t| 0. Keluar                                 |\n");
	printf("\t\t\t\t|___________________________________________|\n");
	printf("\t\t\t\t  Pilih Golongan Anda : ");
	pilihan = validasi1();
	opsi = ceil(pilihan);
	
	if(pilihan == 1){
		system("cls");
		golongan1_e3();
		
	}else if(pilihan == 2){
		system("cls");
		golongan2_e3();
		
	}else if(pilihan == 3){
		system("cls");
		golongan3_e3();
	
	}else if(pilihan == 4){
		system("cls");
		golongan4_e3();
		
	}else if(pilihan == 0){
		system("cls");
		printf("Terimakasih, Sampai Jumpa!");
		getchar();
		exit(1);
	}
}

void golongan1_e3(){
	double biaya_meter, biaya_meter_1, biaya_meter_2, biaya_meter_n;
	double tagihan, administrasi, bpm_s;
	double denda_bulan_0, denda_bulan_1, denda_bulan_n;
	int pemakaian_bulan_lalu;
	int pemakaian_saat_ini;
	int meter_kubik_air;
	administrasi = 1.000;
	bpm_s = 12.500;
		biaya_meter_1 = 11.600;
		biaya_meter_2 = 12.250;
		biaya_meter_n = 14.750;
			denda_bulan_0 = 0;
			denda_bulan_1 = 75.000;
			denda_bulan_n = 75.000;
	
	system("cls");
	printf("\t\t\t\t ______________________________________________________ \n");
	printf("\t\t\t\t|======================================================|\n");
	printf("\t\t\t\t|=>>     Usaha atau Niaga Besar Golongan E3 - 1     <<=|\n");
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Air Bulan Lalu : ");
	scanf("%d", &pemakaian_bulan_lalu);
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Saat Ini : ");
	scanf("%d", &pemakaian_saat_ini);
	printf("\t\t\t\t|======================================================|\n");
	
	meter_kubik_air = pemakaian_saat_ini - pemakaian_bulan_lalu;
	printf("\t\t\t\t  Meter Kubik Air adalah %d m3\n", meter_kubik_air);
	printf("\t\t\t\t|======================================================|\n");
	
	if(meter_kubik_air <11){
		biaya_meter = meter_kubik_air * biaya_meter_1;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 11.600/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 11.600\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 0                                 |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_0;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air <21){
		biaya_meter = meter_kubik_air * biaya_meter_2;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 12.250/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 12.250\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 75.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_1;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 20){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 14.750/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 14.750\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 75.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_n;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}
}

void golongan2_e3(){
	double biaya_meter, biaya_meter_1, biaya_meter_2, biaya_meter_n;
	double tagihan, administrasi, bpm_s;
	double denda_bulan_0, denda_bulan_1, denda_bulan_n;
	int pemakaian_bulan_lalu;
	int pemakaian_saat_ini;
	int meter_kubik_air;
	administrasi = 1.000;
	bpm_s = 12.500;
		biaya_meter_1 = 11.900;
		biaya_meter_2 = 12.550;
		biaya_meter_n = 15.050;
			denda_bulan_0 = 0;
			denda_bulan_1 = 75.000;
			denda_bulan_n = 75.000;
	
	system("cls");
	printf("\t\t\t\t ______________________________________________________ \n");
	printf("\t\t\t\t|======================================================|\n");
	printf("\t\t\t\t|=>>     Usaha atau Niaga Besar Golongan E3 - 2     <<=|\n");
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Air Bulan Lalu : ");
	scanf("%d", &pemakaian_bulan_lalu);
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Saat Ini : ");
	scanf("%d", &pemakaian_saat_ini);
	printf("\t\t\t\t|======================================================|\n");
	
	meter_kubik_air = pemakaian_saat_ini - pemakaian_bulan_lalu;
	printf("\t\t\t\t  Meter Kubik Air adalah %d m3\n", meter_kubik_air);
	printf("\t\t\t\t|======================================================|\n");
	
	if(meter_kubik_air <11){
		biaya_meter = meter_kubik_air * biaya_meter_1;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 11.900/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 11.900\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 0                                 |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_0;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air <21){
		biaya_meter = meter_kubik_air * biaya_meter_2;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 12.550/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 12.550\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 75.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_1;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 20){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 15.050/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 15.050\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 75.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_n;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}
}

void golongan3_e3(){
	double biaya_meter, biaya_meter_1, biaya_meter_2, biaya_meter_n;
	double tagihan, administrasi, bpm_s;
	double denda_bulan_0, denda_bulan_1, denda_bulan_n;
	int pemakaian_bulan_lalu;
	int pemakaian_saat_ini;
	int meter_kubik_air;
	administrasi = 1.000;
	bpm_s = 12.500;
		biaya_meter_1 = 12.200;
		biaya_meter_2 = 12.850;
		biaya_meter_n = 15.850;
			denda_bulan_0 = 0;
			denda_bulan_1 = 75.000;
			denda_bulan_n = 75.000;
	
	system("cls");
	printf("\t\t\t\t ______________________________________________________ \n");
	printf("\t\t\t\t|======================================================|\n");
	printf("\t\t\t\t|=>>     Usaha atau Niaga Besar Golongan E3 - 3     <<=|\n");
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Air Bulan Lalu : ");
	scanf("%d", &pemakaian_bulan_lalu);
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Saat Ini : ");
	scanf("%d", &pemakaian_saat_ini);
	printf("\t\t\t\t|======================================================|\n");
	
	meter_kubik_air = pemakaian_saat_ini - pemakaian_bulan_lalu;
	printf("\t\t\t\t  Meter Kubik Air adalah %d m3\n", meter_kubik_air);
	printf("\t\t\t\t|======================================================|\n");
	
	if(meter_kubik_air <11){
		biaya_meter = meter_kubik_air * biaya_meter_1;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 12.200/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 12.200\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 0                                 |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_0;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air <21){
		biaya_meter = meter_kubik_air * biaya_meter_2;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 12.850/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 12.850\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 75.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_1;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 20){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 15.850/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 15.850\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 75.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_n;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}
}

void golongan4_e3(){
	double biaya_meter, biaya_meter_1, biaya_meter_2, biaya_meter_n;
	double tagihan, administrasi, bpm_s;
	double denda_bulan_0, denda_bulan_1, denda_bulan_n;
	int pemakaian_bulan_lalu;
	int pemakaian_saat_ini;
	int meter_kubik_air;
	administrasi = 1.000;
	bpm_s = 12.500;
		biaya_meter_1 = 12.500;
		biaya_meter_2 = 13.150;
		biaya_meter_n = 16.650;
			denda_bulan_0 = 0;
			denda_bulan_1 = 75.000;
			denda_bulan_n = 75.000;
	
	system("cls");
	printf("\t\t\t\t ______________________________________________________ \n");
	printf("\t\t\t\t|======================================================|\n");
	printf("\t\t\t\t|=>>     Usaha atau Niaga Besar Golongan E3 - 4     <<=|\n");
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Air Bulan Lalu : ");
	scanf("%d", &pemakaian_bulan_lalu);
	printf("\t\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t\t  Pembacaan Meter Saat Ini : ");
	scanf("%d", &pemakaian_saat_ini);
	printf("\t\t\t\t|======================================================|\n");
	
	meter_kubik_air = pemakaian_saat_ini - pemakaian_bulan_lalu;
	printf("\t\t\t\t  Meter Kubik Air adalah %d m3\n", meter_kubik_air);
	printf("\t\t\t\t|======================================================|\n");
	
	if(meter_kubik_air <11){
		biaya_meter = meter_kubik_air * biaya_meter_1;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 12.500/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 12.500\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 0                                 |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_0;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air <21){
		biaya_meter = meter_kubik_air * biaya_meter_2;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 13.150/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 13.150\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 75.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_1;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}else if(meter_kubik_air > 20){
		biaya_meter = meter_kubik_air * biaya_meter_n;
		printf("\t\t\t\t| Tarif per m3 (Rp) : 16.650/m3                        |\n");
		printf("\t\t\t\t  Biaya Meter Air = %d x 16.650\n", meter_kubik_air);
		printf("\t\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t\t  Biaya Meter Air adalah Rp. %5.3f\n", biaya_meter);
		printf("\t\t\t\t|======================================================|\n");
		
		printf("\t\t\t\t| Biaya Lainnya :                                      |\n");
		printf("\t\t\t\t| 1. Administrasi  : 1.000                             |\n");
		printf("\t\t\t\t| 2. BPM_S         : 12.500                            |\n");
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t| Denda            : 75.000                            |\n");
		printf("\t\t\t\t|------------------------------------------------------|\n");
		
		tagihan = bpm_s + administrasi + biaya_meter + denda_bulan_n;
		printf("\t\t\t\t  Total Tagihan adalah Rp. %5.3f\n", tagihan);
		printf("\t\t\t\t|======================================================|\n");
		printf("\t\t\t\t|______________________________________________________|\n"); 
		
	}
}
