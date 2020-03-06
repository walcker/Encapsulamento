using namespace std;

class carro{

    private:
      string marca;
      int ano;

    public:
      void setMarca(string x){
        marca = x;
      }
      string getMarca(){
        return marca;
      }

      void setAno(int y){
        if( y > 1990){
          ano = y;
        }else{
          ano = 1990;
        }
      }

      int getAno(){
        return ano;
      }
};