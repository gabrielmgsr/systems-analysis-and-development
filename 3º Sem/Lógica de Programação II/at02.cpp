#include <iostream>
#include <fstream>
#include <string>

int main() {
    int opcao;
    int N = 0;
    int **matriz = nullptr;

    do {
        std::cout << "\n--- MENU PRINCIPAL ---\n";
        std::cout << "1 - ABRIR\n";
        std::cout << "2 - SALVAR\n";
        std::cout << "3 - FECHAR\n";
        std::cout << "Escolha uma opção: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1: {
                std::string nomeArquivo;
                    std::cout << "Digite o nome do arquivo (ex: matriz.txt): ";
                    std::cin >> nomeArquivo;

                    std::ifstream arquivo(nomeArquivo);
                    if (!arquivo.is_open()) {
                        std::cout << "Erro ao abrir o arquivo!\n";
                        break;
                    }

                    std::string linhaTamanho;
                    // arquivo >> linhaTamanho;
                    // N = std::stoi(linhaTamanho.substr(7));
                    std::getline(arquivo, linhaTamanho);

                    size_t posDoisPontos = linhaTamanho.find(':');
                    if (posDoisPontos == std::string::npos) {
                        std::cout << "Erro: Formato 'tamanho:N' nao encontrado na primeira linha!\n";
                        arquivo.close();
                        break;
                    }

                    try {
                        N = std::stoi(linhaTamanho.substr(posDoisPontos + 1));
                    } catch (...) {
                        std::cout << "Erro ao converter o valor de N para inteiro!\n";
                        arquivo.close();
                        break;
                    }

                    matriz = new int*[N];
                    for (int i = 0; i < N; i++) {
                        matriz[i] = new int[N];
                    }

                    for (int i = 0; i < N; i++) {
                        std::string linhaMatriz;
                        arquivo >> linhaMatriz;
                        for (int j = 0; j < N; j++) {
                            matriz[i][j] = linhaMatriz[j] - '0';
                        }
                    }
                    arquivo.close();
                    std::cout << "Matriz carregada com sucesso!\n";

                break;
            }
                    
            case 2: {
                if (matriz == nullptr) {
                        std::cout << "Nenhuma matriz foi carregada ainda! Use a opcao 1 primeiro.\n";
                        break;
                    }

                    int maior = matriz[0][0];
                    long long multDiagonalPrincipal = 1;
                    int somaDiagonalSecundaria = 0;

                    for (int i = 0; i < N; i++){
                        for (int j = 0; j < N; j++){

                        if (matriz[i][j] > maior) {
                            maior = matriz[i][j];
                        }
                    }

                    multDiagonalPrincipal *= matriz[i][i];

                    somaDiagonalSecundaria += matriz[i][N - 1 - i];
                }
                
                std::ofstream arquivoOut("resultado_matriz.txt");
                arquivoOut << "Maior: " << maior << "\n";
                arquivoOut << "Multiplicação Diagonal Principal: " << multDiagonalPrincipal << "\n";
                arquivoOut << "Soma Diagonal Secundária: " << somaDiagonalSecundaria << "\n";
                arquivoOut.close();

                std::cout << "REsultados salvos com sucesso em 'resultado_matriz.txt!'\n";

                break;
            }
                    
            case 3: {
                if (matriz != nullptr) {
                    for (int i = 0; i < N; i++) {
                        delete[] matriz[i];
                    }
                    delete[] matriz;
                    matriz = nullptr;
                    N = 0;
                }

                std::cout << "Encerrando o programa...\n";
                break;
            }
            default: {
                std::cout << "Opcao invalida! Tente novamente.\n";
                break;
            }
                
        }
    } while (opcao != 3);
       
    return 0;

            
}