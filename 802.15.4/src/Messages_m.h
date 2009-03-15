//
// Generated file, do not edit! Created by opp_msgc 4.0 from Messages.msg.
//

#ifndef _MESSAGES_M_H_
#define _MESSAGES_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0400
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{ ... }} section:

#include "typedef.h"
// end cplusplus



/**
 * Class generated from <tt>Messages.msg</tt> by opp_msgc.
 * <pre>
 * message NlmeMsg extends cMessage {
 * };
 * </pre>
 */
class NlmeMsg : public cMessage
{
  protected:

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const NlmeMsg&);

  public:
    NlmeMsg(const char *name=NULL, int kind=0);
    NlmeMsg(const NlmeMsg& other);
    virtual ~NlmeMsg();
    NlmeMsg& operator=(const NlmeMsg& other);
    virtual NlmeMsg *dup() const {return new NlmeMsg(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, NlmeMsg& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, NlmeMsg& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>Messages.msg</tt> by opp_msgc.
 * <pre>
 * message NlmeNetworkFormation_request extends NlmeMsg {
 *     
 * 	
 * 	
 *     unsigned int ScanChannels;
 *     unsigned char ScanDuration;
 *     unsigned char BeaconOrder;
 *     unsigned char SuperframeOrder;
 *     unsigned short PANId;
 *     unsigned char BatteryLifeExtension;
 * };
 * </pre>
 */
class NlmeNetworkFormation_request : public NlmeMsg
{
  protected:
    unsigned int ScanChannels_var;
    unsigned char ScanDuration_var;
    unsigned char BeaconOrder_var;
    unsigned char SuperframeOrder_var;
    unsigned short PANId_var;
    unsigned char BatteryLifeExtension_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const NlmeNetworkFormation_request&);

  public:
    NlmeNetworkFormation_request(const char *name=NULL, int kind=0);
    NlmeNetworkFormation_request(const NlmeNetworkFormation_request& other);
    virtual ~NlmeNetworkFormation_request();
    NlmeNetworkFormation_request& operator=(const NlmeNetworkFormation_request& other);
    virtual NlmeNetworkFormation_request *dup() const {return new NlmeNetworkFormation_request(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getScanChannels() const;
    virtual void setScanChannels(unsigned int ScanChannels_var);
    virtual unsigned char getScanDuration() const;
    virtual void setScanDuration(unsigned char ScanDuration_var);
    virtual unsigned char getBeaconOrder() const;
    virtual void setBeaconOrder(unsigned char BeaconOrder_var);
    virtual unsigned char getSuperframeOrder() const;
    virtual void setSuperframeOrder(unsigned char SuperframeOrder_var);
    virtual unsigned short getPANId() const;
    virtual void setPANId(unsigned short PANId_var);
    virtual unsigned char getBatteryLifeExtension() const;
    virtual void setBatteryLifeExtension(unsigned char BatteryLifeExtension_var);
};

inline void doPacking(cCommBuffer *b, NlmeNetworkFormation_request& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, NlmeNetworkFormation_request& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>Messages.msg</tt> by opp_msgc.
 * <pre>
 * message NlmeNetworkFormation_confirm extends NlmeMsg {
 *     
 * };
 * </pre>
 */
class NlmeNetworkFormation_confirm : public NlmeMsg
{
  protected:

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const NlmeNetworkFormation_confirm&);

  public:
    NlmeNetworkFormation_confirm(const char *name=NULL, int kind=0);
    NlmeNetworkFormation_confirm(const NlmeNetworkFormation_confirm& other);
    virtual ~NlmeNetworkFormation_confirm();
    NlmeNetworkFormation_confirm& operator=(const NlmeNetworkFormation_confirm& other);
    virtual NlmeNetworkFormation_confirm *dup() const {return new NlmeNetworkFormation_confirm(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, NlmeNetworkFormation_confirm& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, NlmeNetworkFormation_confirm& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>Messages.msg</tt> by opp_msgc.
 * <pre>
 * message NldeMsg extends cMessage {
 * };
 * </pre>
 */
class NldeMsg : public cMessage
{
  protected:

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const NldeMsg&);

  public:
    NldeMsg(const char *name=NULL, int kind=0);
    NldeMsg(const NldeMsg& other);
    virtual ~NldeMsg();
    NldeMsg& operator=(const NldeMsg& other);
    virtual NldeMsg *dup() const {return new NldeMsg(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, NldeMsg& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, NldeMsg& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>Messages.msg</tt> by opp_msgc.
 * <pre>
 * message MlmeMsg extends cMessage {
 * };
 * </pre>
 */
class MlmeMsg : public cMessage
{
  protected:

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const MlmeMsg&);

  public:
    MlmeMsg(const char *name=NULL, int kind=0);
    MlmeMsg(const MlmeMsg& other);
    virtual ~MlmeMsg();
    MlmeMsg& operator=(const MlmeMsg& other);
    virtual MlmeMsg *dup() const {return new MlmeMsg(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, MlmeMsg& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, MlmeMsg& obj) {obj.parsimUnpack(b);}

/**
 * Struct generated from Messages.msg by opp_msgc.
 */
struct PANDescriptor
{
    PANDescriptor();
    unsigned char coordAddrMode;
    unsigned short coordPANId;
    unsigned long coordAddress;
    unsigned char logicalChannel;
    unsigned char channelPage;
    unsigned short superframeSpec;
    bool GTSPermit;
    unsigned char linkQuality;
    unsigned int timeStamp;
    unsigned char securityFailure;
    unsigned char securityLevel;
    unsigned char keyIdMode;
    unsigned char keySource[8];
    unsigned char kedyIndex;
};

void doPacking(cCommBuffer *b, PANDescriptor& a);
void doUnpacking(cCommBuffer *b, PANDescriptor& a);

/**
 * Class generated from <tt>Messages.msg</tt> by opp_msgc.
 * <pre>
 * message MlmeScan_request extends MlmeMsg {
 *     
 *     
 *     
 *     
 *     unsigned char scanType;
 *     unsigned int scanChannels;
 *     unsigned char scanDuration;
 *     unsigned char channelPage;
 *     unsigned char securityLevel;
 *     unsigned char keyIdMode;
 *     unsigned char keySource[];
 *     unsigned char kedyIndex;
 * };
 * </pre>
 */
class MlmeScan_request : public MlmeMsg
{
  protected:
    unsigned char scanType_var;
    unsigned int scanChannels_var;
    unsigned char scanDuration_var;
    unsigned char channelPage_var;
    unsigned char securityLevel_var;
    unsigned char keyIdMode_var;
    unsigned char *keySource_var; // array ptr
    unsigned int keySource_arraysize;
    unsigned char kedyIndex_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const MlmeScan_request&);

  public:
    MlmeScan_request(const char *name=NULL, int kind=0);
    MlmeScan_request(const MlmeScan_request& other);
    virtual ~MlmeScan_request();
    MlmeScan_request& operator=(const MlmeScan_request& other);
    virtual MlmeScan_request *dup() const {return new MlmeScan_request(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned char getScanType() const;
    virtual void setScanType(unsigned char scanType_var);
    virtual unsigned int getScanChannels() const;
    virtual void setScanChannels(unsigned int scanChannels_var);
    virtual unsigned char getScanDuration() const;
    virtual void setScanDuration(unsigned char scanDuration_var);
    virtual unsigned char getChannelPage() const;
    virtual void setChannelPage(unsigned char channelPage_var);
    virtual unsigned char getSecurityLevel() const;
    virtual void setSecurityLevel(unsigned char securityLevel_var);
    virtual unsigned char getKeyIdMode() const;
    virtual void setKeyIdMode(unsigned char keyIdMode_var);
    virtual void setKeySourceArraySize(unsigned int size);
    virtual unsigned int getKeySourceArraySize() const;
    virtual unsigned char getKeySource(unsigned int k) const;
    virtual void setKeySource(unsigned int k, unsigned char keySource_var);
    virtual unsigned char getKedyIndex() const;
    virtual void setKedyIndex(unsigned char kedyIndex_var);
};

inline void doPacking(cCommBuffer *b, MlmeScan_request& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, MlmeScan_request& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>Messages.msg</tt> by opp_msgc.
 * <pre>
 * message MlmeScan_confirm extends MlmeMsg {
 *     unsigned char status enum(MacEnum);
 *     unsigned char scanType;
 *     unsigned char channelPage;
 *     unsigned int unscannedChannels;
 *     unsigned int resultListSize;
 *     unsigned char energyDetectList[];
 *     PANDescriptor panDescriptorList[];
 * };
 * </pre>
 */
class MlmeScan_confirm : public MlmeMsg
{
  protected:
    unsigned char status_var;
    unsigned char scanType_var;
    unsigned char channelPage_var;
    unsigned int unscannedChannels_var;
    unsigned int resultListSize_var;
    unsigned char *energyDetectList_var; // array ptr
    unsigned int energyDetectList_arraysize;
    PANDescriptor *panDescriptorList_var; // array ptr
    unsigned int panDescriptorList_arraysize;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const MlmeScan_confirm&);

  public:
    MlmeScan_confirm(const char *name=NULL, int kind=0);
    MlmeScan_confirm(const MlmeScan_confirm& other);
    virtual ~MlmeScan_confirm();
    MlmeScan_confirm& operator=(const MlmeScan_confirm& other);
    virtual MlmeScan_confirm *dup() const {return new MlmeScan_confirm(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned char getStatus() const;
    virtual void setStatus(unsigned char status_var);
    virtual unsigned char getScanType() const;
    virtual void setScanType(unsigned char scanType_var);
    virtual unsigned char getChannelPage() const;
    virtual void setChannelPage(unsigned char channelPage_var);
    virtual unsigned int getUnscannedChannels() const;
    virtual void setUnscannedChannels(unsigned int unscannedChannels_var);
    virtual unsigned int getResultListSize() const;
    virtual void setResultListSize(unsigned int resultListSize_var);
    virtual void setEnergyDetectListArraySize(unsigned int size);
    virtual unsigned int getEnergyDetectListArraySize() const;
    virtual unsigned char getEnergyDetectList(unsigned int k) const;
    virtual void setEnergyDetectList(unsigned int k, unsigned char energyDetectList_var);
    virtual void setPanDescriptorListArraySize(unsigned int size);
    virtual unsigned int getPanDescriptorListArraySize() const;
    virtual PANDescriptor& getPanDescriptorList(unsigned int k);
    virtual const PANDescriptor& getPanDescriptorList(unsigned int k) const {return const_cast<MlmeScan_confirm*>(this)->getPanDescriptorList(k);}
    virtual void setPanDescriptorList(unsigned int k, const PANDescriptor& panDescriptorList_var);
};

inline void doPacking(cCommBuffer *b, MlmeScan_confirm& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, MlmeScan_confirm& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>Messages.msg</tt> by opp_msgc.
 * <pre>
 * message MldeMsg extends cMessage {
 * };
 * </pre>
 */
class MldeMsg : public cMessage
{
  protected:

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const MldeMsg&);

  public:
    MldeMsg(const char *name=NULL, int kind=0);
    MldeMsg(const MldeMsg& other);
    virtual ~MldeMsg();
    MldeMsg& operator=(const MldeMsg& other);
    virtual MldeMsg *dup() const {return new MldeMsg(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, MldeMsg& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, MldeMsg& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>Messages.msg</tt> by opp_msgc.
 * <pre>
 * message PlmeMsg extends cMessage {
 * };
 * </pre>
 */
class PlmeMsg : public cMessage
{
  protected:

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const PlmeMsg&);

  public:
    PlmeMsg(const char *name=NULL, int kind=0);
    PlmeMsg(const PlmeMsg& other);
    virtual ~PlmeMsg();
    PlmeMsg& operator=(const PlmeMsg& other);
    virtual PlmeMsg *dup() const {return new PlmeMsg(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, PlmeMsg& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, PlmeMsg& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>Messages.msg</tt> by opp_msgc.
 * <pre>
 * message PlmeSetTrxState_request extends PlmeMsg {
 *     unsigned char state enum(PhyEnum);
 * };
 * </pre>
 */
class PlmeSetTrxState_request : public PlmeMsg
{
  protected:
    unsigned char state_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const PlmeSetTrxState_request&);

  public:
    PlmeSetTrxState_request(const char *name=NULL, int kind=0);
    PlmeSetTrxState_request(const PlmeSetTrxState_request& other);
    virtual ~PlmeSetTrxState_request();
    PlmeSetTrxState_request& operator=(const PlmeSetTrxState_request& other);
    virtual PlmeSetTrxState_request *dup() const {return new PlmeSetTrxState_request(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned char getState() const;
    virtual void setState(unsigned char state_var);
};

inline void doPacking(cCommBuffer *b, PlmeSetTrxState_request& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, PlmeSetTrxState_request& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>Messages.msg</tt> by opp_msgc.
 * <pre>
 * message PlmeSetTrxState_confirm extends PlmeMsg {
 *     unsigned char status enum(PhyEnum);
 * };
 * </pre>
 */
class PlmeSetTrxState_confirm : public PlmeMsg
{
  protected:
    unsigned char status_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const PlmeSetTrxState_confirm&);

  public:
    PlmeSetTrxState_confirm(const char *name=NULL, int kind=0);
    PlmeSetTrxState_confirm(const PlmeSetTrxState_confirm& other);
    virtual ~PlmeSetTrxState_confirm();
    PlmeSetTrxState_confirm& operator=(const PlmeSetTrxState_confirm& other);
    virtual PlmeSetTrxState_confirm *dup() const {return new PlmeSetTrxState_confirm(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned char getStatus() const;
    virtual void setStatus(unsigned char status_var);
};

inline void doPacking(cCommBuffer *b, PlmeSetTrxState_confirm& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, PlmeSetTrxState_confirm& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>Messages.msg</tt> by opp_msgc.
 * <pre>
 * message PlmeSet_request extends PlmeMsg {
 *     unsigned char PIBAttribute;
 *     unsigned int PIBAttributeValue[];
 * };
 * </pre>
 */
class PlmeSet_request : public PlmeMsg
{
  protected:
    unsigned char PIBAttribute_var;
    unsigned int *PIBAttributeValue_var; // array ptr
    unsigned int PIBAttributeValue_arraysize;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const PlmeSet_request&);

  public:
    PlmeSet_request(const char *name=NULL, int kind=0);
    PlmeSet_request(const PlmeSet_request& other);
    virtual ~PlmeSet_request();
    PlmeSet_request& operator=(const PlmeSet_request& other);
    virtual PlmeSet_request *dup() const {return new PlmeSet_request(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned char getPIBAttribute() const;
    virtual void setPIBAttribute(unsigned char PIBAttribute_var);
    virtual void setPIBAttributeValueArraySize(unsigned int size);
    virtual unsigned int getPIBAttributeValueArraySize() const;
    virtual unsigned int getPIBAttributeValue(unsigned int k) const;
    virtual void setPIBAttributeValue(unsigned int k, unsigned int PIBAttributeValue_var);
};

inline void doPacking(cCommBuffer *b, PlmeSet_request& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, PlmeSet_request& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>Messages.msg</tt> by opp_msgc.
 * <pre>
 * message PlmeSet_confirm extends PlmeMsg {
 *     unsigned char status;
 *     unsigned char PIBAttribute;
 * };
 * </pre>
 */
class PlmeSet_confirm : public PlmeMsg
{
  protected:
    unsigned char status_var;
    unsigned char PIBAttribute_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const PlmeSet_confirm&);

  public:
    PlmeSet_confirm(const char *name=NULL, int kind=0);
    PlmeSet_confirm(const PlmeSet_confirm& other);
    virtual ~PlmeSet_confirm();
    PlmeSet_confirm& operator=(const PlmeSet_confirm& other);
    virtual PlmeSet_confirm *dup() const {return new PlmeSet_confirm(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned char getStatus() const;
    virtual void setStatus(unsigned char status_var);
    virtual unsigned char getPIBAttribute() const;
    virtual void setPIBAttribute(unsigned char PIBAttribute_var);
};

inline void doPacking(cCommBuffer *b, PlmeSet_confirm& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, PlmeSet_confirm& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>Messages.msg</tt> by opp_msgc.
 * <pre>
 * message PlmeEd_request extends PlmeMsg {
 * };
 * </pre>
 */
class PlmeEd_request : public PlmeMsg
{
  protected:

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const PlmeEd_request&);

  public:
    PlmeEd_request(const char *name=NULL, int kind=0);
    PlmeEd_request(const PlmeEd_request& other);
    virtual ~PlmeEd_request();
    PlmeEd_request& operator=(const PlmeEd_request& other);
    virtual PlmeEd_request *dup() const {return new PlmeEd_request(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, PlmeEd_request& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, PlmeEd_request& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>Messages.msg</tt> by opp_msgc.
 * <pre>
 * message PlmeEd_confirm extends PlmeMsg {
 *     unsigned char status;
 *     unsigned char energyLevel;
 * };
 * </pre>
 */
class PlmeEd_confirm : public PlmeMsg
{
  protected:
    unsigned char status_var;
    unsigned char energyLevel_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const PlmeEd_confirm&);

  public:
    PlmeEd_confirm(const char *name=NULL, int kind=0);
    PlmeEd_confirm(const PlmeEd_confirm& other);
    virtual ~PlmeEd_confirm();
    PlmeEd_confirm& operator=(const PlmeEd_confirm& other);
    virtual PlmeEd_confirm *dup() const {return new PlmeEd_confirm(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned char getStatus() const;
    virtual void setStatus(unsigned char status_var);
    virtual unsigned char getEnergyLevel() const;
    virtual void setEnergyLevel(unsigned char energyLevel_var);
};

inline void doPacking(cCommBuffer *b, PlmeEd_confirm& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, PlmeEd_confirm& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>Messages.msg</tt> by opp_msgc.
 * <pre>
 * message PdMsg extends cMessage {
 * };
 * </pre>
 */
class PdMsg : public cMessage
{
  protected:

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const PdMsg&);

  public:
    PdMsg(const char *name=NULL, int kind=0);
    PdMsg(const PdMsg& other);
    virtual ~PdMsg();
    PdMsg& operator=(const PdMsg& other);
    virtual PdMsg *dup() const {return new PdMsg(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, PdMsg& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, PdMsg& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>Messages.msg</tt> by opp_msgc.
 * <pre>
 * message PdData_request extends PdMsg {
 *     unsigned int psduLength;
 *     unsigned char psdu[];
 * };
 * </pre>
 */
class PdData_request : public PdMsg
{
  protected:
    unsigned int psduLength_var;
    unsigned char *psdu_var; // array ptr
    unsigned int psdu_arraysize;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const PdData_request&);

  public:
    PdData_request(const char *name=NULL, int kind=0);
    PdData_request(const PdData_request& other);
    virtual ~PdData_request();
    PdData_request& operator=(const PdData_request& other);
    virtual PdData_request *dup() const {return new PdData_request(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getPsduLength() const;
    virtual void setPsduLength(unsigned int psduLength_var);
    virtual void setPsduArraySize(unsigned int size);
    virtual unsigned int getPsduArraySize() const;
    virtual unsigned char getPsdu(unsigned int k) const;
    virtual void setPsdu(unsigned int k, unsigned char psdu_var);
};

inline void doPacking(cCommBuffer *b, PdData_request& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, PdData_request& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>Messages.msg</tt> by opp_msgc.
 * <pre>
 * message PdData_confirm extends PdMsg {
 * };
 * </pre>
 */
class PdData_confirm : public PdMsg
{
  protected:

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const PdData_confirm&);

  public:
    PdData_confirm(const char *name=NULL, int kind=0);
    PdData_confirm(const PdData_confirm& other);
    virtual ~PdData_confirm();
    PdData_confirm& operator=(const PdData_confirm& other);
    virtual PdData_confirm *dup() const {return new PdData_confirm(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, PdData_confirm& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, PdData_confirm& obj) {obj.parsimUnpack(b);}


#endif // _MESSAGES_M_H_