#include <iostream>
#include <cstring>
using namespace std;
struct Packet{
    char sourceIP[16];
    char destIP[16];
    char protocol[10];
    char payload[100];
};
void inspectPacket(packet p){
    cout<<"[SNIFFER] Packet Captured!"<<endl;
    cout<<"From (SourceIP):      "<<p.sourceIP<<endl;
    cout<<"To (DestinationIP):     "<<p.destIP<<endl;
    cout<<"Protocol used:     "<<p.protocol<<endl;
    cout<<"Message/Data:      "<<p.payload<<endl;
}
int main(){
    cout<<"== Simple C++ Packet Sniffer Started =="<<endl;

    Packet packet1;
    strcpy(packet1.sourceIP, "192.168.1.10");
    strcpy(packet1.destIP, "172.217.14.206");
    strcpy(packet1.protocol, "HTTP");
    strcpy(packet1.payload, "GET/index.html");
    Packet packet2;
    strcpy(packet2.sourceIP, "10.0.0.5");
    strcpy(packet2.destIP, "10.0.0.1");
    strcpy(packet2.protocol, "TCP");
    strcpy(packet2.payload, "Ack Ping Request");

    inspect Packet(packet1);
    inspect Packet(packet2);
    return 0;
}