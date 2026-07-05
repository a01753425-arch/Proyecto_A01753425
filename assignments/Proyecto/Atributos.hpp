class Atributos {
private:
    int vida;
    int salud;
    int ataque;
    int nivel;

    public:
    Atributos();
    Atributos(int vida, int salud, int ataque, int nivel);
    int getVida();
    int getSalud();
    int getAtaque();
    int getNivel();
    void setVida(int nuevaVida);
    void setSalud(int nuevaSalud);
    void setAtaque(int nuevoAtaque);
    void setNivel(int nuevoNivel);
    void mostrarInfo();

    int porSalud();
    void imprimeBarra();
    int calculaAtaque(Atributos& objetivo);
    void recibeAtaque(int puntosAtaque);
    void atacar(Atributos& objetivo);


};
