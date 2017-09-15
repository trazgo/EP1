//--------------------------------------------------------------
// NOMES DOS RESPONSБVEIS: blablabla E blablabla
//--------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>


// ######### ESCREVA O NROUSP DO PRIMEIRO INTEGRANTE AQUI
char* nroUSP1(9423996) {
    return("0000000");
}

// ######### ESCREVA O NROUSP DO SEGUNDO INTEGRANTE AQUI (OU DEIXE COM ZERO)
char* nroUSP2(0) {
    return("0000000");
}


// elemento da lista
typedef struct estr {
        char letra;
        struct estr *prox;
} NO;


// funcao principal
NO* decodificar(NO* p);


//------------------------------------------
// O EP consiste em implementar esta funcao
// e outras funcoes auxiliares que esta
// necessitar
//------------------------------------------
NO* decodificar(NO* p) {

	NO* resp;
	resp = NULL;

	// seu codigo AQUI
    //1a etapa copia lista inversa
    NO* copiaInver(NO*p){

        if(p){
            NO* copia = (NO*) malloc(sizeof(NO));
            copia.letra= p.letra;
            p= p->prox;
            copia->prox= copiaInver(p);
            return copia;
        }
        return null;
    }
    //2a etapa inverte as nao vogais
    NO* vogais(NO* p){
        while(p){

            // verificador de vogais
            if(p.letra ==a)p= p->prox;
            if(p.letra ==á)p= p->prox;
            if(p.letra ==à)p= p->prox;
            if(p.letra ==A)p= p->prox;
            if(p.letra ==Á)p= p->prox;
            if(p.letra ==À)p= p->prox;
            if(p.letra ==e)p= p->prox;
            if(p.letra ==й)p= p->prox;
            if(p.letra ==и)p= p->prox;
            if(p.letra ==E)p= p->prox;
            if(p.letra ==Й)p= p->prox;
            if(p.letra ==И)p= p->prox;
            if(p.letra ==i)p= p->prox;
            if(p.letra ==н)p= p->prox;
            if(p.letra ==м)p= p->prox;
            if(p.letra ==I)p= p->prox;
            if(p.letra ==Н)p= p->prox;
            if(p.letra ==М)p= p->prox;
            if(p.letra ==o)p= p->prox;
            if(p.letra ==у)p= p->prox;
            if(p.letra ==т)p= p->prox;
            if(p.letra ==O)p= p->prox;
            if(p.letra ==У)p= p->prox;
            if(p.letra ==Т)p= p->prox;
            if(p.letra ==u)p= p->prox;
            if(p.letra ==ъ)p= p->prox;
            if(p.letra ==щ)p= p->prox;
            if(p.letra ==U)p= p->prox;
            if(p.letra ==Ъ)p= p->prox;
            if(p.letra ==Щ)p= p->prox;
            // fim do verificador de vogais


            else{
                vogais (p)->prox = p;
            }
            return p;
        }
	}
    //aplica as funções e retorna a resposta
    resp= copiaInver(p);
    resp= vogais(resp);
	return resp;
}



//---------------------------------------------------------
// use main() para fazer chamadas de teste ao seu programa
//---------------------------------------------------------
int main() {

	NO* p = null;

	// aqui vc pode incluir codigo para inserir elementos
	// de teste na sua lista p

	// o EP sera testado com chamadas deste tipo
	NO* teste = null;
	teste = decodificar(p);

}

// por favor nao inclua nenhum cуdigo abaixo da funзгo main()
