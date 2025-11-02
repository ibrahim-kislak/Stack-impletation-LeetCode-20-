📚 C++ Linked List Tabanlı Stack ve Uygulaması: Valid Parentheses (LeetCode 20)

Bu proje, C++ dilinde Linked List (Bağlı Liste) kullanılarak oluşturulmuş özel bir Stack (Yığın) veri yapısını ve bu yapının klasik bir algoritma problemi olan Parantez Eşleştirme (Valid Parentheses) çözümünde nasıl kullanıldığını göstermektedir.

✨ Özellikler

Bu depo iki temel bileşenden oluşur:
Bileşen	Açıklama
Stack.h	Kendi yazdığımız, char (karakter) tipini depolayan Linked List tabanlı Stack yapısının tanımı (push, pop, peek, isEmpty).
main.cpp	Stack.h'ı dahil ederek LeetCode 20 problemini çözen isValid() fonksiyonunu ve çeşitli test senaryolarını içerir.

🧠 Veri Yapısı ve Algoritma

Stack (Yığın) Implementasyonu

Stack, LIFO (Last-In, First-Out) prensibini uygular. Bu projede, Stack'in verimli (O(1)) çalışması için her bir eleman bir Node olarak tanımlanmış ve bu düğümler birbirine bağlanmıştır:

    push (Ekleme): Yeni düğüm, her zaman listenin başına (top) eklenir.

    pop (Çıkarma): Listenin başındaki düğüm (top) silinir.

    Bu işlemler, listenin sadece başını değiştirdiği için sabit zamanda (O(1)) gerçekleşir.

Valid Parentheses (Parantez Eşleştirme) Algoritması

isValid fonksiyonu, string'deki iç içe geçmiş açma ve kapama parantezlerinin sırasını kontrol etmek için Stack'i kullanır:

    Açma Parantezleri ((, {, [): Stack'e PUSH edilir (kapanma beklentisini tutar).

    Kapama Parantezleri (), }, ]): Stack'in tepesi kontrol edilir:

        Eğer Stack boşsa veya tepedeki eleman doğru açma karşılığı değilse, ifade geçersizdir.

        Eğer uyumluysa, Stack'ten POP edilir.

    Son Kontrol: String bittikten sonra Stack boş kalmalıdır. Aksi takdirde, açılmış ama kapanmamış parantezler vardır.

🚀 Kurulum ve Çalıştırma

Projenin C++ ortamında derlenip çalıştırılması için gerekli adımlar aşağıdadır.

    Depoyu Klonlayın:
    Bash

git clone https://github.com/ibrahim-kislak/Stack-impletation-LeetCode-20-
cd Stack-impletation-LeetCode-20-

Derleme (g++ kullanarak): Stack.h ve main.cpp aynı klasörde olduğu için basit bir derleme komutu yeterlidir:
Bash

g++ main.cpp -o ParantezKontrol

Çalıştırma:
Bash

    ./ParantezKontrol


🧪 Örnek Test Çıktıları

Çalıştırma sonrasında aşağıdaki gibi bir çıktı almalısınız:

--- Valid Parentheses Testleri ---
1. ()[]{} -> Gecerli (True)
2. ([{}]) -> Gecerli (True)
3. (] -> Gecersiz (False)
4. ((( -> Gecersiz (False)
5. }{ -> Gecersiz (False)
6. {[]} -> Gecerli (True)
