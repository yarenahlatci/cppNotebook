
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

// Şifre oluşturma işlevi
string generatePassword(int length, bool useDigits, bool useSymbols, bool useUpperCase, bool useLowerCase) {
    string passwordChars = "";

    // Kullanıcı tercihlerine göre karakterleri ekle
    if (useDigits)
        passwordChars += "0123456789";
    if (useSymbols)
        passwordChars += "!@#$%^&*()-=_+[]{}|;:,.<>?";
    if (useUpperCase)
        passwordChars += "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    if (useLowerCase)
        passwordChars += "abcdefghijklmnopqrstuvwxyz";

    if (passwordChars.empty()) {
        cout << "Hata: En az bir karakter türü seçmelisiniz!" << endl;
        return "";
    }

    string password;
    for (int i = 0; i < length; ++i) {
        int randomIndex = rand() % passwordChars.length();
        password += passwordChars[randomIndex];
    }
    return password;
}

// Şifre karmaşıklığı değerlendirme işlevi
string evaluatePasswordComplexity(const string& password) {
    int length = password.length();
    bool hasDigits = false;
    bool hasSymbols = false;
    bool hasUpperCase = false;
    bool hasLowerCase = false;

    for (char ch : password) {
        if (isdigit(ch))
            hasDigits = true;
        else if (ispunct(ch))
            hasSymbols = true;
        else if (isupper(ch))
            hasUpperCase = true;
        else if (islower(ch))
            hasLowerCase = true;
    }

    string complexity;

    if (length < 8) {
        complexity = "Zayıf";
    } else if ((hasDigits || hasSymbols) && (hasUpperCase || hasLowerCase)) {
        complexity = "Güçlü";
    } else {
        complexity = "Orta";
    }

    return complexity;
}

int main() {
    srand(time(0)); 
    int length;
    bool useDigits, useSymbols, useUpperCase, useLowerCase;

    cout << "Şifre uzunluğunu girin: ";
    cin >> length;

    cout << "Rakamları kullanmak istiyor musunuz? (1: Evet, 0: Hayır): ";
    cin >> useDigits;

    cout << "Sembolleri kullanmak istiyor musunuz? (1: Evet, 0: Hayır): ";
    cin >> useSymbols;

    cout << "Büyük harfleri kullanmak istiyor musunuz? (1: Evet, 0: Hayır): ";
    cin >> useUpperCase;

    cout << "Küçük harfleri kullanmak istiyor musunuz? (1: Evet, 0: Hayır): ";
    cin >> useLowerCase;

    string password = generatePassword(length, useDigits, useSymbols, useUpperCase, useLowerCase);

    if (!password.empty()) {
        cout << "Oluşturulan Şifre: " << password << endl;

        // Şifre güvenliği değerlendirmesi
        string complexity = evaluatePasswordComplexity(password);
        cout << "Şifre Güvenliği: " << complexity << endl;
    }

    return 0;
}