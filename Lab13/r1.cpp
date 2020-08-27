enum direcao{N, NE, E, SE, S,SW, W, NW};

union identificador {
	char codigo[5];
	int numero;
};

struct bola{
	identificador id; // identificação da bola
	char marca[30];// marcada bola
	int posX;// posição no eixo X
	int posY;// posição no eixo Y
	direcao dir;// orientação no plano
	float vel;// velocidade
	float acel;// aceleração
};

bola proVolley[10];// declaração de variável

/*
Considerando as declarações abaixo, responda dizendo qual o tipo da informação que deve estar armazenada na variável:
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
