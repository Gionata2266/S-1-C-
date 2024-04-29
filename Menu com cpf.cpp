#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;

int main(){
	                                                                        
	string nome[100];
	int i,opc,pessoas;
    long long cpf[100];                        	
    string procura;
     
    

     
	cout<< "\ndigite a quantidade de pessoas que ira cadastrar\n";                      
	cin >> pessoas; 																									// guarda nome
	
	while(opc != 0){
	
		cout << "\n\t\t==MENU==\n\n";
		cout << "\nopcoes (1)CADASTRAR: (2)VIZUALIZAR: (3)ALTERAR: (4)EXCLUIR: (0)SAIR:\n";   							   //menu de opção
		cout <<"\nDigite uma opcao\n"; 
		cin >> opc;                                                                           					//guarda opção
		system("cls");
		switch(opc){
		
	
		case 1:	
			for(i=0;i<pessoas;i++){																			//percorre o vetor e guarda os nomes
				cout << "\nDigite Um Nome:\n "<<i+1<<":";
				cin>> nome[i];																				//na variavel nome e na variavel CPF
				cout << "\nDigite O CPF\n "<< i+1 <<":";
   				cin >> cpf[i];	
   				
		   }
		system("cls");   
   		break;
   		case 2:	
 			for(i=0;i<pessoas;i++){																	//percorre o vetor e mostra nome e cpf em
				cout << "\nNOME"<< i+1 <<": " << nome[i] << "\n";								//em cada posição e mostra o numero da posição
				cout << "\nCPF" << i+1 << ": " << cpf[i] << "\n";
		}
		break;
       case 3:
       	cout<<"\nDigite O Nome: \n";															//pede nome para guardar na variavel procura
       	cin >> procura;
       	
       	system("cls");
	   	for(i=0;i<pessoas;i++){                                                 //usa variavel pessoas para saber quantidade de pessoas que sera
	        nome[i];															//cadastrada. percorre vetor nome[i] e cpf[i] 		
			cpf[i];
			if(procura == nome[i] ){                                            //se procura for igual a nome na posição[i] ele ira alterar
	   			cout <<"\nFaca A Alteracao:\n";									// nome e cpf depois limpar a tela e mostrar a mensagem sucesso
	   			cout <<"\nNOME: \n";
				cin  >> nome[i];
				cout <<"\nCPF: \n";
				cin  >>cpf[i];
				system("cls");
				cout << "\n ::SUCESSO:: \n";	
					}
			   }
	   	break;
	    
	    case 4:
	    	cout << "\nDigite O Nome: \n";
	    	cin >> procura;																					
			
			for(i=0;i<pessoas;i++){													//percorre string nome e variavel cpf em todas posições
	    		nome[i];
	    		cpf[i];
	    		if(procura == nome[i]){
	    			nome[i] = "\0";																//se procura for igual a nome[i] na posição i
	    			cpf[i] = 0;																	// ira ser excluido depois lima as mensagens
	    			system("cls");
					cout << "\nNOME EXCLUIDO \n";
				}
			}
	    break;
		}
	}
	system("pause");
	return 0;
}
