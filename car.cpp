#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
/*#include <chrono>
#include <thread>
#include <cstdlib>*/

using namespace std;

class Giris {
    private:
        string sifre;
    public:
        string kullaniciAdi;

    void girisYap() {
        cout << "\n\t\t\t\t\tKullanici Adi: ";
        cin >> kullaniciAdi;
        cout << "\n\t\t\t\t\tSifre: ";
        cin >> sifre;
    }
    
    bool girisDogrula(const string& dogrulaKullaniciAdi, const string& dogrulaSifre) {
        return (kullaniciAdi == dogrulaKullaniciAdi && sifre == dogrulaSifre);
    }
    
    
};

class Araba{
    
    public:
    	string isim;
        string model;
        int yil;
    	double fiyat;
    Araba(string I, string M, int Y, double C)
    {
        isim = I;
        model = M;
        yil = Y;
        fiyat = C;
    }
    
    float kiralamaUcretiHesapla(int gunSayisi) {
    	
		return gunSayisi * fiyat;
	}


    void Yazdir()
    {
        cout << endl;
        cout << "\t\t\t\t\t\tAraba Markasi : " << isim << endl;
        
        cout << "\t\t\t\t\t\tAraba Modeli : " << model << endl;
        
        cout << "\t\t\t\t\t\tAraba Yili : " << yil << endl;
        
        cout << "\t\t\t\t\t\tAraba Saatlik Fiyati : " << fiyat << " TL" << endl;
        
        cout << endl;
        
    }
    
    
    
};

class ArabaKiralama{
    private:
        vector <Araba> Araclar;
    public:
    	string secilen_Araba;
        ArabaKiralama(){
            
        Araba Car1("Toyota", "Corolla", 2022, 255);
        Araba Car2("BMW", "3. Serisi", 2023, 345);
        Araba Car3("Tesla", "Model 3", 2024, 550);
        Araba Car4("Ford", "F-150", 2020, 375);
        Araba Car5("Volkswagen", "Golf", 2023, 165);
        
        Araclar.push_back(Car1);
        Araclar.push_back(Car2);
        Araclar.push_back(Car3);
        Araclar.push_back(Car4);    
        Araclar.push_back(Car5);    
        
        cout << "\t\t\tARACLAR :" << endl;
        for(int i = 0; i < Araclar.size(); ++i){
            Araclar[i].Yazdir();
        }
    }
    
    void ArabaSecme() 
    {
        cout << "\t\t\t\t\t\tKiralamak istediginiz araci seciniz(Marka) : ";
          cin >> secilen_Araba;
         
         if(secilen_Araba == "Toyota" || secilen_Araba == "toyota")
         {
            Araba Car1("Toyota", "Corolla", 2022, 255);
            Car1.Yazdir();
            cout << "\t\t\t\t\tTebrikler.Iyı secim" << endl;
            
        }
        else if(secilen_Araba == "BMW" || secilen_Araba == "Bmw" || secilen_Araba == "bmw")
         {
            Araba Car2("BMW", "3. Serisi", 2023, 345);
            Car2.Yazdir();
            cout << "\t\t\t\t\tTebrikler.Guzel araba" << endl;
            
        }
        else if(secilen_Araba == "Tesla" || secilen_Araba == "tesla")
         {
            Araba Car3("Tesla", "Model 3", 2024, 550);
            Car3.Yazdir();
            cout << "\t\t\t\t\tTebrikler.saglikli gunlerde kullanin" << endl;
            
        }
        else if(secilen_Araba == "Ford" || secilen_Araba == "ford")
         {
            Araba Car4("Ford", "F-150", 2020, 375);
            Car4.Yazdir();
            cout << "\t\t\t\t\tTebrikler.Gule Gule kullanin" << endl;
            
        }
        else if(secilen_Araba == "Volkswagen" || secilen_Araba == "volkswagen")
         {
            Araba Car5("Volkswagen", "Golf", 2023, 165);
            Car5.Yazdir();
            cout << "\t\t\t\t\t\tTebrikler.Harikaa" << endl;
            
        }
        else
        {
         cout << "\t\t(Araba Markasi) olmasi gerekir!!" << endl;
        } 
    }
    
     
};

class ana{
    
    public:
    void getAnaekran() {
    int sayi;
    for(int i = 0; i <= i; i++){
        cout << "\n\n\t\t\t\t\t\t1. Araba Kirala " << endl;
      cout << "\n\n\t\t\t\t\t\t2. Arabalari Goster " << endl;
    cout << "\n\n\t\t\t\t\t\t3. Exit " << endl;
 
    cout << endl; cout << "\n\t\t\t\t\t\tBir islem giriniz : ";
    cin >> sayi;
    if(sayi == 1)
    {
        ArabaKiralama SELECT;
        SELECT.ArabaSecme();              
        break;
    }
    else if(sayi == 2)
    {
        ArabaKiralama();
        break;
    }
    else if(sayi == 3)
    {
        
         cout << "\n\nExiting";
         for (int i = 0; i < 3; ++i) {
            cout << ".";
            /*this_thread::sleep_for(chrono::milliseconds(500));
            this_thread::sleep_for(chrono::milliseconds(500));*/
        }
        //this_thread::sleep_for(chrono::seconds(2));
        cout << "\nChecked out. Gule Gule " << endl;
        
         Giris kullanici;
         kullanici.girisYap();
          if (kullanici.girisDogrula("Admin", "1234")) 
    {
        cout << "Doğrulanıyor";
        for (int i = 0; i < 3; ++i) {
            cout << ".";
            /*this_thread::sleep_for(chrono::milliseconds(500));
            this_thread::sleep_for(chrono::milliseconds(500));*/
        }
        //this_thread::sleep_for(chrono::seconds(2));
        cout << "\nGiris basarili. Hos geldiniz, " << kullanici.kullaniciAdi << "!" << endl;
        getAnaekran();
        break;
    }
    else 
    {
        cout << "\nHatali kullanici adi veya sifre. \nProgram sonlandiriliyor.\n";
        continue;
    }
         break;
    }
    else
    {
    cout << endl;   cout << "Bu islem bulunamadi.";
    cout << endl;   continue;
    }
   }
  }
};
