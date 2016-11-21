#include <socketclient.h>
#include <string>

using namespace std;

int main(){
    SocketCliente* conexion = new SocketCliente;
    string msg;

    if(!conexion->connectar())
        cout << "Error al conectar con el servidor" << endl;
    while(conexion->connectar()){
        cin >> msg;
        conexion->setMensaje(msg.c_str());
    }
}
