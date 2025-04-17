int main() {

    
    for(int i = 0; i <= i; i++){
    Giris kullanici;
    kullanici.girisYap();

    if (kullanici.girisDogrula("Admin", "12345")) 
    {
        cout << "Dogrulaniyor";
        for (int i = 0; i < 3; ++i) {
            cout << ".";
            /*this_thread::sleep_for(chrono::milliseconds(500));
            this_thread::sleep_for(chrono::milliseconds(500));*/
        }
        //this_thread::sleep_for(chrono::seconds(2));
        cout << "\nGiris basarili. Hos geldiniz, " << kullanici.kullaniciAdi << "!" << endl;
        break;
    }
    else 
    {
        cout << "\nHatali kullanici adi veya sifre. \nProgram sonlandiriliyor.\n";
        continue;
        
    }
}
    ana obj;
    obj.getAnaekran();
    

  
    return 0;
}
