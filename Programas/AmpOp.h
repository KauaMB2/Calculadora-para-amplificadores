#ifndef __AMPOP_H_
#define __AMPOP_H_
using namespace std;
int IniciarAO(){
	char config[10];
	char res[10];
	char dado[10];
	float EPCI = 0;
	float EPCS = 0;
	float Er = 0;
	float Rp = 0;
	float Rf = 0;
	float Eomax = 0;
	float Dhis = 0;
	float Ganho = 0;
	float Vin = 0;
	float Vout = 0;
	cout << "Maravilha! Voc� escolheu a op��o 2(Amplificadores Operacionais)\n\n";
	cout << "Agora selecione qual Amp-Op deseja projetar:\n";
	cout << "[1] = Amplificador de tens�o\n";
	cout << "[2] = Amp-Op Comparador com histerese\n";
	cin >> res;
	system("cls");
	switch(res[0]){
		case '1':
			system("cls");
			cout << "Voc� escolheu trabalhar com o N�o inversor\n\n";
			cout << "Informe o ganho e a tens�o de entrada(Vin) do Amp-Op\nIremos calcular a tens�o de sa�da\n";
			cout << "Ganho: ";
			cin >> Ganho;
			cout << "Vin:";
			cin >> Vin;
			Vout = Vin*Ganho;
			cout << "Tens�o de sa�da: " << Vout;
			break;
		case '2':
			system("cls");
			cout << "Voc� escolheu a op��o 2(Comparador de tens�o com histerese)\n\n";
			cout << "Agora, selecione a configura��o do Amp-Op:\n";
			cout << "[1] = N�o inversor com histerese\n";
			cout << "[2] = Inversor com histerese\n";
			cin >> config;
			system("cls");
			switch(config[0]){
				system("cls");
				case '1':
					cout << "Voc� est� trabalhando com o Comparador n�o inversor com histerese\n\n";
					cout << "Selecione qual informa��o voc� deseja obter:\n";
					cout << "[1] = Er e faixa de histerese(Dhis)\n";
					cout << "[2] = Epcs\n";
					cout << "[3] = Epci\n";
					cin >> dado;
					system("cls");
					switch(dado[0]){
						case '1':
							cout << "Voc� optou por obter o Er e a faixa de histerese(Dhis)\n\n";
							cout << "Entre com o valor de EPCI:";
							cin >> EPCI;
							cout << endl;
							cout << "Entre com o valor de EPCS:";
							cin >> EPCS;
							cout << endl;
							Er = (EPCI + EPCS)/2;
							Dhis = (EPCS - EPCI);
							cout << "Valor da faixa de histerese(Dhis): " << Dhis << "[V]"<< endl;
							cout << "Valor de Er: " << Er << "[V]"<< endl;
							break;
						case '2':
							cout << "Voc� optou por obter o Epcs\n\n";
							cout << "Entre com o valor de Er:";
							cin >> Er;
							cout << endl;
							cout << "Entre com o valor de Eomax:";
							cin >> Eomax;
							cout << endl;
							cout << "Entre com o valor de Rp:";
							cin >> Rp;
							cout << endl;
							cout << "Entre com o valor de Rf:";
							cin >> Rf;
							cout << endl;
							EPCS = Er + (Rp/Rf)*Eomax;
							cout << "Valor de Epcs: " << EPCS << "[V]"<< endl;
							break;
						case '3':
							system("cls");
							cout << "Voc� optou por obter o Epci\n\n";
							cout << "Entre com o valor de Er:";
							cin >> Er;
							cout << endl;
							cout << "Entre com o valor de Eomax:";
							cin >> Eomax;
							cout << endl;
							cout << "Entre com o valor de Rp:";
							cin >> Rp;
							cout << endl;
							cout << "Entre com o valor de Rf:";
							cin >> Rf;
							cout << endl;
							EPCS = Er - (Rp/Rf)*Eomax;
							cout << "Valor de Er: " << EPCI << "[V]"<< endl;
							break;
						default:
							cout << "Erro desconhecido\nPor favor, verifique se digitou o valor corretamente";
					break;
				}
				case '2':
					cout << "Voc� est� trabalhando com o Comparador inversor com histerese\n\n";
					cout << "Selecione qual informa��o voc� deseja obter:\n";
					cout << "[1] = Er e faixa de histerese(Dhis)\n";
					cout << "[2] = Epcs\n";
					cout << "[3] = Epci\n";
					cin >> dado;
					system("cls");
					switch(dado[0]){
						case '1':
							cout << "Voc� optou por obter o Er e a faixa de histerese(Dhis)\n\n";
							cout << "Entre com o valor de EPCI:";
							cin >> EPCI;
							cout << endl;
							cout << "Entre com o valor de EPCS:";
							cin >> EPCS;
							cout << endl;
							Er = (EPCI + EPCS)/2;
							Dhis = (EPCS - EPCI);
							cout << "Valor da faixa de histerese(Dhis): " << Dhis << "[V]"<< endl;
							cout << "Valor de Er: " << Er << "[V]"<< endl;
							break;
						case '2':
							cout << "Voc� optou por obter o Epcs\n\n";
							cout << "Entre com o valor de Er:";
							cin >> Er;
							cout << endl;
							cout << "Entre com o valor de Eomax:";
							cin >> Eomax;
							cout << endl;
							cout << "Entre com o valor de Rp:";
							cin >> Rp;
							cout << endl;
							cout << "Entre com o valor de Rf:";
							cin >> Rf;
							cout << endl;
							EPCS = Er + (Rp/(Rp + Rf))*Eomax;
							cout << "Valor de Epcs: " << EPCS << "[V]"<< endl;
							break;
						case '3':
							system("cls");
							cout << "Voc� optou por obter o Epci\n\n";
							cout << "Entre com o valor de Er:";
							cin >> Er;
							cout << endl;
							cout << "Entre com o valor de Eomax:";
							cin >> Eomax;
							cout << endl;
							cout << "Entre com o valor de Rp:";
							cin >> Rp;
							cout << endl;
							cout << "Entre com o valor de Rf:";
							cin >> Rf;
							cout << endl;
							EPCS = Er - (Rp/(Rp + Rf))*Eomax;
							cout << "Valor de Epci: " << EPCI << "[V]"<< endl;
							break;
						default:
							cout << "Erro desconhecido\nPor favor, verifique se digitou o valor corretamente";
					}
					break;
				default:
					cout << "Erro desconhecido\nPor favor, verifique se digitou o valor corretamente";
			}
			break;
		default:
			cout << "Erro desconhecido\nPor favor, verifique se digitou o valor corretamente";
	}
	cout << "\nObrigado por usar nosso programa";
}
#endif
