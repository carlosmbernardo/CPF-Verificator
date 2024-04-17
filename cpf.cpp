using namespace std;

int main() {
    int cpf; 
    cout << "Digite os 8 ou 9 números do CPF, por gentileza: ";
    cin >> cpf;
    if (cpf >= 10000000 && cpf <= 999999999) {    
        int digito9 = cpf % 10;
        cpf /= 10;
        int digito8 = cpf % 10;
        cpf /= 10;
        int digito7 = cpf % 10;
        cpf /= 10;
        int digito6 = cpf % 10;
        cpf /= 10;
        int digito5 = cpf % 10;
        cpf /= 10;
        int digito4 = cpf % 10;
        cpf /= 10;
        int digito3 = cpf % 10;
        cpf /= 10;
        int digito2 = cpf % 10;
        cpf /= 10;
        int digito1 = cpf % 10; 
        int calculo1 = digito1 * 10 + digito2 * 9 + digito3 * 8+ digito4 * 7 + digito5 * 6 + 
                       digito6 * 5 + digito7 * 4 + digito8 * 3 + digito9 * 2;
        int digito_verificador1 = 11 - (calculo1 % 11);
        if (digito_verificador1 >= 10) {
            digito_verificador1 = 0;
        }
        int calculo2 = digito1 * 11 + digito2 * 10 + digito3 * 9 + digito4 * 8 + digito5 * 7 +
                       digito6 * 6 + digito7 * 5 + digito8 * 4 + digito9 * 3 + digito_verificador1 * 2;
        int digito_verificador2 = 11 - (calculo2 % 11);
        if (digito_verificador2 >= 10) {
            digito_verificador2 = 0;
        }
        cout << "CPF digitado: ";
        cout << digito1 << digito2 << digito3 << ".";
        cout << digito4 << digito5 << digito6 << ".";
        cout << digito7 << digito8 << digito9 << "-";
        cout << digito_verificador1 << digito_verificador2 << endl;
    } else {
        cout << "CPF inválido " << endl;
    }
    return 0;
}