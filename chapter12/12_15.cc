#include <iostream>
#include <memory>
using namespace std;

struct connection {
	string _ip;
	int _port;
	connection(string ip, int port): _ip(ip), _port(port) {}
};

struct destination {
	string _ip;
	int _port;
	destination(string ip, int port): _ip(ip), _port(port) {}
};

static void disconnect(connection* pConn) {
	cout << "disconnect() :- end connection" << endl;
	delete pConn;
}

static shared_ptr<connection> connect(destination* pDest) {
	shared_ptr<connection> pConn(new connection(pDest->_ip, pDest->_port), [](connection *pConn) { disconnect(pConn); });
	cout << "connect() :- creating connection(" << pConn.use_count() << ")" << endl;
	return pConn;
}

static void f(destination& d) {
	shared_ptr<connection> pConn = connect(&d);
	cout << "f() :- logic using connection(" << pConn.use_count() << ")" << endl;
	cout << "f() :- exiting" << endl;
}
int main() {
	destination dest("202.118.176.67", 3316);
	f(dest);
	return 0;
}
