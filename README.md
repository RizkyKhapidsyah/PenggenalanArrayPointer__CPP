# PengenalanArrayPointer__CPP
Bahan Ajar Fundamental Pemrograman C++. Pengenalan Array Pointer<br><br>
<img src="https://github.com/RizkyKhapidsyah/PenggenalanArrayPointer__CPP/blob/master/Results/001.PNG"><br><br>
- Lihat <a href="https://github.com/RizkyKhapidsyah/PenggenalanArrayPointer__CPP/blob/master/Source.cpp">Source Code.</a><br><br>

#

Tahukah kamu bahwa jika kamu menuliskan sebuah array tanpa tanda kurung kotak ([]) maupun indeksnya, maka array tersebut menunjuk atau bersi alamat elemen pertama dari array tersebut. Misalkan kamu membuat sebuah pointer bertipe int dengan nama pointerArray dan sebuah array dengan tipe yang sama yaitu int dengan nama nilaiArray, maka pemberian nilai berikut sah dan dapat dilakukan:

      int *pointerArray;
      int nilaiArray[5];
      pointerArray = nilaiArray; //memberikan alamat elemen pertama array pada variabel pointer

Dari sintaks di atas, variabel pointer dengan nama pointrArray sekarang menunjuk pada alamat memori elemen pertama array dengan nama nilaiArray. Nah secara tidak langsung kita dapat mengakses nilai elemen array dengan menggunakan variabel pointer. Berikut adalah contoh sintaks pemrogramannya:

      #include <iostream>
      using namespace std;

      int main()
      {
        int nilaiArray[5] = {2,5,4,6,7};
        int *pointerArray;
        pointerArray = nilaiArray;
        
        cout<<"Nilai pada elemen 0 nilaiArray adalah = "<<nilaiArray[0]<<endl;
        cout<<"Nilai pada elemen 0 nilaiArray (Pointer) adalah = "<<*pointerArray<<endl;
        pointerArray++; // naikan alamat yang ditunjuk pointer sejauh 1 integer
        
        *pointerArray = 10; //Ubah nilai elemen 1 array (nilaiArray) menjadi 10
        cout<<"Nilai pada elemen 1 nilaiArray adalah = "<<nilaiArray[1]<<endl;
        cout<<"Nilai pada elemen 1 nilaiArray (Pointer) adalah = "<<*pointerArray<<endl;
        
        pointerArray = nilaiArray; //kembalikan pointer pada elemen pertama
        cout<<endl;
        cout<<"Akses nilai semua array dengan pointer dan looping for"<<endl;

        for (int i=0; i<5; i++){
          cout<<"Nilai indeks ["<<i<<"] adalah = "<<*(pointerArray+i)<<endl;
        }
        
      return 0;
      }

Dari hasil di atas, dapat kamu lihat bagaimana cara mengakses nilai array dengan menggunakan pointer. Suatu pointer bertipe int hanya dapat digunakan untuk menunjuk pada variabel int. Sebab, tipe data tersebut akan menentukan sifat pointer ketika alamat pointer tersebut dilakukan increment. Begitu juga untuk tipe data yang lain.

#

Referensi Artikel:<br>
- <a href="https://www.sinauarduino.com">SinauArduino.</a><br><br>
Referensi Source Code:<br>
<a href="https://www.youtube.com/user/faqihzamukhlish"> Kelas Terbuka </a> dan <a href="https://github.com/kelasterbuka"> Kelas Terbuka (Repository)</a>. Created by <a href="https://github.com/faqihza">Faqihza Mukhlish.</a> Thanks To: <a href="https://www.youtube.com/channel/UCRGHjysoCemh4y7tCJQs30w/about">Faqihza Mukhlish.</a><br>

-----
All <a href="https://github.com/RizkyKhapidsyah/PenggenalanArrayPointer__CPP/blob/master/Source.cpp">Source Code</a> is Modified.
