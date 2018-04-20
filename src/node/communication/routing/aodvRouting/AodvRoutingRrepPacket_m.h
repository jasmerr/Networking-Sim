//
// Generated file, do not edit! Created by nedtool 4.6 from src/node/communication/routing/aodvRouting/AodvRoutingRrepPacket.msg.
//

#ifndef _AODVROUTINGRREPPACKET_M_H_
#define _AODVROUTINGRREPPACKET_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
#include "PacketId_m.h"
// }}

/**
 * Class generated from <tt>src/node/communication/routing/aodvRouting/AodvRoutingRrepPacket.msg:22</tt> by nedtool.
 * <pre>
 * //id =2
 * packet AodvRREPPacket extends PacketId
 * {
 *     bool flagR;
 *     bool flagA;
 *     int prefixSz;
 *     int hopCount;
 *     string originator;
 *     unsigned long destinationSeqNum;
 *     string destinationAodv;
 *     double lifetime;
 * }
 * </pre>
 */
class AodvRREPPacket : public ::PacketId
{
  protected:
    bool flagR_var;
    bool flagA_var;
    int prefixSz_var;
    int hopCount_var;
    opp_string originator_var;
    unsigned long destinationSeqNum_var;
    opp_string destinationAodv_var;
    double lifetime_var;

  private:
    void copy(const AodvRREPPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const AodvRREPPacket&);

  public:
    AodvRREPPacket(const char *name=NULL, int kind=0);
    AodvRREPPacket(const AodvRREPPacket& other);
    virtual ~AodvRREPPacket();
    AodvRREPPacket& operator=(const AodvRREPPacket& other);
    virtual AodvRREPPacket *dup() const {return new AodvRREPPacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual bool getFlagR() const;
    virtual void setFlagR(bool flagR);
    virtual bool getFlagA() const;
    virtual void setFlagA(bool flagA);
    virtual int getPrefixSz() const;
    virtual void setPrefixSz(int prefixSz);
    virtual int getHopCount() const;
    virtual void setHopCount(int hopCount);
    virtual const char * getOriginator() const;
    virtual void setOriginator(const char * originator);
    virtual unsigned long getDestinationSeqNum() const;
    virtual void setDestinationSeqNum(unsigned long destinationSeqNum);
    virtual const char * getDestinationAodv() const;
    virtual void setDestinationAodv(const char * destinationAodv);
    virtual double getLifetime() const;
    virtual void setLifetime(double lifetime);
};

inline void doPacking(cCommBuffer *b, AodvRREPPacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, AodvRREPPacket& obj) {obj.parsimUnpack(b);}


#endif // ifndef _AODVROUTINGRREPPACKET_M_H_

