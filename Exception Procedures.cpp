// İstisna İşlemleri.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

//double bolme(int a,int b) {
//	try {
//		if (b < 1) {
//			throw - 1;
//			return a / b;
//		}
//	}catch(int)	{
//		std::cout << "Bir sayi 0'a bolunemez";
//	}
//}
//
//int main()
//{
//	std::cout << bolme(10, 0);
//}

//double bolme(int a, int b) {
//	try {
//		if (b < 1) {
//			throw - 1;
//			return a / b;
//		}
//	}
//	catch (int err) {
//		std::cout << err << "Bir sayi 0'a bolunemez";
//	}
//}
//
//int main()
//{
//	std::cout << bolme(10, 0);
//}

//double bolme(int a, int b) {
//	try {
//		if (b < 1) {
//			throw - 1;
//			return a / b;
//		}
//	}
//	catch (int err) {
//		if (err == -1)
//		{
//
//		}
//		std::cout << err << "Bir sayi 0'a bolunemez";
//	}
//}
//
//int main()
//{
//	std::cout << bolme(10, 0);
//}


//double bolme(int a,int b) {
//	try {
//		if (b < 1) {
//			throw - 1;
//
//
//		}
//
//		if (a < 1)
//		{
//			throw "0 bolunemez";
//		}
//		return a / b;
//
//	}catch (int err) {
//
//		std::cout << err << "Bir sayi 0'a bolunemez";
//
//	}catch (const char* err) {
//
//		std::cout << *err << "Bir sayi 0'a bolunemez";
//	}
//}
//
//int main()
//{
//	std::cout << bolme(0, 3);
//}

//double bolme(int a, int b) {
//	try {
//		if (b < 1) {
//			throw - 1;
//
//
//		}
//
//		if (a < 1)
//		{
//			throw false;
//		}
//		return a / b;
//
//	}
//	catch (int err) {
//
//		std::cout << err << "Bir sayi 0'a bolunemez";
//
//	}
//	catch (bool) {
//
//		std::cout << "Bir sayi 0'a bolunemez";
//	}
//}
//
//int main()
//{
//	std::cout << bolme(0, 3);
//}

//class Ex {
//	private:
//		std::string message;
//	public:
//		Ex(std::string message) {
//			this->message = message;
//		}
//
//		std::string yaz() {
//			return this->message;
//		}
//};
//
//
//double bolme(int a, int b) {
//	try {
//		if (b < 1) {
//			throw - 1;
//
//
//		}
//
//		if (a < 1)
//		{
//			//throw false;
//			throw Ex ("Merhaba");
//		}
//		return a / b;
//
//	}catch (int err) {
//
//		std::cout << err << "Bir sayi 0'a bolunemez";
//
//	}catch (bool) {
//
//		std::cout << "Bir sayi 0'a bolunemez";
//	}catch (Ex err) {
//
//		std::cout << err.yaz();
//	}
//}
//
//int main()
//{
//	std::cout << bolme(0, 3);
//}

//class Ex {
//private:
//	std::string message;
//public:
//	Ex(const std::string message) {
//		this->message = message;
//	}
//
//	std::string yaz() {
//		return this->message;
//	}
//};
//
//
//double bolme(int a, int b) {
//	try {
//		if (b < 1) {
//			throw - 1;
//
//
//		}
//
//		if (a < 1)
//		{
//			//throw false;
//			throw Ex("Merhaba");
//		}
//		return a / b;
//
//	}catch (int err) {
//
//		std::cout << err << "Bir sayi 0'a bolunemez";
//
//	}catch (bool) {
//
//		std::cout << "Bir sayi 0'a bolunemez";
//	}catch (Ex err) {
//
//		std::cout << err.yaz();
//	}
//}
//
//int main()
//{
//	std::cout << bolme(0, 3);
//}

//class Ex {
//private:
//	std::string message;
//public:
//	Ex(const std::string message) : message(message) {
//
//	}
//	std::string yaz() {
//		return this->message;
//	}
//};
//
//
//double bolme(int a, int b) {
//	try {
//		if (b < 1) {
//			throw - 1;
//
//
//		}
//
//		if (a < 1)
//		{
//			//throw false;
//			throw Ex("Merhaba");
//		}
//		return a / b;
//
//	}catch (int err) {
//
//		std::cout << err << "Bir sayi 0'a bolunemez";
//
//	}catch (bool) {
//
//		std::cout << "Bir sayi 0'a bolunemez";
//	}catch (Ex err) {
//
//		std::cout << err.yaz();
//	}
//}
//
//int main()
//{
//	std::cout << bolme(0, 3);
//}

//class Ex {
//private:
//	std::string message;
//public:
//	Ex(const std::string message) : message(message) {
//
//	}
//	std::string yaz() {
//		return this->message;
//	}
//};
//
//std::string hata(std::string error) {
//	return error;
//}
// 
//double bolme(int a, int b) {
//	try {
//		if (b < 1) {
//			throw - 1;
//
//
//		}
//
//		if (a < 1)
//		{
//			throw hata("merhaba 123");
//			//throw false;
//			//throw Ex("Merhaba");
//		}
//		return a / b;
//
//	}catch (int err) {
//
//		std::cout << err << "Bir sayi 0'a bolunemez";
//
//	}catch (bool) {
//
//		std::cout << "Bir sayi 0'a bolunemez";
//	}catch (Ex err) {
//
//		std::cout << err.yaz();
//	}catch (std::string err) {
//
//		std::cout << err;
//	}
//}
//
//int main()
//{
//	std::cout << bolme(0, 3);
//}

//class Ex {
//private:
//	std::string message;
//public:
//	Ex(const std::string message) : message(message) {
//
//	}
//	std::string yaz() {
//		return this->message;
//	}
//};
//
//std::string hata(std::string error) {
//	return error;
//}
//
//double bolme(int a, int b) {
//
//		if (b < 1) {
//			throw - 1;
//
//
//		}
//
//		if (a < 1)
//		{
//			throw hata("merhaba 123");
//	
//		}
//		return a / b;
//
//}
//
//int main()
//{
//	try {
//		std::cout << bolme(0, 3);
//
//	}
//	catch (int err) {
//
//		std::cout << err << "Bir sayi 0'a bolunemez";
//
//	}
//	catch (bool) {
//
//		std::cout << "Bir sayi 0'a bolunemez";
//	}
//	catch (Ex err) {
//
//		std::cout << err.yaz();
//	}
//	catch (std::string err) {
//
//		std::cout << err;
//	}
//
//}


// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
