enum direcao{N, NE, E, SE, S,SW, W, NW};

union identificador {
	char codigo[5];
	int numero;
};

struct bola{
	identificador id; // identifica��o da bola
	char marca[30];// marcada bola
	int posX;// posi��o no eixo X
	int posY;// posi��o no eixo Y
	direcao dir;// orienta��o no plano
	float vel;// velocidade
	float acel;// acelera��o
};

bola proVolley[10];// declara��o de vari�vel

/*
Considerando as declara��es abaixo, responda dizendo qual o tipo da informa��o que deve estar armazenada na vari�vel:
a)proVolley
b)proVolley[4]
c)proVolley[1].marca
d)proVolley[1].marca[2]
e)proVolley[0].dir
f)proVolley[4].id
g)proVolley[3].id.numero
h)proVolley[9].acel


Respostas:
a) bola[10]
b) bola
c) char[30]
d) char
e) direcao
f) indentificador
g) int
h) float

*/
