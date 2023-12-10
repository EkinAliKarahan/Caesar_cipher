Ekin Ali Karahan 1230505045 || Burak Çavuşoğlu 5230505068 || Yazılım 1.Sınıf Güz Dönemi



Proje dosyası içinde sunulan main1104.c eki, C dilinde DevC++ 5.11 kullanılarak yazılmış basit bir Sezar Şifreleme programıdır.Caeser cipher türü şifreleme sisteminin çalışma prensibi C dilinde harflere karşılık gelen sayıların değerlerinin değiştirilmesine dayanır.

Kodu kullanmanız için ilk önce kendi tercih ettiğiniz Ide'ye göre ufak modifikasyonlar yapmanız ve sonrasında şifreleme yapmak için 1'e , şifre kırmak için 2'ye basmanı istenecektir.
İifreleme fonksiyonu için "şifrelenecek kelime" ve "kaydirma miktarı" sorularına cevap vermeniz yeterli olacaktır. Aynı şekilde şifre kırma fonksiyonu için de programın size sorduğu kırılacak şifre, ve uygulanması gereken kaydırma miktarı sorularını cevaplamanız yeterlidir. Ancak sıfrelenecek veya sifresi kırılacak kelimeleri Ingilizce karakterle yazmanız, kelimeyi 100 karakterden kısa girmeniz ve kaydırma değerini pozitif girmeniz gerekmektedir.

Programı test etmek için girdiğiniz bir kelimeyi pozitif miktarda kaydırıp çıkan sonucu programı yeniden başlattıktan sonra şifre kırma fonksiyonunda aynı kelime ve kaydırma miktarını kullanarak en başta
girilen kelimeye denk olup olmadığını kontrol ederek test edebilirsiniz. Örneğin programa girilen "The quick brown fox jumps over the lazy dog" Cumlesi +3 kaydırma değeri ile şifrelenince ekrana
"Wkh txlfn eurzq ira mxpsv ryhu wkh odcb grj" çıktısı gösterilir. Bu şifreyi şifre kırma fonksiyonuna 3 değerle girince tekrardan orijinal cümle yazdırılmalıdır.

Kodun bölümleri hakkında detaylı bilgiler:


*Scanf fonksiyonlarıyla kullanıcın girdiği değerler gerekli değişkenlere atılır
        

for (a = 0; kelime[a] != '\0'; a++) {
            karakter = kelime[a];

                if (islower(karakter)) {
                    karakter = (karakter - 'a' + kaydir) % 26 + 'a';
                    kelime[a] = karakter;
                } 

* Yukarıdaki kısım için :
For ile baslayan döngü kelime dizisindeki karakterlerin 0 değerine gelinene kadar artırılarak karakter değişkenine atanmasını sağlar

islowe ve isupper girilen kelimede kücük harflerin yine küçük şekilde, büyük harflerin de yine büyük bir şekilde şifrelenmesini sağlar

Bunların altında kalan kısım ise diziden alınan karakterin değerinin kaydırma miktarı kadar artırılmasını sağlar ve mod 26 alınarak deger, Ingilizce alfabe limitlerinde tutulur.

kelime [a] = karakter ile diziden seçilip değeri kaydırılan karakterler tekrardan kelime dizisi içine yerlestirilir ve peintf fonksiyonu ile kullanıcıya şifreli bir şekilde sunulmuş olur.

Şifre kırma fonksiyonundaki tek fark kaydırma miktarının toplanması yerine çıkarılmasıdır


