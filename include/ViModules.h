
#ifndef TEST_TWO_SOCKETS_VIMODULES_H
#define TEST_TWO_SOCKETS_VIMODULES_H

#include <sys/socket.h>
#include <netpacket/packet.h>
#include <netinet/in.h>
#include <iostream>
#include <arpa/inet.h>
#include <cstring>
#include <unistd.h>

#include "Config.h"



class ViModules {
public:
    bool connectAuth(std::vector <Data> configVector);
    int communicationWthAuth(char (&sendMess)[4096],char (&recvMess)[4096]);
    bool closeSockAuth();
    bool connectConfig(std::vector <Data> configVector);
    int communicationWthConfig(char (&sendMess)[4096],char (&recvMess)[4096]);
    bool closeSockConfig();
    bool connectConnect(std::vector <Data> configVector);
    int communicationWthConnect(char (&sendMess)[4096],char (&recvMess)[4096]);
    bool closeSockConnect();

private:
    int sockAuth = socket(AF_INET, SOCK_STREAM, 0 );
    int sockConfig = socket(AF_INET, SOCK_STREAM, 0 );
    int sockConnect = socket(AF_INET, SOCK_STREAM, 0 );

};


#endif //TEST_TWO_SOCKETS_VIMODULES_H
