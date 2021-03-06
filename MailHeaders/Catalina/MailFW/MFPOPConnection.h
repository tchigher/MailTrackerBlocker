//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailCore/MCConnection.h>

@class NSArray, NSData, NSMapTable, NSMutableData;
@protocol MFPOPAccount, MFPOPConnectionDelegate;

@interface MFPOPConnection : MCConnection
{
    NSMutableData *_sendBuffer;	// 8 = 0x8
    NSMapTable *_listResults;	// 16 = 0x10
    NSMapTable *_serverMessageIdsByNumber;	// 24 = 0x18
    id <MFPOPConnectionDelegate> _delegate;	// 32 = 0x20
    NSData *_apopTimeStamp;	// 40 = 0x28
    NSArray *_capabilities;	// 48 = 0x30
    BOOL _capaCommandFailed;	// 56 = 0x38
    BOOL _currentlyFetchingMessage;	// 57 = 0x39
    BOOL _connectionShouldPrefetchMessages;	// 58 = 0x3a
    id _context;	// 64 = 0x40
    unsigned long long _numberOfMessagesToFetch;	// 72 = 0x48
    unsigned long long _numberOfMessagesFetched;	// 80 = 0x50
    unsigned long long _totalBytesToFetch;	// 88 = 0x58
    unsigned long long _totalBytesReceived;	// 96 = 0x60
    long long _activityMonitorKey;	// 104 = 0x68
    unsigned long long _numberOfMessagesAvailable;	// 112 = 0x70
}

+ (id)log;	// IMP=0x00000000001d59a8
@property(nonatomic) BOOL connectionShouldPrefetchMessages; // @synthesize connectionShouldPrefetchMessages=_connectionShouldPrefetchMessages;
@property(nonatomic) unsigned long long numberOfMessagesAvailable; // @synthesize numberOfMessagesAvailable=_numberOfMessagesAvailable;
@property(nonatomic) long long activityMonitorKey; // @synthesize activityMonitorKey=_activityMonitorKey;
@property(nonatomic) BOOL currentlyFetchingMessage; // @synthesize currentlyFetchingMessage=_currentlyFetchingMessage;
@property(nonatomic) unsigned long long totalBytesReceived; // @synthesize totalBytesReceived=_totalBytesReceived;
@property(nonatomic) unsigned long long totalBytesToFetch; // @synthesize totalBytesToFetch=_totalBytesToFetch;
@property(nonatomic) unsigned long long numberOfMessagesFetched; // @synthesize numberOfMessagesFetched=_numberOfMessagesFetched;
@property(nonatomic) unsigned long long numberOfMessagesToFetch; // @synthesize numberOfMessagesToFetch=_numberOfMessagesToFetch;
@property(retain, nonatomic) id context; // @synthesize context=_context;
// - (void).cxx_destruct;	// IMP=0x00000000001dc37d
- (void)_logServerResponse:(id)arg1;	// IMP=0x00000000001dc0aa
- (BOOL)_readMultilineResponseWithMaxSize:(unsigned long long)arg1 intoMutableData:(id)arg2 informDelegate:(BOOL)arg3;	// IMP=0x00000000001dbda1
- (BOOL)_parseSingleLineResponse:(id)arg1 status:(long long)arg2 responseCode:(long long *)arg3 textRange:(struct _NSRange *)arg4 humanReadableText:(id *)arg5;	// IMP=0x00000000001db987
- (void)_parseErrorFromResponseData:(id)arg1 isCapabilitiesError:(BOOL)arg2 isAuthenticationError:(BOOL)arg3;	// IMP=0x00000000001db192
- (id)_copyResponseLineData;	// IMP=0x00000000001db088
- (BOOL)_readAndParseSingleLineResponseIsCapabilities:(BOOL)arg1 isAuthentication:(BOOL)arg2 logFullResponse:(BOOL)arg3;	// IMP=0x00000000001daeca
- (BOOL)_sendCommand:(const char *)arg1 dontLogIndex:(unsigned long long)arg2 withArguments:(id)arg3;	// IMP=0x00000000001da91a
- (BOOL)dele:(unsigned long long)arg1;	// IMP=0x00000000001da832
- (BOOL)deleteMessagesOnServer:(id)arg1;	// IMP=0x00000000001da4fe
- (id)_newDataForMessage:(unsigned long long)arg1 ofSize:(unsigned long long)arg2 informDelegate:(BOOL)arg3;	// IMP=0x00000000001da337
- (BOOL)_retr:(unsigned long long)arg1;	// IMP=0x00000000001da0d7
- (BOOL)fetchMessages:(id)arg1 totalBytes:(unsigned long long)arg2;	// IMP=0x00000000001d9c45
- (void)getTopOfMessageNumber:(unsigned long long)arg1 intoMutableData:(id)arg2;	// IMP=0x00000000001d9a6a
- (id)newMessageHeaderForMessageNumber:(unsigned long long)arg1;	// IMP=0x00000000001d99f5
- (void)setMessageID:(id)arg1 forMessageNumber:(unsigned long long)arg2;	// IMP=0x00000000001d99d1
- (id)messageIDForMessageNumber:(unsigned long long)arg1;	// IMP=0x00000000001d973b
- (BOOL)_getListResults;	// IMP=0x00000000001d94d4
- (unsigned long long)sizeOfMessageNumber:(unsigned long long)arg1;	// IMP=0x00000000001d947f
- (BOOL)getMessageNumbers:(id *)arg1 andMessageIdsByNumber:(id *)arg2;	// IMP=0x00000000001d8f7f
- (BOOL)doStat;	// IMP=0x00000000001d8de7
@property(readonly, nonatomic) BOOL messagesAvailable;
- (BOOL)_pass:(id)arg1;	// IMP=0x00000000001d8cf2
- (BOOL)_user:(id)arg1;	// IMP=0x00000000001d8b4a
- (BOOL)_apopWithUsername:(id)arg1 password:(id)arg2;	// IMP=0x00000000001d8859
- (BOOL)_supportsAuthResponseCode;	// IMP=0x00000000001d87a5
- (BOOL)_supportsResponseCodes;	// IMP=0x00000000001d86f1
- (BOOL)_supportsAPOP;	// IMP=0x00000000001d86da
- (BOOL)_supportsUSER;	// IMP=0x00000000001d861e
- (BOOL)_supportsStartTLS;	// IMP=0x00000000001d856a
- (id)_capabilities;	// IMP=0x00000000001d8176
- (BOOL)_quit;	// IMP=0x00000000001d8111
- (void)quit;	// IMP=0x00000000001d80ff
- (BOOL)supportsPlainTextSchemes;	// IMP=0x00000000001d80ed
- (id)_authenticateWithPlainTextSchemes;	// IMP=0x00000000001d77ac
- (id)_authenticateWithNonPlainTextSchemes;	// IMP=0x00000000001d70ec
- (BOOL)_authenticateWithSASLClient:(id)arg1;	// IMP=0x00000000001d6721
- (BOOL)authenticate;	// IMP=0x00000000001d668f
- (id)authenticationMechanisms;	// IMP=0x00000000001d6410
- (BOOL)_completeConnectionWithResult:(BOOL)arg1;	// IMP=0x00000000001d6084
- (BOOL)_startTLS;	// IMP=0x00000000001d5d2c
- (void)_setupConnection;	// IMP=0x00000000001d5ca1
- (id)errorURLScheme;	// IMP=0x00000000001d5c82
@property __weak id <MFPOPAccount> account;
- (void)setDelegate:(id)arg1 context:(id)arg2;	// IMP=0x00000000001d5a7c
- (id)init;	// IMP=0x00000000001d5a05

@end

