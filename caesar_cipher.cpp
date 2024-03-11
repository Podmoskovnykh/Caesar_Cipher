#include <iostream>
#include <string>

using namespace std;

string encryptCaesarCipher(const string& message, int shift) {
    string result = "";

    for (char ch : message) {
        if (isalpha(ch)) {
            int offset = isupper(ch) ? 'A' : 'a';
            result += static_cast<char>((ch - offset + shift) % 26 + offset);
        } else {
            result += ch;
        }
    }

    return result;
}

int main() {
    string message;
    cout << "Enter your message: ";
    getline(cin, message);

    int shift = 3;

    string encryptedMessage = encryptCaesarCipher(message, shift);

    cout << "Encrypted message: " << encryptedMessage << endl;

    return 0;
}
